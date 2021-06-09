#include<iostream>
#include<string>

using namespace std; 

class Staff
{
    private: 
        string title;
    public: 
        Staff();
        void setTitle(string titleIn);
        string getTitle();
};

Staff :: Staff ()
{
    title = "N/A"; 
}

void Staff :: setTitle(string titleIn)
{
    title = titleIn;
}   

string Staff :: getTitle()
{
    return title;
}

class GradStudent
{
    private:
        int StudentId;
    public:
        GradStudent();
        void setId(int IdIn);
        int getId();
};

GradStudent :: GradStudent()
{
    StudentId = 00000;
}
void GradStudent::setId(int input)
{
    StudentId = input;
}

int GradStudent::getId()
{
    return StudentId;
}

class TA: public Staff, public GradStudent
{
    private:
        string supervisor;
    public:
        TA();
        void setSupervisor(string input);
        string getSupervisor();
};

TA::TA()
{
    supervisor = "NA";
}

void TA::setSupervisor(string input)
{
    supervisor = input;
}

string TA::getSupervisor()
{
    return supervisor;
}

