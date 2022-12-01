#include<iostream>

using namespace std;


void celsius_to_farenheit()
{
    double temp,conv_temp;
    cout<<"\n"<<"Enter temperature in Celsius :";
    cin>>temp;
    conv_temp = ( 1.8 * temp) + 32;
    cout<<" The Temperature in Farenheit is :"<< conv_temp<<"\n";

}

void farenheit_to_celsius()
{
    double temp,conv_temp;
    cout<<"\n"<<"Enter temperature in farenheit :";
    cin>>temp;
    conv_temp = (temp - 32)/ 1.8;
    cout<<" The Temperature in Celsius is :"<< conv_temp<<"\n";
}

int main()
{
    int choice;
    do
    {

    
         cout<<"\n"<<"Temperature conversion Menu"<<"\n";
         cout<<"1.Farhenheit to Celsius"<<"\n"<<"2.Celsius to Farenheit"<<"\n"<<"3.Exit"<<"\n";
         cout<<"Enter your choice:"<<endl;
         cin >> choice;
         switch(choice)
         {

            case 1 : farenheit_to_celsius();
                     break;

            case 2 : celsius_to_farenheit();
                     break;

            case 3 : exit;
                     break;

            default: cout<<"Enter a valid choice"<<"\n";

         }

    }while(choice!=3);

 return 0;
}