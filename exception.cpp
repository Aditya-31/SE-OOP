#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;


class exception_handling
{
    public:
   int age,income;
   char city[10];
   bool vehicle;
   void enter_details();
   void display();
};
void exception_handling::display()
{
  
   cout<<"ENTERED DETAILS ARE:\n";
   cout<<"AGE:-"<<age<<endl;
   cout<<"INCOME:-"<<income<<endl;
   cout<<"CITY:-"<<city<<endl;
   cout<<"HAS A VEHICLE:-";
   if(vehicle==true)
     cout<<"YES"<<endl;
}
  
void exception_handling::enter_details()
{
   int flag=0;
   cout<<"PLEASE ENTER YOUR DETAILS:\n";
   
   while(flag==0)
    {
        cout<<"PLEASE ENTER YOUR AGE:\n";
        cin>>age;
         try
          {
             if(age>=18&&age<=55)
                flag=1;
             else
               throw age;
          }
          catch(int age)
           {
              cout<<"INVALID AGE PLEASE RE-ENTER!\n";
           }
     }
   flag=0;
   while(flag==0)
    {
        cout<<"PLEASE ENTER YOUR INCOME:\n";
        cin>>income;
         try
          {
             if(income>=50000&&income<=100000)
                flag=1;
             else
                throw income;
          }
          catch(int income)
          {
             cout<<"INVALID INCOME PLEASE RE-ENTER!\n";
          }
    }
    flag=0;
   while(flag==0)
   {
        cout<<"PLEASE ENTER YOUR CITY:\n";
        cin>>city;
       // strupr(city);
        try
         {
           if(strcmp(city,"pune")==0||strcmp(city,"mumbai")==0||strcmp(city,"bangaloresss")==0||strcmp(city,"chennai")==0)
            flag=1;
           else
           throw city;
         }
         catch(char city[10])
         {
           cout<<"INVALID CITY PLEASE RE-ENTER!\n";
         }
   }
   flag=0;
   while(flag==0)
    {
        char ch;
        cout<<"DO YOU HAVE A VEHICLE?(Y/N)\n";
        cin>>ch;
        if(ch=='y'||ch=='Y')
          vehicle=true;
        else
          vehicle=false;
  
        try
         {
            if(vehicle==true)
             flag=1;
            else
              throw vehicle;
         }
         catch(bool vehicle)
         {
             cout<<"PLEASE RE-ENTER!\n";
         }
    }
   flag=0;
}

int main()
{
     
    exception_handling ob;
    ob.enter_details();
    ob.display();
    return 0;
}
         
           
