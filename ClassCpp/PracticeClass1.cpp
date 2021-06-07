/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/
#include<iostream>
using namespace std;

class cat
{
        string name,breed;
        int age; 
    public:

        void setname(string nameIn);
        void setbreed(string breedIn);
        void setage(int ageIn);
        string getName();
        string getBreed(); 
        int getAge(); 
        void print();
};

void cat::setname(string nameIn)
{
    name = nameIn;
}
void cat::setbreed(string breedIn)
{
    breed = breedIn; 
}
void cat::setage(int ageIn)
{
    age = ageIn;
}
void cat::print()
{
    cout<<name <<" "<<breed <<" "<<age;
}
string cat::getName()
{
    return name;
}
string cat::getBreed()
{
    return breed;
}
int cat::getAge()
{
    return age;
}
 int main()
 {
    cat cat1;
    cat cat2;
    
    cat1.setname("Billi");
    cat1.setbreed("Black Billi");
    cat1.setage(2);

    cat2.setname("Billu");
    cat2.setbreed("White Billu");
    cat2.setage(1);

    cat1.print();
    cout<<"\n\n";
    cat2.print();

 }