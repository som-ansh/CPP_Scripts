//Write a program to print
//A
//AB
//ABC
//ABCD
//ABCDE
//ABCDEF

#include<iostream>
using namespace std;

int main()
{
    char i,j;
    for(i = 65;i<=70;i++)
    {
        cout<<"\n";
        for(j=65;j<=i;j++)
        cout<<" "<<j;
    }
    return 0;
}