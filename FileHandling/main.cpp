#include <iostream>
#include<fstream>
#include"emp.h"
using namespace std;
int main()
{
	Emp e1(101,"Aniket",21000);
	//e1.display();
	cout<<e1;
	return 0;
}

int mainEmpReadLoop()
{
	Emp e1;
	ifstream in("Empdata.bin",ios_base::binary);
	while(!in.eof())
	{
		in.read((char *)&e1,sizeof(e1));
		if(in.eof())
		{
			break;
		}
		e1.display();
	}	
	in.close();
	
}
int mainWriteLoop()
{
	ofstream out("Empdata.bin",ios_base::binary|ios_base::app);
	int eid;
	double basic;
	char ename[20];
	
	while(1)
	{
		cout<<"\nEnter eid,ename and basic";
		cin>>eid>>ename>>basic;
		Emp e1(eid,ename,basic);
		out.write((char *)&e1,sizeof(e1));
		cout<<"\nDo you wish to enter another record(y/n)?";
		char ans;
		cin>>ans;
		if(ans=='n' || ans=='N')
		{
			break;
		}
	}
	out.close();
}

int mainReadEmp()
{
	Emp e1;
	ifstream in("Empdata.bin",ios_base::binary);
	in.read((char *)&e1,sizeof(e1));
	in.close();
	e1.display();
}

int mainEmpWrite()
{
	Emp e1(101,"Akshay",21000);
	ofstream out("Empdata.bin",ios_base::binary);
	out.write((char *)&e1,sizeof(e1));
	out.close();
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mainReadBin()
{
	int x;
	double d;
	char name[20];
	ifstream in("data.bin",ios_base::binary);
	in.read((char *)&x,sizeof(x));
	in.read((char *)&d,sizeof(d));
	in.read(name,sizeof(name));
	cout<<x<<"  "<<d<<" "<<name;
	in.close();
	return 0;
}
int mainBinWrit()
{
	int x=10;
	double d=23.55;
	char name[20]="Firstbit";
	ofstream out("data.bin",ios_base::binary);
	out.write((char *)&x,sizeof(x));
	out.write((char *)&d,sizeof(d));
	out.write(name,sizeof(name));
	out.close();
	return 0;
}
int mainReadLoop()
{
	char str[100];
	ifstream in("mydata.txt");
	//eof ->end of file
	while(!in.eof())
	{
		in>>str;
		if(in.eof())
		{
			break;
		}
		cout<<str<<"\n";
	}
	in.close();
}
int mainAppend()
{
	char str[100];	
	ofstream out("mydata.txt",ios_base::app);
	do
	{
		cout<<"\nEnter data, press $ to stop :";
		cin>>str;
		if(str[0]=='$')
		{
			break;
		}
		out<<str<<"\n";		
	}while(str[0]!='$');
	out.close();
}
int mainRead()
{
	int x;
	double d;
	char name[20];
	//Read from file
	ifstream in("mydata.txt");
	in>>x>>d>>name;
	in.close();
	cout<<x<<"\t"<<d<<"\t"<<name;
	return 0;
}
int mainWrite()
{
	int x=10;
	double d=23.45;
	char name[20]="FirstBit";
	//Write to file
	ofstream out("mydata.txt");
	out<<x<<"\t"<<d<<"\t"<<name;
	out.close();
	return 0;
}
