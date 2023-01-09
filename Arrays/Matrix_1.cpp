//Program to read sales of 3 salesman in 6 months and to print total sales made by each salesman.

#include<iostream>
using namespace std;


int main()
{
    void EnterSales(int[][6]);
    int sales[3][6];
    EnterSales(sales);
    return 0;
}


void EnterSales(int sales[][6])
{
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        cout<<"Enter sales for Salesman "<<i+1<<"\n";
        for(j=0;j<6;j++)
        {   
            cout<<"Month "<<j+1<<": ";
            cin>>sales[i][j];
            sum+=sales[i][j];
        }
        cout<<"Total sales for Salesman "<<i+1<<"  is "<<sum;
        cout<<"\n";
    }
}