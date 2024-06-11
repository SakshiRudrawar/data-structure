#include "emp.h"
#include"empnew.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace USA;
using namespace India;
int main()
{
	USA::Emp e1(101,"Akshay",31000);
	e1.display();
	Test t1;
	t1.fun_test();
	
	India::Emp e2(102,"Seema",30000);
	e2.display();
		
	return 0;
}
