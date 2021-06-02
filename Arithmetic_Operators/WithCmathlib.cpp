/*Goal: practice arithmetic operations in C++
     **Write a program that calculates the volumes of:
     **a cube, sphere, cone.
     **Cube Volume = side^3
     **Sphere Volume = (4.0/3.0) * pi * radius^3
     **Cone Volume = pi * radius^2 * (height/3)
     **Write the values to the console.
     */
#include<iostream>
#include<cmath>

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float vol_cube, vol_sphere, vol_cone = 0;

    //Find a Volume of Cube
    vol_cube = std::pow(cubeSide,3);
    //find volume of sphere
    vol_sphere = (4.0/3.0)*M_PI*std::pow(sphereRadius,3);
    //find volume of cone
    //M_PI is in the cmath library, it does not need to reference the
    //std namespace. On the other hand, pow() needs to reference it.
    vol_cone = M_PI * std::pow(coneRadius, 2) * (coneHeight/3);
    std::cout <<"\nVolume of Cube: "<<vol_cube<<"\n";
    std::cout <<"\nVolume of Sphere: "<<vol_sphere<<"\n";
    std::cout <<"\nVolume of Cone: "<<vol_cone<<"\n";
    return 0;
}   