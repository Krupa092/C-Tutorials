#include<iostream>
using namespace std;

template <typename T>
T findSum(T input1, T input2);

int main()
{
    int a = 40;
    int b = 32;
    cout<<findSum(a,b); 
}
template<typename T>
T findSum(T input1, T input2)
{
    return input1+input2;
}