
/* Program to calculate comission for the salesmen. The commission is calculated according to te following rates.:*/
                    // SALES              COMMISSION RATES
                    // 30001 onwards           15%
                    // 22001-30000             10%
                    // 12001-22000             7%
                    // 5001-12000              3%
                    // 0-5000                  0%
/*The program accepts the sales-made by the salesman and displays the calculated commission.*/

/* Illustrates use of nested if  statements and also addresses dangling-else problem*/

#include<iostream>

using namespace std;

int main()
{
    float sales, comm;
    cout<<"Enter sales made by the salesman:"<<"\n";
    cin >> sales;
    if(sales > 5000)
       if(sales > 12000)
          if(sales > 22000)
             if(sales > 30000)
                comm = sales * 0.15;       //dangling-else pairs the else with the immediately preceding unmatched if.
             else
                comm = sales * 0.10;
          else
             comm = sales * 0.07;
        else 
           comm = sales * 0.03;
    else
       comm = 0;
    
    cout<<"\n"<<"The commission is : "<< comm<<"\n";
    return 0;
    
}