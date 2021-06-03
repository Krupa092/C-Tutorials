//C++ does not allow arrays to be passed to functions, but, as we have seen, it does allow pointers to be passed.
/*
There are three methods for passing an array by reference to a function:
void functionName(variableType *arrayName)
void functionName(variableType arrayName[length of array])
void functionName(variableType arrayName[])
*/
// Goal is to learn to pass array in the function

#include<iostream> 
#include<iomanip> //to set width setw
using namespace std;
 
//pass the array as a pointer
//syntax: void functionName(variableType *arrayName)
void arrayPointer(int *firstArray, int size);
//pass the sized array 
//Syntax: void functionName(variableType arrayName[length of array])
void arraySized(int firstArray[3], int size);
//pass unsized array
//Syntax: void functionName(variableType arrayName[])
void arrayUnszed(int firstArray[], int size);

int main()  
{
    int size = 3;
    int firstArray[size] = {1,2,3};
    arrayPointer(firstArray,size);
    arraySized(firstArray,size);
    arrayUnszed(firstArray,size);
    return 0; 
}

void arrayPointer(int *firstArray, int size)
{
    cout<<setw(5);
    for (int i=0;i<size;i++)
        cout<<firstArray[i]<<" ";
    cout<<"\n";

}

void arraySized(int firstArray[3], int size)
{
    cout<<setw(5);
    for (int i=0;i<size;i++)
        cout<<firstArray[i]<<" ";
    cout<<"\n";
}

void arrayUnszed(int firstArray[], int size)
{
    cout<<setw(5);
    for (int i=0;i<size;i++)
        cout<<firstArray[i]<<" ";
    cout<<"\n";
}
