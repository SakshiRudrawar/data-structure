#include<iostream>
#include"tymarks.h"

namespace ty
{
	tymarks :: tymarks()
	{
		theory_marks=0;
		practical_marks=0;
	}
	
	tymarks :: tymarks(double tm , double pm)
	{
		theory_marks=tm;
		practical_marks=pm;
	}
	
	void tymarks :: display()
	{
		cout<<"\ntheory marks:"<<theory_marks;
		cout<<"\npractical marks:"<<practical_marks;
	}
	
}
