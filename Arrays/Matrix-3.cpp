// Program to find the sum and product of elements in both the diagonnals of 2D Matrix.


#include<iostream>
using namespace std;


int main()
{
    int r1,c1;
    cout<<"Enter the row and column for the matrix: \n";
    cin>>r1>>c1;
    int matrix[r1][c1];
    cout<<"Enter the elements into the matrix:\n";

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter element at "<<i<<j<<" pos :";              //here we input elements into array
            cin>>matrix[i][j];
        }
    }


    cout<<"\nThe array is:\n";

    for(int i =0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {                               //display array in matrix format
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }

    int diagonal1_sum=0,diagonal2_sum=0,diagonal1_product=1,diagonal2_product=1;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            if(i == j)
            {
                diagonal1_sum+=matrix[i][j];               //primary diagonal i == j
                diagonal1_product*=matrix[i][j];
            }

            if((i+j) == (r1-1))
            {
                diagonal2_sum+=matrix[i][j];                 //secondary diagonal condition:  row+column = no_of_rows - 1
                diagonal2_product*=matrix[i][j];
            }                                           
        }
    }

    cout<<"Primary diagonal sum : "<<diagonal1_sum<<" ; Product : "<<diagonal1_product;
    cout<<"\nSeconday diagonal sum : "<<diagonal2_sum<<" ; Product : "<<diagonal2_product;


    return 0;


}