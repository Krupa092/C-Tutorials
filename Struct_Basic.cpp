#include <iostream>
#include <cstring> 

using namespace std; 

struct Books
{
    char title[50];
    char auther[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books Book1; // Declaring Book1 in the library 
    struct Books Book2; // Declaring Book2 in the library
    
    //Book 1 Specification
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.auther, "Balagurusami");
    strcpy(Book1.subject, "Programming in C++");
    Book1.book_id = 7011
    
    //Book 2 Specification
    strcpy(Book2.title,"Learn Telecommunication");
    strcpy(Book2.auther,"Yakit Singha");
    strcpy(Book2.subject,"TCom")
    Book2.book_id = 7012
    
    //Print book 1 info
    cout<<"Book1";
    cout<<Book1.title<<endl;
    cout<<Book1.auther<<endl;
    cout<<Book1.subject<<endl;
    cout<<Book1.book_id<<endl;
    
    //Print book 2 info
    cout<<"Book2";
    cout<<Book2.title<<endl;
    cout<<Book2.auther<<endl;
    cout<<Book2.subject<<endl;
    cout<<Book2.book_id<<endl;
    
    return 0;
    
}