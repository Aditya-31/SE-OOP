#include<stdio.h>
void main()
{
	int n;
	printf("enter the no students \n");
	scanf("%d",&n);

	int rollno[n],marks[n],i;
	char name[n];


	for(i=0;i<n;i++)
	{
		printf("enter roll no of student%d\n",i+1);
		scanf("%d",&rollno[i]);


		printf("enter the name of the student%d\n",i+1);
		scanf("%s",name[i]);


		printf("enter the marks of the student%d\n",i+1);
		scanf("%d",&marks[i]);
	}
	printf("\n rollno.\t name\t marks");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%d\t%d",rollno[i],name[i],marks[i]);
	}
}











