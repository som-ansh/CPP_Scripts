//Program to check if a string is a palindrome or not. Using string as Character of arrays.

#include<iostream>
using namespace std;


int main()
{
    int size,len;
    cout<<"Enter the max length of the string : ";
    cin>>size;
    char str[size];
    cout<<"Enter your string :";
    cin.getline(str,size);
    

    for(len = 0; str[len] != '\0' ; len++);  //to find length of the string.

    int i,j,flag = -1;

    for(i=0,j=len-1; i<len/2 ; i++,j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
          
    }

    if(flag == 0)
      cout<<"The given string is not a PALINDROME";
    else
      cout<<"The given string is a PALINDROME";
    return 0;


   
}