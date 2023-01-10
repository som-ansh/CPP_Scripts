//Program to perform matrix operations(addition,subtraction,multiplication)


#include<iostream>
using namespace std;

int main()
{
    void SumOfMatrix(float[][10],float[][10],int,int,int,int);
    void DifferenceOfMatrix(float[][10],float[][10],int,int,int,int);
    void MultiplyMatrix(float[][10],float[][10],int,int,int,int);
    int r1,c1,r2,c2;
    cout<<"ENter the Row and Column of matrix-1 : (max 10X10) ";
    cin>>r1>>c1;
    cout<<"Enter the Row and Column of matrix-2 : (max 10X10) ";
    cin>>r2>>c2;

    float matrix1[10][10],matrix2[10][10];

    cout<<"Enter the elements into the matrix-1:\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter element at "<<i<<j<<" pos :";              //here we input elements into matrix-1
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the elements into the matrix-2:\n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter element at "<<i<<j<<" pos :";              //here we input elements into matrix-2
            cin>>matrix2[i][j];
        }
    }

    cout<<"\nThe matrix-1 is:\n";

    for(int i =0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {                               //display array-1 in matrix format
            cout<<matrix1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nThe matrix-2 is:\n";

    for(int i =0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {                               //display array-2 in matrix format
            cout<<matrix2[i][j]<<" ";
        }
        cout<<"\n";
    }




    SumOfMatrix(matrix1,matrix2,r1,c1,r2,c2);
    DifferenceOfMatrix(matrix1,matrix2,r1,c1,r2,c2);
    MultiplyMatrix(matrix1,matrix2,r1,c1,r2,c2);

    return 0;

}


void SumOfMatrix(float matrix1[][10],float matrix2[][10],int r1,int c1,int r2,int c2)
{
    if((r1 == r2) && (c1 == c2))
       cout<<"\nThe matrices can be added\n";
    else
       {
        cout<<"\nThe Matrices cannot be added\n";
        return ;
       }
    
    float temp[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        { 
            temp[i][j] = matrix1[i][j]  + matrix2[i][j];

        }
    }

    cout<<"\nThe Sum of both the matrices is : \n";
    for(int i =0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {                               
            cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
    }
    

}


void DifferenceOfMatrix(float matrix1[][10],float matrix2[][10],int r1,int c1,int r2,int c2)
{
    if((r1 == r2) && (c1 == c2))
       cout<<"\nThe matrices can be subtracted\n";
    else
       {
        cout<<"\nThe Matrices cannot be subtracted\n";
        return ;
       }
    
    float temp[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        { 
            temp[i][j] = matrix1[i][j]  - matrix2[i][j];

        }
    }

    cout<<"\nThe Difference of both the matrices is : \n";
    for(int i =0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {                               
            cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
    }
    

}


void MultiplyMatrix(float matrix1[][10],float matrix2[][10],int r1,int c1,int r2,int c2)
{
    if(c1 == r2)
       cout<<"\nThe matrices can be multiplied\n";
    else
       {
        cout<<"\nThe Matrices cannot be multiplied\n";
        return ;
       }
    
    float temp[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {   
            temp[i][j]=0;

            for(int k=0; k<c1 ;k++)   // c1 or r2 can be used as K traverses in that.
            {
                temp[i][j]+=(matrix1[i][k] * matrix2[k][j]); 
            }

        }
    }

    cout<<"\nThe product of both the matrices is : \n";
    for(int i =0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {                               
            cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
    }
    

}