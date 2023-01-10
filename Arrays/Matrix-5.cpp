// Program to find  sum  of each column and each row.

#include<iostream>

using namespace std;



int main()
{
    void RowColumn(float[][10],int,int);                  
    int r1,c1;
    cout<<"ENter the Row and Column of the 2D array: (max 10)";
    cin>>r1>>c1;
    float matrix[10][10];
    
    cout<<"Enter elements into the matrix: \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0; j<c1; j++)                               //taking values into the array
        { 
            cout<<"Enter element at "<<i<<j<<" pos : ";
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

    RowColumn(matrix,r1,c1);             //passing array as function argument will pass the pointer to the first element of the array.

    return 0;


}

void RowColumn(float matrix[][10],int r1, int c1)
{
    float Row_sum, Column_sum=0;
    int i,j,k;


    for(i=0,k=0;i<r1;i++,k++)
    {   
        Row_sum=0;
        Column_sum=0;
        for(j=0;j<c1;j++)
        {    
            Row_sum+=matrix[i][j];
            Column_sum+=matrix[j][i];                       //interchanging i and j will reverse the traversal.
            
        }
        cout<<"The sum of elements in row "<<i<<" is "<<Row_sum<<"\n";
        cout<<"The sum of elements in column "<<k<<" is "<<Column_sum<<"\n";
        cout<<"\n";
    }
}