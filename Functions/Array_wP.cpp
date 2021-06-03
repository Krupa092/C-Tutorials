#include<iostream>
using namespace std;
int a(int *arr,int size, int skey);

int main()
{
    int size = 4;
    int arr[size] = {1,2,3,4,5};
    int skey = 3;
    cout<<"Found at :"<<a(arr,size,skey);
}

int a(int *arr,int size, int skey)
{
    for(int i=0; i<size; i++)
    {
        if (arr[i] == skey)
        {
            return i;
        }
    }
    return -1;
}