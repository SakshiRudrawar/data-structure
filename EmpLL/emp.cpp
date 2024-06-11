#include"emp.h"
//////////////////////////
	Emp::Emp()
	{
		eid=0;
		strcpy(ename,"abc");
		basic = 1000;
	}
	//////////////////////////
	Emp::Emp(int id,char *nm,double bs)
	{
		eid = id;
		strcpy(ename,nm);
		basic = bs;
	}
	//////////////////////////
	int Emp::getEid()
	{
		return eid;
	}
	//////////////////////////
	void Emp::setEid(int id)
	{
		eid=id;
	}
	//////////////////////////
	double Emp::getBasic()
	{
		return basic;
	}
	//////////////////////////
	void Emp::setBasic(double bs)
	{
		basic=bs;
	}
	//////////////////////////
	char *Emp::getEName()
	{
		return ename;
	}
	//////////////////////////
	void Emp::setEName(char *nm)
	{
		strcpy(ename,nm);
	}
	//////////////////////////
	void Emp::display()
	{
		std::cout<<"\nEid ="<<eid;
		std::cout<<"\nEName ="<<ename;
		std::cout<<"\nBasic ="<<basic;
	}
	//////////////////////////	
	void operator<<(ostream &o,Emp &e)
	{
		e.display();
		/*o<<e.getEid();
		o<<e.getEName();
		o<<e.getEName();
		*/
	}
