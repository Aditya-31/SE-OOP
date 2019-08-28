/*			A C++ Program to perform complex no. operations using 
			Operator overloading for +,-,* and << and >> operators For an Array
		Name: Aditya Gade	Roll No. : 19 		SE 'A'		Date:7/8/2019		Modified Last:27/8/19
*/
#include<iostream>
using namespace std;
class cppArray
{
	int *array;
	int size;
	public:
		cppArray()
		{
			cout<<"\nEnter the size of array:"<<endl;
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
				cout<<"Enter the value to be overwritten on the "<<size<<"location"<<endlt;
				cin>>array[size-1];
				return array[size-1];
			}
			else if(subscript<0)
			{
				cout<<"Enter the value to be overwritten on the '0'th location"<<endl;
				cin>>array[0];
				return array[0];
			}
			else
			{
				cout<<"Enter the value to be overwritten on the "<<subscript<<"th location"<<endl;
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
	int num,ch1,choice,integer;
	do
	{
		cout<<"Enter the Choices:\n";
		cout<<"1.Check Size of Array"<<endl<<"2.Range Checking For C (Changing the value at a certain index)"<<endl<<"3.Range Checking For Z (Changing the value at a certain index)"<<endl<<"4.Assign array C to Z"<<endl<<"5.Assign array Z to C"<<endl<<"6.Entering the arrays completely all over again"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout<<"Enter Choice:\n1.FOR C\n2.FOR Z"<<endl;
				cin>>ch1;
				switch(ch1)
				{
					case 1:
						integer=z.sizeofarray();
						cout<<"SIZE:"<<integer;
						break;
					case 2:
						integer=c.sizeofarray();
						cout<<"SIZE:"<<integer;
						break;				
					default:
						cout<<"\nWRONG CHOICE"<<endl;	
						break;
				}
				break;
			case 2:
				cout<<"\nEnter the index at which the value is to be changed FOR C: "<<endl;
				cin>>num;
				c[num];
				break;
			case 3:
				cout<<"\nEnter the index at which the value is to be changed FOR Z: "<<endl;
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
				cout<<"\nEnter Array C"<<endl;
				cin>>c;
				cout<<"\nEnter Array Z"<<endl;
				cin>>z;
				break;
			default:
				cout<<"\nEnter Correct Input"<<endl;
				break;
		}
	
		cout<<"\nDo you want to continue(N/Y)"<<endl;
		cin>>yes;
	}while( yes=='y'||yes=='Y');
	return 0;
}
/*
SAMPLE OUTPUT:
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ g++  cpparray.cpp
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ ./a.out

Enter the size of array:5

Enter the Array C :
1
2
3
4
5

Enter the size of array:
5

Enter the Array Z :
5
4
3
2
1

The C & Z Array Entered are  :
C[1 2 3 4 5 ]

Z[5 4 3 2 1 ]

Enter the Choices:
1.Check Size of Array
2.Range Checking For C (Changing the value at a certain index)
3.Range Checking For Z (Changing the value at a certain index)
4.Assign array C to Z
5.Assign array Z to C
6.Entering the arrays completely all over again
1
Enter Choice:
1.FOR C
2.FOR Z
1
SIZE:5
Do you want to continue(N/Y)
Y
Enter the Choices:
1.Check Size of Array
2.Range Checking For C (Changing the value at a certain index)
3.Range Checking For Z (Changing the value at a certain index)
4.Assign array C to Z
5.Assign array Z to C
6.Entering the arrays completely all over again
2

Enter the index at which the value is to be changed FOR C:
3
Enter the value to be overwritten on the 3th location
2
Do you want to continue(N/Y)
Y
Enter the Choices:
1.Check Size of Array
2.Range Checking For C (Changing the value at a certain index)
3.Range Checking For Z (Changing the value at a certain index)
4.Assign array C to Z
5.Assign array Z to C
6.Entering the arrays completely all over again
4
Array Z is:[1 2 3 2 5 ]
Do you want to continue(N/Y)
Y
Enter the Choices:
1.Check Size of Array
2.Range Checking For C (Changing the value at a certain index)
3.Range Checking For Z (Changing the value at a certain index)
4.Assign array C to Z
5.Assign array Z to C
6.Entering the arrays completely all over again
5
Array C is: [1 2 3 2 5 ]
Do you want to continue(N/Y)
y
Enter the Choices:
1.Check Size of Array
2.Range Checking For C (Changing the value at a certain index)
3.Range Checking For Z (Changing the value at a certain index)
4.Assign array C to Z
5.Assign array Z to C
6.Entering the arrays completely all over again
6

Entering the arrays all over again
Enter Array C1
2
3
4
5

Enter Array Z5
4
3
2
1
Do you want to continue(N/Y)n
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ 
*/
