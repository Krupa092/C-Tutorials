#include<iostream>
#include<cstring>

using namespace std;
void PrintBooks(struct Books book);

struct Books
{
    char Title[50];
    char Subject[50]; 
    char Auther[50];
    int Book_Id;
};

int main()
{
    struct Books Book1;
    struct Books Book2; 

    //Book1 Information
    strcpy(Book1.Title, "Learning C++");   
    strcpy(Book1.Subject, "Programming in C++");
    strcpy(Book1.Auther,"Balagurusami");
    Book1.Book_Id = 7011;

    //Book2 Information
    strcpy(Book2.Title, "Learning JAVA");   
    strcpy(Book2.Subject, "Programming in JAVA");
    strcpy(Book2.Auther,"Balagurusami");
    Book2.Book_Id = 7012;

    //Print Book1 Info
    PrintBooks(Book1);
    PrintBooks(Book2);

    return 0;
}

void PrintBooks(struct Books book)
{
   cout << "Book title : " << book.Title <<endl;
   cout << "Book author : " << book.Auther <<endl;
   cout << "Book subject : " << book.Subject <<endl;
   cout << "Book id : " << book.Book_Id <<endl;
}