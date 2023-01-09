//program to search for a specific element in a 1D array

#include<iostream>
using namespace std;

int main()
{
    void LinearSearch(int[],int,int);
    int size,number;
    cout<<"Initialize size of the array : ";
    cin>>size;
    int arr[size];
    
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter element "<<i+1<<":";
        cin>>arr[i];
    }

    cout<<"Enter the element you want to search in the array: ";
    cin>>number;
    LinearSearch(arr,number,size);
    return 0;
}

void LinearSearch(int arr[],int num, int size)
{

    for(int i = 0; i<size; i++)
    {
        if(num == arr[i])
          cout<<"Element "<<num<<" found at position "<<i+1<<"\n";
    }

}