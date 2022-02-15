#pragma once

#include<map>
using namespace std;

namespace CApi
{

	typedef void* (*Constructor)();

	class CObjectFactory
	{
	public:
		static void registerClass(std::string className, Constructor constructor)
		{
			constructors()[className] = constructor;
		}		

		static void *getObject(const std::string &className)
		{
			Constructor constructor = NULL;
			if(constructors().find(className) != constructors().end())
			{
				constructor = constructors().find(className)->second;
			}

			if(constructor == NULL)
			{
				return NULL;
			}

			return (*constructor)();
		}

	private:
		inline static std::map<std::string, Constructor> & constructors()
		{
			static std::map<std::string, Constructor> instance;
			return instance;
		}
	};


	class AbstractApi
	{
	public:
		virtual void display(void) = 0;				
	};

	#define	REG_CLASS(class_name) \
	class class_name##Helper{ \
	public: \    
		class_name##Helper(){ \
			CObjectFactory::registerClass(#class_name, class_name##Helper::createObjFunc); \
		} \
		static void* createObjFunc(){ \
			return new class_name; \
		} \
	};\ 
	class_name##Helper helper
	

	class ImplA:public AbstractApi
	{
	public:
		void display(void);				
	};

	class ImplB:public AbstractApi
	{
	public:
		void display(void);				
	};


	class AutoFactory
	{
	public:
		static AbstractApi* createApi()
		{
			AbstractApi * pApi = NULL;
			pApi = static_cast<AbstractApi*>(CObjectFactory::getObject("ImplB"));
			return pApi;
		}		
	};
}
