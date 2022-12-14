//write a program to print the following pattern
              //1
             //12
            //123
           //1234
          //12345

#include<iostream>
using namespace std;
#define N 5

int main()
{
    int i,j,k;
    for(i=1;i<=N;i++)
    {
        for(k=N;k>=i;k--)    //use this loop to insert blank spaces.
        cout<<" ";
        for(j=1;j<=i;j++)
           cout<<""<<j;
        cout<<"\n";
    }
    return 0;
}