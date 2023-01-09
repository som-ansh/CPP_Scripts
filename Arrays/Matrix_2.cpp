//Program to read and check equality of two matrices.

#include<iostream>
using namespace std;



int main()
{
    
    int r1,c1,r2,c2;
    cout<<"Enter Rows and Column for matrix 1: ";
    cin>>r1>>c1;
    cout<<"Enter Rows and Column for matrix 2: ";
    cin>>r2>>c2;
    
    int mat1[r1][c1], mat2[r2][c2];

    if((r1 != r2) && (c1 != c2))
    {
        cout<<"Given matrix dimensions cannot be considered for Equality!";
    }
    
    cout<<"Enter Elements for Matrix-1 :\n";
    for(int i = 0; i<r1; i++)
    {
        
        for(int j =0; j<c1; j++)
        {
            cout<<"Element at pos "<<i<<j<<": ";
            cin>>mat1[i][j];
        }

    }


    cout<<"Enter Elements for Matrix-2 :\n";
    for(int i = 0; i<r2; i++)
    {
        
        for(int j =0; j<c2; j++)
        {
            cout<<"Element at pos "<<i<<j<<": ";
            cin>>mat2[i][j];
        }

    }

    int flag = -1;
    for(int i=0; i<r1; i++)
    { for(int j = 0 ; j<c1; j++)
      {
        if(mat1[i][j] != mat2[i][j])
        { 
            flag = 0;
            break;
        }
      } 
    }

    if(flag == -1)
      cout<<"The given matrices are  Equivalent";
    else
      cout<<"The Given matrices are not Equivalent";

    return 0;
    
}