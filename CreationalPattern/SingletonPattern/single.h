#pragma once

namespace SINGLE
{
	class CSingle
	{
	public:
		~CSingle();
		static CSingle * GetInstance(void);
		void display(void);

	private:
		CSingle()
		{

		}

	private:
		static CSingle *m_instance;

	};

}
