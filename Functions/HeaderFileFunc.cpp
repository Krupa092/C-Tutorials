
//Goal: Practice put functions in a header file. Move the function declaration and definition to the header file.
//Don't forget to include the header file (main.hpp) in the main program. 


/*GOAL: Practice writing functions

/*Write a function called printProduct that prints the results of the multiplication 
**of two integers. 
*/
#include<iostream>
using namespace std; 

int printProduct();

int main()
{
    cout<<"The product of given two numbers is: "<<printProduct();
}

int printProduct()
{
    int m1,m2;
    int product;

    cout<<"Enter number 1: ";
    cin>>m1;
    cout<<"Enter number 2: ";
    cin>>m2;
    
    product = m1*m2; 

    return product;
}
