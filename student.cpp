#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
	
	class student
	{
		public:
			int roll=0;
		 	char name[25];
		 	char address[50];
		 	long int mob_no;
		 	int licence_no;
		 	int dd;
			int mm;
			int yy;
		 	char blood_grp[6];
		 	static int semester;
		 	static int count;

	
		student()	//Default Constructor
		{	
			cout<<"Constructer called";
			roll =count++;
			strcpy(name,"N.A");
			strcpy(address,"N.A");
			mob_no=111111111;
			licence_no=11111;
			dd=0;
			mm=0;
			yy=0;
			strcpy(blood_grp,"N.A");
		}
		
		student(int mob_no,int licence_no)	//Parameterized Constructor
		{	
			this->mob_no=mob_no;
			this->licence_no=licence_no;
			strcpy(name,"PARAMETERIZED");
			roll=count++;
			
		}
		student(student&temp)	//Copy Constructer
		{	
			cout<<"\nCopy Constructer called";
			roll=count;
			strcpy(name,temp.name);
			strcpy(address,temp.address);
			mob_no=temp.mob_no;
			licence_no = temp.licence_no;
			dd=temp.dd;
			mm=temp.mm;
			yy=temp.yy;
			strcpy(blood_grp,temp.blood_grp);
			count++;
		}
	
	~student()		//Destructor
		{
			cout<<"\nDESTRUCTOR EXECUTED\n";
		}
	
	static void get_count()	//To check the no of objects:
	{
		cout<<"\n"<<(count-1)<<endl;
	}

	void get()
	{		cout<<"\nEnter details for roll no:"<<roll<<endl;

			cout<<"\nEnter the name of student\n";
			cin>>name;
			
			fcloseall();
			cout<<"\nEnter the address of student \n";
			cin>>address;
			
			cout<<"\nEnter the mobile no. of student \n";
			cin>>mob_no;
			
			cout<<"\nEnter the licence no of student \n";
			cin>>licence_no;
			fcloseall();
			
			cout<<"\nEnter the student's Date of birth: \n";
			cout<<"\nDate(dd):";
			cin>>dd;
			cout<<"\nMonth(mm):";
			cin>>mm;
			cout<<"\nYear(yy):";
			cin>>yy;
			fcloseall();
			int b;
			cout<<"1.A+ve 2.B+ve 3.O+ve 4.AB+ve\n5.A-ve 6.B-ve 7.O-ve 8.AB-ve"<<endl;
			cin>>b;
			switch(b)
			{	case 1:
					strcpy(blood_grp,"A+ve");
					break;
				case 2:
					strcpy(blood_grp,"B+ve");
					break;
				case 3:
					strcpy(blood_grp,"O+ve");
					break;	
				case 4:
					strcpy(blood_grp,"AB+ve");
					break;
				case 5:
					strcpy(blood_grp,"A-ve");
					break;
				case 6:
					strcpy(blood_grp,"B-ve");
					break;
				case 7:
					strcpy(blood_grp,"O-ve");
					break;
				case 8:
					strcpy(blood_grp,"AB-ve");
					break;
				default:
					cout<<"\nWrong input now default value will be assigned (N.A)"<<endl;
				
			}
			
	
	}
	void display()
	{
	 	cout<<"\nRoll no.: "<<roll<<"Studying in semester "<<semester<<"\tName "<<name;
	 	cout<<"\nAddress: "<<address<<endl;
	 	cout<<"Mob no.:"<<mob_no<<"\tLicence no:"<<licence_no;
	 	cout<<"\nDOB(dd/mm/yy):"<<dd<<"/"<<mm<<"/"<<yy<<endl;
	 	cout<<"Blood Group:"<<blood_grp<<endl;
	}
	

	};
	
	int student :: semester=3;
	int student :: count=1;
	
int main()
{
	student s1;
	cout<<"\nEnter the details of student 1(non array)";
	s1.get();
	cout<<"\nThe details are:(S1 orignal)";
	s1.display();
	student s2(s1);
	cout<<"\nThe details are:(S2 (copyOfS1))";
	s2.display();
	
	student s3(38420,283472);
	s3.display();
	
	student* s[50];
	int n;
	cout<<"\nEnter the no of students (Array)\t";
	cin>>n;
	for(int i=0;i<n;i++)
		s[i]=new student();
	for(int i=0;i<n;i++)
		s[i]->get();
	for(int i=0;i<n;i++)
	{
		s[i]->display();
		cout<<"\n";
	}
	for(int i=0;i<n;i++)
		delete s[i];
	
	cout<<"\nNo. of objects made are: ";
	student::get_count();

	return 0;
}
/*
OUTPUT: 
*/
