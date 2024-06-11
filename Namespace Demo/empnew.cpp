#include"empnew.h"
using namespace std;
///////////////////////////////
India::Emp::Emp()
{
	eid=0;
	strcpy(ename,"abc");
	basic = 1000;
}
//////////////////////////
India::Emp::Emp(int id,char *nm,double bs)
{
	eid = id;
	strcpy(ename,nm);
	basic = bs;
}
//////////////////////////////////
void India::Emp::display()
{
	cout<<"\nEid ="<<eid;
	cout<<"\nEName ="<<ename;
	cout<<"\nBasic ="<<basic;
}

