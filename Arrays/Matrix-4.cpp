// Program to find the elements below and above the primary diagonal.


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
     
    cout<<"\nThe elements below the primary diagonal is : \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0; j<c1 ; j++)
        {
            if(i >= j)
            {
                cout<<matrix[i][j];
            }  
        }
         cout<<"\n";
    }

    cout<<"\nThe elements above the primary diagonal is : \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0; j<c1 ; j++)
        {
            if(i <= j)
            {
                cout<<matrix[i][j];
            }  
        }
         cout<<"\n";
    }

    return 0;


}