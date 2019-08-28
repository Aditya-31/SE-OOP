/*Write A C++ Program Using Class Template For Selection SOrt.*/
#include<iostream>
#include<iomanip>
#include"temp1.h"
using namespace std;
int main()
{
	char ch;
	cout<<"\nEnter the type in which you want to implement:\n1.Integer\t2.Char\t3.Float\t4.Double:"<<endl;
	cin>>ch;
	int n;
	cout<<"\nEnter the size of array"<<endl;
	cin>>n;
	sort <int>s1(n);
	sort <char>s2(n);
	sort <float>s3(n);
	sort <double>s4(n);
	switch(ch)
	{
		case '1':
			
			cout<<"\nINTEGER:";
			cout<<"\nEnter the Elements"<<endl;
			s1.input();
			cout<<"\n\nARRAY BEFORE SORT:";
			s1.display();
			s1.selection_sort();
			cout<<"\n\nARRAY AFTER SORT:";
			s1.display();
			break;
		case '2':
			cout<<"\nCHARACTER:";
			cout<<"\nEnter the Elements"<<endl;
			s2.input();
			cout<<"\n\nARRAY BEFORE SORT:";
			s2.display();
			s2.selection_sort();
			cout<<"\n\nARRAY AFTER SORT:";
			s2.display();
			break;
		case '3':
			cout<<"\nFLOAT:";
			cout<<"\nEnter the Elements"<<endl;
			s3.input();
			cout<<"\n\nARRAY BEFORE SORT:";
			s3.display();
			s3.selection_sort();
			cout<<"\n\nARRAY AFTER SORT:";
			s3.display();
			break;
		case '4':
			cout<<"\nDOUBLE:";
			cout<<"\nEnter the Elements"<<endl;
			s4.input();
			cout<<"\n\nARRAY BEFORE SORT:";
			s4.display();
			s4.selection_sort();
			cout<<"\n\nARRAY AFTER SORT:";
			s4.display();
			break;
		default:
			cout<<"\nINVALID INPUT!!!\nNow run the program again.";
			break;
	}
	return 0;
}
/*
SAMPLE OUTPUT:
1.INTEGER:
kkw@kkw-HP-280-G2-MT-Legacy:~$ cd SEA19
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ g++  selection_sort.cpp
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ ./a.out

Enter the type in which you want to implement:
1.Integer	2.Char	3.Float	4.Double:
1

Enter the size of array
5

INTEGER:
Enter the Elements
5
1
4
2
3


ARRAY BEFORE SORT:  5  1  4  2  3
Next STEP:  1  5  4  2  3
Next STEP:  1  2  4  5  3
Next STEP:  1  2  3  5  4
Next STEP:  1  2  3  4  5

ARRAY AFTER SORT:  1  2  3  4  5kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ 

2.CHARACTER:
kkw@kkw-HP-280-G2-MT-Legacy:~$ cd SEA19
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ g++  selection_sort.cpp
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ ./a.out
Enter the type in which you want to implement:
1.Integer	2.Char	3.Float	4.Double:
2

Enter the size of array
5

CHARACTER:
Enter the Elements
z
a
b
y
x


ARRAY BEFORE SORT:  z  a  b  y  x
Next STEP:  a  z  b  y  x
Next STEP:  a  b  z  y  x
Next STEP:  a  b  x  y  z

ARRAY AFTER SORT:  a  b  x  y  zkkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ 


3.FLOAT
kkw@kkw-HP-280-G2-MT-Legacy:~$ cd SEA19
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ g++  selection_sort.cpp
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ ./a.out
Enter the type in which you want to implement:
1.Integer	2.Char	3.Float	4.Double:
3

Enter the size of array
5

FLOAT:
Enter the Elements
1.4
2.78
2.95
0.67
0.23


ARRAY BEFORE SORT:  1.4  2.78  2.95  0.67  0.23
Next STEP:  0.23  2.78  2.95  0.67  1
Next STEP:  0.23  0.67  2.95  2  1
Next STEP:  0.23  0.67  1  2  2

ARRAY AFTER SORT:  0.23  0.67  1.4  2.78  2.95kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ 

4.DOUBLE:
kkw@kkw-HP-280-G2-MT-Legacy:~$ cd SEA19
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ g++  selection_sort.cpp
kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ ./a.out
Enter the type in which you want to implement:
1.Integer	2.Char	3.Float	4.Double:
4

Enter the size of array
5

DOUBLE:
Enter the Elements
199.5
20000.65
2983.31
102.69
35647.2


ARRAY BEFORE SORT:  199.5  20000.7  2983.31  102.69  35647.2
Next STEP:  102.69  20000.7  2983.31  199  35647.2
Next STEP:  102.69  199  2983.31  20000  35647.2

ARRAY AFTER SORT:  102.69  199.5  2983.31  20000.65  35647.2kkw@kkw-HP-280-G2-MT-Legacy:~/SEA19$ 

*/
