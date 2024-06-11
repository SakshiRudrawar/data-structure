#include<iostream>
using namespace std;

namespace student_m 
{
    class student 
	{
        int rollno;
        char name[40];
        double symarks;
        double tymarks;
    

    public:
        student();
        student(int, char*, double, double);
        void calculateGrade();
        void display();
    };
}

