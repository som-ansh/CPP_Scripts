//print the following pattern
//0
//12
//345
//6789


#include<iostream>
using namespace std;

int main()
{
    int i,j,count;
    for(i=1;i<=4;i++)
    {
        cout<<"\n";
        for(j=1;j<=i;j++)
        cout<<" "<<count++;
    }
    return 0;
}