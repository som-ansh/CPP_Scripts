//Write program to print the following:
//1
//22
//333
//4444
//55555

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        cout<<"\n";
        for(j=1; j<=i;j++)
        cout<<" "<<i;
    }
    return 0;
}