//write a program to print factorial of a number using functions.

#include<iostream>
using namespace std;


int main()
{
    int Factorial(int);
    int num;
    cout<<"Enter the number to calculate its factorial: \t";
    cin>>num;
    cout<<"Factorial of "  << num<<"! is "<<Factorial(num);
    return 0;
}

int Factorial(int n)
{   
    int fact = 1;
    if(n==0)
     return fact;
    else
     {
        for( int i =1; i<=n; i++)
            fact*=i;
     }
    return fact;
}