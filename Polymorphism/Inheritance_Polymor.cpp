
#include "Inheritance_Polymor.hpp"
#include <iostream>
using namespace std;

int main()
{
    Employee e1;
    e1.setPayRate(10.00);
    Manager m1;
    m1.setPayRate(12000.00);
    cout<<"e1 pay: $"<<e1.calcWeeklyPay();
    cout<<"\nm1 pay: $"<<m1.calcWeeklyPay();

    return 0;
}