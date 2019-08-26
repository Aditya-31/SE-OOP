#include<iostream>
#include<string.h>
using namespace std;
class publication					//Abstract Base class Publication declared 
{
	protected:
		float price;
		char title[50];
	public:
		virtual void read()=0;		//Virtual functions to read data
		virtual void display()=0;	//Virtual functions to display data
};

class book : public virtual publication 		//Derived class book declared
{
		int pages;
	public:
		void read();
		void display();
};

class audio_tape : public virtual publication	////Derived class Audio_Tape declared
{
		float time;
	public:
		void read();
		void display();
};

//Get data to avail the Hard Copy of a Book
void book :: read()
{
	cout<<"\nEnter the title of the Book: ";
	getline(cin, title);
	cout<<"Enter the Price: ";
	cin>>price;
	
	try
	{
		if(price>=500)
		{
			throw(price);
		}
	}
	catch(float)
	{
		cout<<"\nPrice is not affordable";
		cout<<"\nEnter the Price of the Book: ";
		cin>>price;
	}
	cout<<"Enter the number of pages of the Book: ";
	cin>>pages;
}

//Displays the data entered
void book :: display()
{
	cout<<"\nTITLE - "<<title;
	cout<<"\tPRICE - "<<price;
	cout<<"\tPAGES - "<<pages;
}

//Get data to avail the Audio Copy of a Book
void audio_tape :: read()
{
	cout<<"\nEnter the title of the Book: ";
	getline(cin, title);
	cout<<"Enter the Price: ";
	cin>>price;
	cout<<"Enter the time in min of the Book: ";
	cin>>time;
	
	try
	{
		if(time>60)
		{
			throw(time);
		}
	}
	catch(float)
	{
		cout<<"\nPlay time you entered is more";
		cout<<"\nEnter the time in min of the Book: ";
		cin>>time;
	}
}

//Displays the data entered
void audio_tape :: display()
{
	cout<<"\nTITLE - "<<title;
	cout<<"PRICE - "<<price;
	cout<<"TIME(in min) - "<<time;
}

int main()
{
	int j,ch,n;
	char ch1;
	publication *p[100];			//Declaration of Pointer Variable
	j=0;
	
	do
	{
		cout<<"\nENTER THE CHOICE \n1.Book(hard copy) \n2.Audio Tape of a Book \n3.Display \nYour Choice is: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\nBOOK(Hard Copy)";
				p[j]=new book();
				p[j]->read();
				j++;
				break;
			
			case 2: 
				cout<<"\nAUDIO TAPES";
				p[j]=new audio_tape();
				p[j]->read();
				j++;
				break;
		
			case 3: 
				cout<<"\nDISPLAYING";
				n=j;
				for(j=0;j<n;j++)
					p[j]->display();
				break;
		}
		
		cout<<"\nDO YOU WANT TO CONTINUE??: ";
		cin>>ch1;
	}while(ch=='Y'||ch1=='y');
	
	return 0;
}


















