#include<iostream>
using namespace std;
///////////////////////
template<class T>
class Calculator
{
	T x,y;
	public:
		Calculator(T,T);
		T add();
		T subtract();
		T multiply();
		T division();
};
