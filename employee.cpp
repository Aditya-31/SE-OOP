/*		Write A C++ Program To Create an Employee Biodata Using Following Classes:
		1.Personal Record 	2.Professional Record		3.Academic Record.
Assume no of employees and read and write the data:(Use Concept of Multiple Inheritance(multiple bases and single derived))
	Name: Aditya Gade	Roll No. : 19 		SE 'A'		Date:24/7/2019		Modified Last: 28/8/19
*/
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
/*class data	//CAN BE USED IF USING HIERARCHIAL TYPE!
{
	public:
		virtual void get_data()=0;
		virtual void show_data()=0;
};*/
class personal
{
	protected:
		char name[20];
		int dd;
		int mm;
		int yy;
		long int mob_no;
	public:
		personal()
		{
			strcpy(name,"N.A");
			dd=mm=yy=0;
			mob_no=0;
		}

};

class professional
{
	protected:
		int exp_year;
		char designation[20];
		int id_no;		
	public:
		professional()
		{
			exp_year=id_no=0;
			strcpy(designation,"N.A");
		}
		
};
class academic
{
	protected:
		char degree[10];
		float percentage;
		float cgpa;
	public:
		academic()
		{
			strcpy(degree,"N.A");
			percentage=cgpa=0.0;
		}
};
class employee: public personal,public professional,public academic
{
	public:
		void get_data()
		{
			printf("\nEnter the name of employee:");
			scanf("%s",name);
			printf("\nEnter the DOB of employee:");
			printf("\nDD:");
			scanf("%d",&dd);
			printf("\nMM:");
			scanf("%d",&mm);
			printf("\nYY:");
			scanf("%d",&yy);
			printf("\nEnter Employee's Mobile No.:");
			scanf("%ld",&mob_no);
			
			
			printf("\nEnter the designation of employee:");
			scanf("%s",designation);
			printf("\nEnter the experience of employee (IN YEARS):");
			scanf("%d",&exp_year);
			printf("\nEnter the ID no. of employee: ");
			scanf("%d",&id_no);
			
			printf("\nEnter the degree of employee: ");
			scanf("%s",degree);
			printf("\nEnter the CGPA no. of employee: ");
			scanf("%f",&cgpa);
			printf("\nEnter the percentage no. of employee: ");
			scanf("%f",&percentage);
		}
		void show_data()
		{
			printf("\n\n\t\tBIO-DATA\n");
			for(int i=0;i<40;i++)
				printf("*");
			printf("\nPersonal Data of Employee:");
			printf("\n\tNAME:\t%s",name);
			printf("\n\tDOB:\t%d/%d/%d",dd,mm,yy);
			printf("\n\tMobile No:\t%ld \n",mob_no);
			
			for(int i=0;i<40;i++)
				printf("*");
			printf("\nProfessional Data of Employee:");
			printf("\n\tDESIGNATION:\t%s",designation);
			printf("\n\tEXPERIENCE(in YEARS):\t%d",exp_year);
			printf("\n\tID:\t%d\n",id_no);
			
			for(int i=0;i<40;i++)
				printf("*");
			printf("\nAcademic Data of Employee:");
			printf("\n\tDEGREE:\t%s",degree);
			printf("\n\tCGPA:\t%.2f",cgpa);
			printf("\n\tPercentage:\t%.2f%",percentage);
		}
	
};
int main()
{
	employee p;
	p.get_data();
	p.show_data();
	return 0;
}
