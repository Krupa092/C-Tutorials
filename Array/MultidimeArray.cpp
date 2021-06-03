/* To understand multidimensionl array */

#include<iostream>
using namespace std; 

int main()
{
    int array2D[2][3] = {0,1,2,3,4,5};
    for (int i=0; i<2;i++)
        for (int j=0;j<3;j++)
            cout<<"array 2D ["<<i<<"]["<<j<<"] = "<<array2D[i][j]<<"\n";

    return 0;
}