//Program to calculate and print the sums of even and odd integers of the first n natural numbers.
//program is to demonstrate the working of while loop.

#include<iostream>
using namespace std;

int main()
{
    int n, EvenSum = 0, OddSum = 0;
    cout<<"Calculate evensum and oddsum upto which number?\n";
    cin>>n;
    while(n >= 1)
    {
        if(n%2 == 0)           //Checks for Even numbers
            EvenSum += n;
        else
            OddSum += n;       //otherwise control jumps here, which signifies odd number.

        n--;                   // updating n value
    } 
    cout<<"The sum of even numbers is "<<EvenSum<<"\n";
    cout<<"The sum of odd numbers is "<<OddSum<<"\n";
    return 0;
}