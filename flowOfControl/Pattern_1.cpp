// Write a program to print the following pattern.
//Pass 1- 1 2 3 4 5
//Pass 2- 1 2 3 4 5
//Pass 3- 1 2 3 4 5
//Pass 4- 1 2 3 4 5
//Pass 5- 1 2 3 4 5


#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1; i<=5; i++)
     {
        cout<<"\nPass "<<i<<"-";
        for(j=1; j<=5; j++)
          cout<<" "<<j;
     }
     return 0;
}
