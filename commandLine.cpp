/*				A C++ Program to use Command Line Arguements to 
		   	   find a word inside a file and replace it with given Word
		Name: Aditya Gade	Roll No. : 19 		SE 'A'		Date:9/10/2019*/
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<iostream>
using namespace std;
//RUN USING FOLLOWING STEPS:
// g++ commandLine.cpp -o aditya
// ./aditya <old word> <new word> sample.txt

// Generalised Form:
// ./<filename> <old word> <new word> <textfilename>.txt
int main(int argc ,char* argv[])
{
	if(argc<4)
	{
		cout<<"Insufficient no of arguements present!\n";
		exit(0);
	}

	string initial,writeback; 
 	fstream fin;
 	cout<<"Find string "<<argv[2]<<" and replace with "<<argv[3]<<" in file"<<argv[1]<<" \"\n";
 	cout<<"File before replacement operation:\n";
 	fin.open(argv[1],ios::in);
 	if(!fin)
 	{
 		cout<<"File was not opened!!!";
 		return 1;
 	}
 	while(fin)
 	{	
 		getline(fin,initial);
 		cout<<initial<<endl;
 	}
 	fin.close();
 	fin.open(argv[1],ios::in);
 	writeback="";
 	if(!fin)
 	{
 		cout << "Unable to open file";
 		exit(1);
 	}
 	while(fin)
 	{
 		getline(fin,initial);
 		int b;
 		int a =(int) initial.find(argv[2],0);
 		while (a != string::npos)
 		{
 			initial.replace(a,strlen(argv[2]),argv[3]);
 			a =(int) initial.find(argv[2],(a+1));
 		}
		writeback=writeback+initial+"\n";
 	}
 	fin.close();
 	fin.open(argv[1],ios::out);
 	if(!fin)
 	{
 		cout<<"error opening file";
 		return 1;
 	}
 	fin<<writeback;
 	cout<<"Replacement successful\n";
 	fin.close();
 cout<<"File After Replacement\n";
 	fin.open(argv[1],ios::in);
 	if(!fin)
 	{
 		cout<<"File was not opened!!!";
 		return 1;
 	}
 	while(fin)
 	{
 		getline(fin,initial);
 		cout<<initial<<endl;
 	}
 	fin.close();
 	return 0;
 }
