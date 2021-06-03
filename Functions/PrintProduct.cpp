#include<iostream>
using namespace std;

void printProduct();

int main()
{
    printProduct();
    return 0;
}

void printProduct()
{
    int m1,m2;
    cout<<"Enter number 1: ";
    cin>>m1;
    cout<<"Enter number 2: ";
    cin>>m2;

    cout<<"The product of given two numbers is :"<<m1*m2;

}