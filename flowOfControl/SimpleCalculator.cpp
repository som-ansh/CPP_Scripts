//program to showcase a simple calculator. It illustrates the use of nested if's

#include<iostream>

using namespace std;

int main()
{ char option;
    do{


    char ch;
    float a,b,result;
    cout<<"Enter two numbers"<<"\n";
    cin>>a>>b;
    cout<<"Enter the operator : (+,-,*,/)"<<"\n";
    cin>>ch;
    cout<<"\n";

    if(ch == '+')
        result = a + b;
    else
        if (ch == '-')
           result = a - b;
        else
            if (ch == '*')
                result = a * b;
            else 
                if (ch == '/')
                   result = a/b;
                else
                    cout<<"Wrong operator"<<"\n";
    cout<<"The calculated result is :"<<result<<"\n";
    cout<<"Do you wish to continue?(y/n) "<<"\n";
    cin>>option;
}while(option == 'y');
    return 0;

}