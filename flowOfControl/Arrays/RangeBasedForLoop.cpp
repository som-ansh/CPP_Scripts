//demonstration of range based for loop as per C++11


#include<iostream>
using namespace std;

int main()
{
    int number[10] = {1,2,3,4,5,6,7,8,9,10},product;
    

    for(int &a : number )   // syntax: for( <data-type> & <control-variable> : <list/array-name>). iterate over a range of values
                            // being reffered by a common name.
    {
        product*=a;
    }

    cout<<"The product of all the numbers in the array is : "<<product<<"\n";

}