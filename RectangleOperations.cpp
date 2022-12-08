// Program to dispaly a menu regarding rectangle operations(area,perimeter,diagonal) and perform according to user's response.
//This program demonstrates the use of Do-while loop, which is frequently used in menu Driven programs

#include<iostream>
#include<math.h>
using namespace std;

int main()
{ char choice2;
  int choice1;
  float length,breadth,area,diagonal,perimeter;
do{
    cout<<".....MENU......\n"<<"1.Area\n"<<"2.Perimeter\n"<<"3.Diagonal\n"<<"4.Exit\n";
    cout<<"Enter your choice : \n";
    cin>>choice1;
    cout<<"Enter the Length and Breadth of the rectangle :";
    cin>>length>>breadth;
    switch(choice1)
    {
        case 1 : cout<<"Calculating Area of rectangle..\n";
                 area = length * breadth;
                 cout<<"Area of rectangle is :"<<area<<" sq.units\n";
                 break;
                
        case 2 : cout<<"Calculating Perimeter of Rectangle..\n";
                 perimeter = length + breadth;
                 cout<<"Perimeter of rectangle is : "<<perimeter;
                 break;

        case 3 : cout<<"Calculating length of diagonal...\n";
                 diagonal = sqrt((length*length) + (breadth * breadth));
                 cout<<"Diagonal of rectangle is : "<<diagonal;
                 break;

        case 4 : cout<<"Exiting program now...\n";
                 exit;
                 break;

        default : cout<<"Enter valid choice";
                  break;

    }
    cout<<"\nDo you want to continue ? (y/n)";
    cin>>choice2;
}while (choice2 == 'y' || choice2 == 'Y');

return 0;

}