//Program to illustrate call by value by swapping two numbers.

#include<iostream>
using namespace std;

int main()
{
    void swap(int,int);  //swap() function takes two integer type arguments and returns no value.
    int a = 7,b = 4;
    cout<<"\n The Original values are :\n";
    cout<<"a = "<<a<<", b = "<<b<<"\n";
    swap(a,b);            //function call to invoke swap()
    cout<<"\n The values after swap() are : \n";
    cout<<"a = "<<a<<", b = "<<b<<"\n";
    return 0;
}


void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;   //values swapped.
    cout<<"\n Swapped values are : ";
    cout<<"a = "<<x<<" , b = "<<y<<"\n";
}