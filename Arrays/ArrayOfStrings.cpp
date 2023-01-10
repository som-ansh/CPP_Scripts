//Program to reverse all the strings stored in an array

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char string[3][20],temp;  //can hold 3 strings each of max length 20 characters.
    int i,j,k,len;
    cout<<"Enter the 3 strings:\n";
    for(i=0;i<3;i++)
      cin.getline(string[i],20);
    cout<<"List of original string are:\n";

    for(i=0;i<3;i++)
      cout<<"\n"<<string[i];

    for(i=0;i<3;i++)
    {
       len=strlen(string[i]);
       for(j=0,k=len-1; j < len/2; j++,k--)
        {
            temp = string[i][j];
            string[i][j] = string[i][k];
            string[i][k] = temp;
        }
    }

    cout<<"The list of Reversed string is:\n";

    for(int i=0;i<3;i++)
      cout<<"\n"<<string[i];
    return 0;
}