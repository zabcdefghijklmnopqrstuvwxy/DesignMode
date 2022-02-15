#pragma once
namespace PRODUCT
{
	#define		PRODUCTA		1
	#define		PRODUCTB		2

	class AbstractProduct
	{
	public:
		AbstractProduct();
		~AbstractProduct();
		
		virtual void display(void) = 0;				
	};

	class ProductA:public AbstractProduct
	{
	public:
		ProductA();
		~ProductA();
		
		void display(void);				
	};

	class ProductB:public AbstractProduct
	{
	public:
		ProductB();
		~ProductB();
		
		void display(void);				
	};
}
