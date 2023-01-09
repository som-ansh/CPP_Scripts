// Program to check if a string is a palindrome or not. Using string as Character of arrays.

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ 
  void TestPalindrome(char[]);
  char str[80];
  cout<<"Enter the string to check whether its palindrome!";
  cin.getline(str,80);
  TestPalindrome(str);
  return 0;
}

void TestPalindrome(char str[80])
{
  int i,j,flag=-1,len=0;

  for(len=0;str[len] != '\0'; len++);     //to obtain length of the string

  for(i=0,j=len-1; i<len/2; i++,j--)      //i sits at beginning of string and j sits at end of the string
  {
    if(str[i] != str[j])
    {
      flag = 0;
      break;      
    }
     
  }

  if(flag == 0)
    cout<<"The given string is not a Palindrome";
  else
    cout<<"The given string is a Palindrome";
}
