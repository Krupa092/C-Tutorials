#include<iostream>
using namespace std;

class Cats
{
        string name; 
        string breed; 
        int age; 
    public:
        Cats(); //declaring constructor 
        void setname(string nameIn);
        void setbreed(string bredIn);
        void setage(int ageIn);
        void print(); 
        string getname();
        string getbreed();
        int getage();

};

//declaring constructor

Cats::Cats() //Cats is in the public properties in the class 
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown"; //the initial value of the breed
    age = 99; //the initial value of the age
}
void Cats::setname(string nameIn)
{
    name = nameIn; 
}
void Cats::setbreed(string breedIn)
{
    breed = breedIn; 
}
void Cats::setage(int ageIn)
{
    age = ageIn;
}
void Cats::print()
{
    cout<<name <<" "<<breed <<" "<<age;
}
string Cats::getname()
{
    return name;
}
string Cats::getbreed()
{
    return breed;
}
int Cats::getage()
{
    return age;
}

int main()
{
    Cats cat1;
    cout<<"Cat1 information: ";
    cat1.print();
    return 0;
}