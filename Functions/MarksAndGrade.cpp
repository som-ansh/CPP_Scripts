//Write a program to enter the marks by user (out of 100). Define a function that will display grades according
//to the marks entered as below:
//   MARKS          GRADE
//   91-100           AA
//   81-90            AB
//   71-80            BB
//   61-70            BC
//   51-60            CD
//   41-50            DD
//   <=40             Fail






#include<iostream>
using namespace std;


int main()
{ string GetGrade(int);
  int marks;
  string res;
  cout<<"Enter your marks: /t";
  cin>>marks;
  res = GetGrade(marks);
  cout<<"\n Your grade is : "<<res;
  return 0;
}


string GetGrade(int m)
{
    string ch;
    if(m>=91 && m<=100)
       ch = "AA";
    else if(m>=81 && m<=90)
        ch = "AB";
    else if(m>=71 && m<=80)
        ch = "BB";
    else if(m>=61 && m<=70)
        ch = "BC";
    else if(m>=51 && m<=60)
        ch = "CD";
    else if(m>=41 && m<=50)
        ch = "DD";
    else if(m<=40)
        ch = "Fail";

    return ch;
}