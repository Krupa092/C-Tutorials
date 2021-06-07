#include<iostream>
using namespace std; 

//For example: Let's say we have a class that tracks the grades a student receives in a course.
//We can create a member function that calculates the average.

class Student
{
        int Grades[5];
        int id;
    public:
        Student();
        void setGrades(int Index, int GradesIn);
        void setId(int IdIn);
        int getGrades(int Index);
        int getId();
        float getAvg();
        void printInfo();

};

Student::Student()
{
    for (int i=0;i<5;i++)
    {
        Grades[i] = 0; 
    }
    id=0;
}
void Student::setId(int idin)
{
    id = idin;
}
void Student::setGrades(int index, int gradeIn)
{
    Grades[index] = gradeIn;
}
int  Student::getId()
{
    return id;
}
int  Student::getGrades(int index)
{
    return Grades[index];
}
float  Student::getAvg()
{
    int sum = 0;
    for(int i=0; i<5;i++)
        sum = sum + Grades[i];
    return sum/5.0;
}
void Student::printInfo()
{
    cout<<id<<"\n";
    for(int i=0; i<5;i++)
        cout<<Grades[i]<<" ";
}

int main()
{
    Student s1;
    s1.setId(3232);
    s1.setGrades(0,85);
    s1.setGrades(1, 80);
    s1.setGrades(2,98);
    s1.setGrades(3,65);
    s1.setGrades(4,90);
    s1.printInfo();
    cout<<"avg = "<<s1.getAvg();
    return 0;
}