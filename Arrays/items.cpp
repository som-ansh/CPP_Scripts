//program to read prices of 20 items in an array and then display the sum of all prices, product of all prices and avergae
//of them.


#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Determine the size of the array: ";
    cin>>size;
    float price[size],sum=0,product=1;
    

    for(int i=0; i<size; ++i)
    {
        cout<<"Enter rate of product "<<i+1<<": ";
        cin>>price[i];
        sum+=price[i];
        product*=price[i];
    }

    float average = sum/size;

    cout<<"\nThe sum of all prices : "<<sum<<"\n The product of all prices : "<<product<<"\n The avergae of all prices : "<<average;
    return 0;
}