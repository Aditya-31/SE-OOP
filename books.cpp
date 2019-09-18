/*				A C++ Program of Book Publishing House
		Name: Aditya Gade	Roll No. : 19 		SE 'A'		
*/
#include<iostream>
#include<string.h>
using namespace std;
class publication					//Abstract Base Class
{
	protected:
		float price;
		char title[50];
	public:
		publication()
		{
		}
		virtual void read()=0;		//PURE Virtual-Read
		virtual void display()=0;	//PURE Virtual-Display
};

class book : public virtual publication 		//Derived class #1
{
		int pages;
	public:
		book():publication()
		{
			pages=0;
		}

		void read()
		{
			cout<<"\nEnter the title of the Book: ";
			cin.getline(title,50,'+');
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

		void display()
		{
			cout<<"\nTITLE - "<<title;
			cout<<"\tPRICE - "<<price;
			cout<<"\tPAGES - "<<pages;
		}

};

class audioTape : public virtual publication	////Derived class #2
{
		float time;
	public:
		audioTape():publication()
		{
			time=0;
		}
		void read()
		{
			cout<<"\nEnter the title of the Book: ";
			cin.getline(title,50,'+');
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
		
		void display()
		{
			cout<<"\nTITLE - "<<title<<endl;
			cout<<"PRICE - "<<price<<endl;
			cout<<"TIME(in min) - "<<time<<endl;
		}

};

int main()
{
	int j,ch,n;
	char ch1;
	cout<<"Enter the No. Of Books + Audio Tapes You Want"<<endl;
	int size;
	cin>> size;
	publication *p[size];			//Declaration of Pointer Variable of BASE Class.
	j=0;
	
	do
	{
		cout<<"\nENTER THE CHOICE \n1.Book\n2.Audio Book \n3.Display \nYour Choice is: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\nBook";
				p[j]=new book();
				p[j]->read();
				j++;
				break;
			
			case 2: 
				cout<<"\nAudio Book";
				p[j]=new audioTape();
				p[j]->read();
				j++;
				break;
		
			case 3: 
				cout<<"\nCurrently Present books are:\n";
				for(n=0;n<j;n++)
				{
					cout<<n+1<<":\n";
					p[n]->display();
				}
				break;
		}
		
		cout<<"\nDO YOU WANT TO CONTINUE??: ";
		cin>>ch1;
	}while(ch=='Y'||ch1=='y');
	
	return 0;
}
/*OUTPUT:
kkw@kkw-HP-280-G2-MT-Legacy:~$ cd SEA19

kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ g++ publication.cpp
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ ./a.out
Enter the No. Of Books + Audio Tapes You Want
10

ENTER THE CHOICE 
1.Book
2.Audio Book 
3.Display 
Your Choice is: 1

Book
Enter the title of the Book: Avengers Assemble+
Enter the Price: 599

Price is not affordable
Enter the Price of the Book: 450
Enter the number of pages of the Book: 453

DO YOU WANT TO CONTINUE??: y

ENTER THE CHOICE 
1.Book
2.Audio Book 
3.Display 
Your Choice is: 2

Audio Book
Enter the title of the Book: Audio Book+
Enter the Price: 123
Enter the time in min of the Book: 12

DO YOU WANT TO CONTINUE??: y

ENTER THE CHOICE 
1.Book
2.Audio Book 
3.Display 
Your Choice is: 3

Currently Present books are:
1.
TITLE - 
Avengers Assemble
PRICE - 450
PAGES - 453
2.
TITLE - 
Audio Book
PRICE - 123
TIME(in min) - 12
DO YOU WANT TO CONTINUE??: n
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ 
*/
















