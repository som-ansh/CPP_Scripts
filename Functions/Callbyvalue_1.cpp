//Program to illustrate the call by value method of function invoking.

#include<iostream>
using namespace std;

int main()
{
    int change(int);  //function prototype declared.
    int original = 10;
    cout<<"\n The original value is: "<<original<<"\n";
    cout<<"\n Return value of function change() is: "<<change(original)<<"\n";
    cout<<"\n The value after function change() is invoked: "<<original<<"\n";
    return 0;
}

int change(int a)
{
    a=20;
    return a;
}