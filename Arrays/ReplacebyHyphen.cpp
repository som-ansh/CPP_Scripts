//Program to replace every space in a string by hyphen


#include<iostream>

using namespace std;


int main()
{   
    void ReplaceByHyphen(char[]);
    char str[80];
    cout<<"Enter the String";
    cin.getline(str,80);
    ReplaceByHyphen(str);
    return 0;

}

void ReplaceByHyphen(char str[80])
{
    int i,len;

    for(len=0; str[len] != '\0'; len++);

    for(i=0;i<len;i++)
    {
        if(str[i] == ' ')
           str[i] = '-';
    }
    cout<<str;
}