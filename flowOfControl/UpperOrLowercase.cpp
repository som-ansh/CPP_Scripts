
/*Program to print whether a given character is an uppercase or a lowercase character or a digit or any other character.
 Use ASCII code given below for it.*/
        
                         // CHARACTERS              ASCII RANGE
                         // '0' - '9'                 48-57
                         // 'A' - 'Z'                 65-90
                         // 'a' - 'z'                 97-122
                         // other characters          0 - 255 excluding above mentioned codes.

/* It illustrates if-else-if ladders*/


#include<iostream>

using namespace std;



int main()
{
    char ch;
    cout<<"\n"<<"Enter a character : ";
    cin>>ch;
    if( ch>= 48 && ch<=57)
       cout<<"You entered a digit"<<endl;
    else if (ch>=65 && ch<=90)
       cout<<"You entered a uppercase character"<<endl;        //if-else-if ladder
    else if (ch>=97 and ch<=122)
       cout<<"You entered a lowercase character"<<endl;
    else
        cout<<"You entered a special character."<<endl;
    return 0;
}