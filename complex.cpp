/*			A C++ Program to perform complex no. operations using 
			Operator overloading for +,-,* and << and >> operators
		Name: Aditya Gade	Roll No. : 19 		SE 'A'		Date:17/7/2019
*/
#include<stdio.h>
#include<iostream>
using namespace std;
class complex
{
		float real;
		float imag;
	public:
		complex(const double &x=0,const double &y=0)
		{
			real=x;
			imag=y;
		}
		
		void display()
		{
			printf("\n%.02f%+.02f i\n",real,imag);
		}
		
		void set()
		{
			printf("\nEnter the real part:\t");
			scanf("%f",&real);
			printf("\nEnter the imaginary part:\t");
			scanf("%f",&imag);
		}
		complex operator +(complex& b)
		{
			complex temp;
			temp.real=real+b.real;
			temp.imag=imag+b.imag;
			return temp;
		}
		complex operator -(complex& b)
		{
			complex temp;
			temp.real=real-b.real;
			temp.imag=imag-b.imag;
			return temp;
		}
		complex operator *(complex& b)
		{
			complex temp;
			temp.real=(real*b.real)-(imag*b.imag);
			temp.imag=(real*b.real)-(imag*b.real);
			return temp;
		}
		/*complex operator /(complex& b)
		{
			complex temp;
			temp.real=;
			temp.imag=;
			return temp;
		}*/
		friend istream &operator>>(istream& in,complex& b);
		friend ostream &operator<<(ostream& out,complex& b);
};

istream &operator>>(istream& in,complex& b)
{
	cout<<"\nEnter the real part:\t";
	in>>b.real;
	cout<<"\nEnter the imaginary part:\t";
	in>>b.imag;
}

ostream &operator<<(ostream& out,complex& b)
{
	//cout<<"Complex no. is:\t";
	if(b.imag>0)
	out<<b.real<<"+"<<b.imag<<" i";
	else
	out<<b.real<<"-"<<abs(b.imag)<<" i";
}

int main()
{
	complex a0;
	printf("\n(Default) a0:\t");
	complex a1(1.11,2.22),a2;
	//a1.set();
	printf("\n(Parameterized) a1:\t");
	a1.display();
	a2.set();
	printf("\n(User i/p) a2:\t");
	a2.display();
	
	complex a3;	//Operator Overloading: Addition
	a3=a1+a2;
	printf("\n\nOperator Overloading: Addition\na3=a1+a2:\t");
	a3.display();
	
	complex a4;	//Operator Overloading: Subtraction
	a4=a2-a1;
	printf("\nOperator Overloading: Subtraction\na4=a2-a1:\t");
	a4.display();
	
	complex a5;	//Operator Overloading: Multiplication
	a5=a2*a1;
	printf("\nOperator Overloading: Multiplication\na5=a1*a2\t");
	a4.display();
	
	/*complex a6;	//Operator Overloading: Divide
	a6=a2/a1;
	printf("\nOperator Overloading: Divide\na6=a1/a2\t");
	a6.display();*/
	
	complex a6;
	printf("\nEnter the complex no.:\n");
	cin>>a6;
	printf("\nThe complex no you entered is:/t");
	cout<<a6;
	
	return 0;
}
/*
OUTPUT:
kkw@kkw-HP-280-G2-MT-Legacy:~$ cd SEA19
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ g++ complex.cpp
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ ./a.out

(Default) a0:	
(Parameterized) a1:	
1.11+2.22 i

Enter the real part:	12

Enter the imaginary part:	33.3

(User i/p) a2:	
12.00+33.30 i


Operator Overloading: Addition
a3=a1+a2:	
13.11+35.52 i

Operator Overloading: Subtraction
a4=a2-a1:	
10.89+31.08 i

Operator Overloading: Multiplication
a5=a1*a2	
10.89+31.08 i

Enter the complex no.:

Enter the real part:	13.99

Enter the imaginary part:	-9.69       

The complex no you entered is:/t13.99-9.69 ikkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ 

*/
