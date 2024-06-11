#include"calculator.h"
////////////////////////////////////
template<class T>
Calculator<T>::Calculator(T a,T b)
{
	x = a;
	y = b;
}
////////////////////////////////////
template<class T>
T Calculator<T>::add()
{
	return x+y;
}
////////////////////////////////////
template<class T>
T Calculator<T>::subtract()
{
	return x-y;
}
////////////////////////////////////
template<class T>
T Calculator<T>::multiply()
{
	return x*y;
}
////////////////////////////////////
template<class T>
T Calculator<T>::division()
{
	return x/y;
}

