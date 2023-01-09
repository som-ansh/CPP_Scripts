//Program to reverse the words of a string individually. e.g., if you enter I Love C++, it should display
// I evoL ++C

#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    void Reverse(char[]);
    char str[80];
    cout<<"Enter the string:\t";
    cin.getline(str,80);
    strcat(str," ");
    Reverse(str);
    return 0;
}

void Reverse(char str[])
{
    char word[80];
    int i,k=0;

    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] != ' ')
        {
            word[k] = str[i];
            k+=1;
        }
        else
        {   cout<<" ";
            while(k>0)
             cout<<word[--k];
        }
    }
}