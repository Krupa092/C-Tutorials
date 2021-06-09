#include<iostream>
#include<string>
using namespace std;

class Flower
{
    private:
        string bloomTime; 
    public:
        Flower();
        void setBloomTime(string BloomIn);
        string getBloomTime();
};
//Complete the Constructor
Flower::Flower()
{
    bloomTime = "N/A"; // Initializing Value
}

//Declaring Function
void Flower::setBloomTime(string BloomIn)
{
    bloomTime = BloomIn;
}

string Flower::getBloomTime()
{
    return bloomTime;
}
//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose : public Flower
{
    private:
        string Fragrance;
    public:
        Rose();
        void setFragrance(string fragIn);
        string getFragrance();
};

Rose::Rose()
{
    Fragrance = "NA";
}

void Rose::setFragrance(string fragIn)
{
    Fragrance = fragIn;
}

string Rose::getFragrance()
{
    return Fragrance;
}

