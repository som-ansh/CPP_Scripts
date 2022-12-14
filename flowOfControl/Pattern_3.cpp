//Write a program to print :
//1
//12
//123
//1234
//12345

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        cout<<"\n";
        for(j=1;j<=i;j++)
        cout<<" "<<j;
    }
    return 0;
}