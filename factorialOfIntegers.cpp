//Program to calculate the factorial of an integer.
//This program is to see how while loop works.

#include<iostream>
using namespace std;

int main()
{
    int i,num,fact = 1;
    cout<<"Enter the number to calculate its factorial.";
    cin>>num;
    i = num;
    while (num)         //Run while loop untill num is non-zero.
    {
        fact *= num;
        --num;          //num is being updated here.
    }
    cout<<"The factorial of "<< i << " is "<<fact<<"\n";
    return 0;

}