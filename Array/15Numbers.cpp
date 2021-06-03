/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include<iostream>
using namespace std; 

int main()
{
    int userinput = 0;
    int maxnumber = 0;
    int minnumber = 100;
    int sumtotal = 0;
    float average = 0;

    //get the number from the user 

    for (int i=0; i<=15; i++)
    {
        cout<<"Enter the number "<<i;
        cin>>userinput;
        cout<<userinput <<"\n";
        if(userinput > maxnumber)
        {
            maxnumber = userinput;
        }
        if(userinput < minnumber)
        {
            minnumber = userinput;
        }
        sumtotal = sumtotal + userinput;
    }

    cout <<"max number = "<<maxnumber <<"\n";
    cout <<"min numebr = "<<minnumber <<"\n";
    average = sumtotal/15.0;
    cout <<"average = "<<average <<"\n";
}