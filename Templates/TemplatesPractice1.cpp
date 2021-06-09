/*Goal: create a generic class.
**Create a class called Multiplier. 
**It multiplies two numbers - integers
**or floats. */

#include<iostream>
using namespace std;

template <class T>
class Multiplier
{
        T m1, m2;
        T product;
    public: 
        void printEquation();
        void setm1(T mIn);
        void setm2(T mIn);
        void setProduct();
        T getProduct();
        T getM1();
        T getM2();
};

template <class T>
void Multiplier<T>::printEquation()
{
    std::cout<<m1<<" * "<<m2<<" = "<<product;
}

template <class T>
void Multiplier<T>::setm1(T mIn)
{
   m1 = mIn; 
}

template <class T>
void Multiplier<T>::setm2(T mIn)
{
   m2 = mIn; 
}

template <class T>
void Multiplier<T>::setProduct()
{
   product = m1 * m2; 
}

template <class T>
T Multiplier<T>::getM1()
{
   return m1; 
}

template <class T>
T Multiplier<T>::getM2()
{
   return m2; 
}

template <class T>
T Multiplier<T>::getProduct()
{
   return product; 
}

int main()
{
    Multiplier<int> multi1;
    Multiplier<float> multi3;
    
    int input1,input2;
    cin>>input1;
    cin>>input2;
    
    multi1.setm1(input1);
    multi1.setm2(input2);
    multi1.setProduct();
    multi1.printEquation();
    
    cout<<"\n";
    float input3, input4;
    cin>>input3;
    cin>>input4;    
    multi3.setm1(input3);
    multi3.setm2(input4);
    multi3.setProduct();
    multi3.printEquation();
    return 0;
}
