/*Goal: Use 'pass by reference' to a function
**to write this program.
**There are two functions that you need to write 
**for this program:
**calculate(input1, input2, operation, result);
**printEquation(input1, input2, operation, result);
**Pass by reference any value that is modified
**in the function.
**
**Put the declaration and the definitions of the 
**functions in the header file.
*/

#include<iostream>
void calculate(float in1,float in2, char op, float &ans);
void printEquation(float input1, float input2, char operation, float result);
int main()
{
    char operation = '*';
    float input1 = 9.8;
    float input2 = 2.3;
    float result;
    
    calculate(input1, input2, operation, result);
    printEquation(input1, input2, operation, result);
    return 0;
}

void calculate(float in1,float in2, char op, float &ans)
{
    ans = in1*in2;
}
void printEquation(float input1, float input2, char operation, float result)
{
    std::cout<<input1 <<" * " <<input2 <<" = " <<result;
}