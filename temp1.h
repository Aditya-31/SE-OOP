
	/*A HEADER FILE OF TEMPLATE CREATED FOR SELECTION SORT(Exported in the program selection_sort.cpp)*/
/*	Name: Aditya Gade	Class: SE-A	Created:28/8/19		Modified Last:28/8/19*/
#include<iostream>
using namespace std;
template <typename myType>
class sort
{
	myType* a;
	int size;
	public:
		sort(int n)
		{
			size=n;
			a=new myType[n];
		}
		void display()
		{
			for(int i=0;i<size;i++)
				cout<<"  "<<a[i];
		}
		void input()
		{
			for(int i=0;i<size;i++)
				cin>>a[i];
		}
		void selection_sort()
		{
			int min_index;
			for(int i=0;i<size;i++)
			{
				min_index=i;
				int j=0;
				for(j=i+1;j<size;j++)
				{
					if(a[j]<a[min_index])
						min_index=j;
				}
				if(i!=min_index)
				{
					/*a[j]+=a[min_index];
					a[min_index]=a[j]-a[min_index];
					a[j]-=a[min_index];*/
					int temp=0;
					temp=a[i];
					a[i]=a[min_index];
					a[min_index]=temp;
					cout<<"\nNext STEP:";
					display();
				}
			}
		}
};
