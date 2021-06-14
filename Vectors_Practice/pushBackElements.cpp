#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //delcaring vector
    vector <int> vectorInts;
    vector <int> :: iterator it;

    cout<<"VectorInts has" <<vectorInts.size()<<" elements\n";
    cout<<"Adding 23 to the vector\n";

    vectorInts.assign(1,23);
    for(it = vectorInts.begin(); it != vectorInts.end(); ++it)
        cout<<*it<<" ";
    cout<<"\n\nAdding four elements to the vector\n";
    //assigning the value 3 to 4 elements of the vector
    vectorInts.push_back(24);
    vectorInts.push_back(25);
    vectorInts.push_back(26);
    vectorInts.push_back(27);
    cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
    //printing the contents of vectorInts
    cout<<"VectorInts has these elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";
 
    return 0;

}