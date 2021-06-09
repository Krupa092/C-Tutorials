#include<iostream>
using namespace std;

template <class T>
class StudentRecord
{
    private:
        const int size =5; 
        T grade; //varies datatype
        int StudentId;
    public:
        StudentRecord(T input);
        void setId(int IdIn);
        void printGrades();
};
// everytime we want to use templates, it needs to be declared first 
template<class T>
StudentRecord<T>::StudentRecord(T input)
{
    grade=input;
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    StudentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    cout<<"ID# "<<StudentId<<": ";
    cout<<grade<<"\n ";
    cout<<"\n";
}

int main()
{
    //StudentRecord is the generic class
    //The constructor sets the grade value
    StudentRecord<int> srInt(3);
    srInt.setId(111111);
    srInt.printGrades();
 
    StudentRecord<char> srChar('B');
    srChar.setId(222222);
    srChar.printGrades();

    StudentRecord<float> srFloat(3.333);
    srFloat.setId(333333);
    srFloat.printGrades();
    
    StudentRecord<string> srString("B-");
    srString.setId(4444);
    srString.printGrades();
    
    return 0;
}