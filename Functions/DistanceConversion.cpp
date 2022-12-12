//Program to convert distance in feet or inches using a call by reference method.

#include<iostream>
using namespace std;

int main()
{
    void convert(float &,char &,char);  //observe that it is a mix of call by value and call by reference.
    float distance;
    char choice, type = 'F';            //type tells about current form of distance.
    cout<<"\n Enter the distance in feet: ";
    cin>>distance;
    cout<<"\n You want distance in feet or inches ? (F/I) : \n";
    cin>>choice;
    switch(choice)
    {
        case 'F' : convert(distance,type,'F');
                   break;
        case 'I' : convert(distance,type,'I');
                   break;
        default  : cout<<"\n You have entered a wrong choice!! ";
                   exit;
    }
    cout<<"\n Distance = "<<distance<<""<<type<<"\n";
    return 0;
}



void convert(float & d, char & t, char ch)
{
    switch(ch)
    {
        case 'F' : if(t == 'I')
                   {
                    d = d/12;
                    t = 'F';
                   }
                   break;

        case 'I' : if(t == 'F')
                   {
                     d = d*12;
                     t = 'I';
                   }
                   break;

    }   
    return ;                  //void return type. So returns nothing.
}