#include <iostream>
#include <cstring>
#include "student.h"

//using namespace std;

namespace student_m 
{

    student::student() 
	{
        rollno = 0;
        strcpy(name, "not given");
        symarks = 0;
        tymarks = 0;
    }

    student::student(int r, char* nm, double sym, double tym) 
	{
        rollno = r;
        strcpy(name, nm);
        symarks = sym;
        tymarks = tym;
    }

    void student::calculateGrade() 
	{
        double totalMarks = symarks + tymarks;
        
        if (totalMarks >= 75) 
		{
            cout << "Grade A";
        } 
		else if (totalMarks >= 60) 
		{
            cout << "Grade B";
        } 
		else if (totalMarks >= 50) 
		{
            cout << "Grade C";
        } 
		else 
		{
            cout << "Fail";
        }
    }

    void student::display() 
	{
        cout << "\nRoll no: " << rollno;
        cout << "\nName: " << name;
        cout << "\nTotal marks: " << symarks + tymarks;
        cout << "\nGrade: ";
        calculateGrade();
    }

}






