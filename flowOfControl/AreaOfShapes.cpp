
//Program to calculate area of a Circle, Rectangle or a Triangle 
//It illustrates the use of Switch statement

#include<iostream>
#include<math.h>

using namespace std;
#define pi 3.14


int main()
{
    float area;
    int choice;
    cout<<"Area Menu:\n"<<"1.Circle\n"<<"2.Rectangle\n"<<"3.Triangle\n";
    cout<<"Enter your choice\n";
    cin>>choice;

    switch(choice)             //switch-case starts. Put most common cases first to optimize the code.
    {
        case 1 : float radius;
                 cout<<"Enter Radius of circle: ";
                 cin>>radius;
                 area = pi*radius*radius;
                 cout<<"\nArea of Circle is : "<<area;
                 break;
                 
                
        case 2 : float length,breadth;
                 cout<<"Enter the length and breadth of the rectangle : ";
                 cin>>length,breadth;
                 area= length * breadth;
                 cout<<"\nThe area of Rectangle is : "<<area;
                 break;
                 
                
        case 3 : float s,a,b,c;
                 cout<<"Enter 3 sides of the triangle : ";
                 cin>>a,b,c;
                 s=(a+b+c)/2;
                 area = sqrt(s * (s-a) * (s-b) * (s-c));
                 cout<<"The area of the triangle is : "<<area;
                 break;

        default : cout<<"Wrong choice!!!";
                  break;


    }
    return 0;

}