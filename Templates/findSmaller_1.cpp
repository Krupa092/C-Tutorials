#include<iostream>
using namespace std;

//our generic function
template <typename T> ////tell the compiler we are using a template
T findSmaller(T input1, T input2);

int main()
{
    int a = 54; 
    int b = 89; 

    float f1 =  7.8; 
    float f2 = 6.03;

    char c1 = 'c';
    char c2 = 'k';

    string s1 ="Hello";
    string s2 = "Bots are fun";

    //Wow! We can use one function for different variable types
    cout<<"\nIntegers compared: "<<findSmaller(a,b);
    cout<<"\nFloats compared: "<<findSmaller(f1,f2);
    cout<<"\nChars compared: "<<findSmaller(c1,c2);
    cout<<"\nStrings compared: "<<findSmaller(s1,s2);   
    return 0;

}

template <typename T>
T findSmaller(T input1, T input2)
{
    if (input1 < input2)
    {
        return input1;
    }
    return input2;
}