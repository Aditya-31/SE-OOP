#include<iostream>
using namespace std;
class cppArray
{
	int *array;
	int size;
	public:
		cppArray()
		{
			cout<<"\nEnter the size of array:";
			cin>>size;
			array=new int[size];
		}
		int sizeofarray()
		{
			return size;
		}
		void read()
		{
			cout<<"\nEnter the Array elements whose size is"<<size;
			for(int i=0;i<size;i++)
				cin>> array[i];
		}
		void show()
		{
			cout<<"The entered array is "<<endl;
			cout<<"[";
			for(int i=0;i<size;i++)
				cout<<array[i]<<" ";
			cout<<"]";
				
		}
		void operator =(cppArray& b)
		{
			if(size==b.size)
			{	for(int i=0;i<size;i++)
					array[i]=b.array[i];
			}
		}
		int &operator [] (int subscript)
		{
			if(subscript>size)
			{
				cout<<"Enter the value to be overwritten on the "<<size<<"location";
				cin>>array[size-1];
				return array[size-1];
			}
			else if(subscript<0)
			{
				cout<<"Enter the value to be overwritten on the '0'th location";
				cin>>array[0];
				return array[0];
			}
			else
			{
				cout<<"Enter the value to be overwritten on the "<<subscript<<"th location";
				cin>>array[subscript];
				return array[subscript];
			}
		}
		friend istream &operator>>(istream& in,cppArray& b);
		friend ostream &operator<<(ostream& out,cppArray& b);
	
};


ostream &operator<<(ostream& out,cppArray& b)
{
	cout<<"[";
	for(int i=0;i<b.size;i++)
		cout<<b.array[i]<<" ";
	cout<<"]\n";
}
istream &operator>>(istream& in,cppArray& b)
{
	for(int i=0;i<b.size;i++)
		cin>> b.array[i];
}

int main()
{
	cppArray c;
	cout<<"\nEnter the Array C :";
	cin>>c;
	cppArray z;
	cout<<"\nEnter the Array Z :";
	cin>>z;
	cout<<"\nThe C & Z Array Entered are  :";
	cout<<"\nC"<<c;
	cout<<"\nZ"<<z;
	char yes;
	int num,CH1,choice,integer;
	do
	{
		cout<<"Enter the Choices:\n";
		cout<<"1.Check Size of Array"<<endl<<"2.Range Checking For C (Changing the value at a certain index)"<<endl<<"3.Range Checking For Z (Changing the value at a certain index)"<<endl<<"4.Assign array C to Z"<<endl<<"5.Assign array Z to C"<<"6.Entering the arrays completely all over again"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter Choice:\n1.FOR C\n2.FOR Z";
				cin>>ch1;
				switch(ch1)
				{
					case 1:
						integer=z.sizeofarray();
						cout<<integer;
						break;
					case 2:
						integer=c.sizeofarray();
						cout<<integer;
						break;				
					default:
						cout<<"\nWRONG CHOICE";	
						break;
				}
				break;
			case 2:
				cout<<"\nEnter the index at which the value is to be changed FOR C: ";
				cin>>num;
				c[num];
				break;
			case 3:
				cout<<"\nEnter the index at which the value is to be changed FOR Z: ";
				cin>>num;
				z[num];
				break;
			case 4:
				z=c;
				cout<<"Array Z is:"<<z;
				break;
			case 5:
				c=z;
				cout<<"Array C is: "<<c;
				break;
			case 6:
				cout<<"\nEntering the arrays all over again";
				cout<<"\nEnter Array C";
				cin>>c;
				cout<<"\nEnter Array Z";
				cin>>z;
				break;
			default:
				cout<<"Enter Correct Input";
				break;
		}
	
		cout<<"Do you want to continue(N/Y)";
		cin>>yes;
	}while( yes=='y'||yes=='Y');
	return 0;
}
