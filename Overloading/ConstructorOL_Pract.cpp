#include<iostream>
#include<string>
using namespace std;

class Dog
{
    private:
        string name;
        int license;
    public:
        Dog(); //constructor 
        Dog(string nameIn);
        Dog(int licIn);
        Dog(string nameIn, int licIn);
        string getName();
        int getLicense();
};

Dog::Dog()
{
    name = "NA";
    license = 0;
}

Dog::Dog(string nameIn)
{
    name = nameIn;
    license = 0;
}

Dog::Dog(int licIn)
{
    name = "NA";
    license = licIn;
}

Dog::Dog(string nameIn, int licIn)
{
    name = nameIn;
    license = licIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicense()
{
    return license;
}    
int main()
{
    Dog d1;
    Dog d2("Kali");
    Dog d3(12345);
    Dog d4("Sammy", 65432);
    
    cout<<d1.getName()<<" "<<d1.getLicense()<<"\n";
    cout<<d2.getName()<<" "<<d2.getLicense()<<"\n";
    cout<<d3.getName()<<" "<<d3.getLicense()<<"\n";
    cout<<d4.getName()<<" "<<d4.getLicense()<<"\n";
    return 0;
}