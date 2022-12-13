#include<iostream>
using namespace std;

int main()
{
    int findposition(string , char );
    string s;
    char ch;
    int y=0;
    cout<<"Enter the string: \n";
    getline(cin,s);                                      //getline is for string data type. cin.getline is for array of characters.
    cout<<"\n Enter the chracter to be searched for: \n";
    cin>>ch;
    y = findposition(s,ch);
    if (y == -1)
       cout<<"\n Character not found in the given string!\n";
    return 0;
}


int findposition(string s, char ch)
{
    int flag = -1;
    for(int i = 0; i<s.length() ; i++ )           //s.length() returns the length of string including whitespace.
       {
        if(s.at(i) == ch)                         //s.at(i)  return the character at position i of the string.
           {
            flag = 0;
            cout<<"\n The character is in the string at position "<<i+1;
           }
       }
    return flag;   
}