//program to print cube of a given number using a function.
//This program illustrates the basic usage of functions.

#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    float cube(float);                   //Function Prototype.
    float x,y;
    cout<<"Enter the number whose cube is to be calculated : \n";
    cin>>x;
    y = cube(x);                         //Fuction call.

    cout<<"The cube of "<<x<<" is "<<y<<"\n";
    return 0;
}

float cube(float num)                    //Function definition.
{
    float n;
    n = pow(num,3);
    return n;
}