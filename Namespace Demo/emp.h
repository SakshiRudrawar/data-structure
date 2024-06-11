#include<iostream>
#include<string.h>
//using namespace std;
////////////////////////////////////
namespace USA
{	
	class Emp
	{
		int eid;
		char ename[20];
		double basic;
		public:
			Emp();
			Emp(int ,char *,double );
			int getEid();
			void setEid(int);
			double getBasic();
			void setBasic(double);
			char *getEName();
			void setEName(char *);
			void display();	
	};
	class Test
	{
		public:
		  void fun_test();	
	};

}
