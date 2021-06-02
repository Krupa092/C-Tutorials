/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include<iostream>

int main()
{
    int i;
    float input;
    int sum;

    for (i=1;i<=5;i++)
    {
        std::cout<<"Enter number "<<i<<":";
        std::cin>>input; 
        sum=sum+input;
    }

    std::cout<<"Sum is: "<<sum<<"\n";
    std::cout<<"Average is: "<<sum/5;
    return 0;
}