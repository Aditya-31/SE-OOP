#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#define MAX 30
#define table\
		cout<<setiosflags(ios::left)\
				<<setw(15)<<"Name"\
				<<setiosflags(ios::right)\
				<<setw(10)<<"Record No."\
				<<setiosflags(ios::right)\
				<<setw(10)<<"Quantity"\
				<<setprecision(2)<<setw(10)<<"Cost"\
				<<endl;\
				cout.unsetf(ios::right);
using namespace std;
class Item
{
		int recordNo;
		char name[MAX];
		int quantity;
		double cost;
		
	public:
		Item()
		{
			recordNo=quantity=0;
			cost=0;
			strcpy(name,"");
		}
		void read()
		{
			cout<<"Enter the name of commodity(End with a '+'):"<<endl;
			cin.getline(name,MAX,'+');
			cout<<"Enter the record number of"<<name<<": ";
			cin>>recordNo;
			cout<<"Enter the cost of a single "<<name<<": ";
			cin>>cost;
			cout<<"Enter the available quantity of "<<name<<": ";
			cin>>quantity;
		}
		
		void display()
		{
			table
			cout//<<setiosflags(ios::left)
				<<setw(15)<<name
				<<setiosflags(ios::right)
				<<setw(10)<<recordNo
				<<setiosflags(ios::right)
				<<setw(10)<<quantity
				<<fixed<<setprecision(2)<<setw(10)<<cost
				<<endl;
		}
};
int main()
{
	fstream file;
	char ch,searchString[MAX];
	Item readingObj,displayObj;
	int searchRecord;
	do
	{
		cout<<"MENU:"<<"\n1.Input an item.\n2.Display Inventory.\n3.Search by Name.\n4.Search by Record No.\n7.Exit."<<endl;
		cin>>ch;
		switch(ch)
		{
			case '1':
				file.open("hardware.txt",ios::app);
				//Item readingObj;		Crosses initialization
				readingObj.read();
				file.write((char*)&readingObj,sizeof(readingObj));
				file.close();
				break;
			case '2':
				file.open("hardware.txt",ios::in);
				//Item displayObj;		Crosses initialization
				while(file.read((char*)&displayObj,sizeof(displayObj)))
					displayObj.display();
				file.close();
				break;
			case '3':
				cout<<"Enter an inventory item to be searched:"
				cin.getline(searchString,MAX,'+');
				file.open("hardware.txt",ios::in);
				while(file.read((char*)&displayObj,sizeof(displayObj)))
				{
					if(!strcmp(searchString,
				}
				
			case '7':
				cout<<"You Closed the Program!";
				exit (1);
		}
	}while (ch!='7');
	return 0;
}
