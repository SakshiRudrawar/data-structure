#include"calculator.cpp"
#include"time.h"
#include"stack.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	Stack<int> st(5);
	int x=10;
	st.push(x);
	x = 20;
	st.push(x);
	x = 30;
	st.push(x);
	st.display();
	
	Stack <char> stc(5);
	char ch='h';
	stc.push(ch);
	ch='e';
	stc.push(ch);
	ch='l';
	stc.push(ch);
	ch='l';
	stc.push(ch);
	ch='o';
	stc.push(ch);
	stc.display();
}
int main4()
{
	Calculator<int> c1(10,20);
	cout<<"\nSum ="<<c1.add();
	Calculator<double> c2(34.44,45.44);
	cout<<"\nProduct ="<<c2.multiply();
}


template<class A,class B,class C>
void display(A a,B b,C c)
{
	cout<<"\nFirst Data = "<<a;
	cout<<"\nSecond Data = "<<b;
	cout<<"\nThird Data = "<<c;
}
template<class R>
R sum(R x,R y)
{
	return x+y;
}

int main2()
{
	display(10,23.33,'a');
	display(10.55,23,'a');
	
	
}
int main1()
{
	cout<<"\n"<<sum(10,20);
	cout<<"\n"<<sum(12.33,34.44);
	Time t1(10,20,30);
	Time t2(40,40,40);
	Time t3;
	t3 = sum(t1,t2);
	t3.display();
	return 0;
}
