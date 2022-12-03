
/* Program to calculate and print the roots of a quadratic equation ax^2 + bx +c =0 where (a!=0)*/

#include<iostream>
#include<math.h>    //mathematics library

using namespace std;

int main()
{ char choice;
    do{

    
         float a,b,c,delta,root1,root2;
         cout<<"Enter the coefficients a,b,c where equation is ax^2 + bx + c : \n";
         cin>>a>>b>>c;
         if(!a)          // check if a is zero
          {
               cout<<"Value of a cannot be zero";
          }
         else
          {    delta = b*b-4*a*c;            //beginning of else body
               if(delta > 0)
               {
                  root1 = ( -b + sqrt(delta)) / (2*a);                              //delta is determinant
                  root2 = ( -b - sqrt(delta)) / (2*a);
                  cout<<"The roots are Real and Distinct \n  They are: "<<root1<<" and "<<root2;
               }
               else if(delta == 0)
               {
                  root1 = root2 = -b/(2*a);
                  cout<<"The roots are real and EQUAL \n They are: "<<root1<< " and "<<root2;
               }
               else
               {
                  float imaginary, real;
                  real = -b / (2*a);
                  imaginary = sqrt(-delta) / (2*a);
                  cout<<"The  roots are Complex \n ";
                  cout<<"Root1 = "<<real<<"+"<<imaginary<<"i \n";
                  cout<<"Root2 = "<<real<<"-"<<imaginary<<"i \n";
               }

            }
         cout<<"\nDo you wish to continue ? (y/n)\n";
         cin>>choice;
        }while(choice == 'y');
}