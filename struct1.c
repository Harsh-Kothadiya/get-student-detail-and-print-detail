//get student detail and print detail
#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char fname[15];
	char lname[20];
	char dname[10];//department name
	char emailId[20];
};
void main()
{
	struct student obj;
	printf("\n\t ENTER A ROLL NO : ");
	scanf("%d",&obj.roll);
	printf("\n\t ENTER A FIRST NAME : ");
	scanf("%s",obj.fname);
	printf("\n\t ENTER A LAST NAME : ");
	scanf("%s",obj.lname);
	printf("\n\t ENTER A DEPARTMENT NAME : ");
	scanf("%s",obj.dname);
	printf("\n\t ENTER A EMAIL ID : ");
	scanf("%s",obj.emailId);
	
	printf("\n-----OUTPUT----------------------\n");
	printf("\n\n\t  ROLL NO : %d",obj.roll);
	printf("\n\n\t  FIRST NAME : %s",obj.fname);
	printf("\n\n\t  LAST NAME : %s",obj.lname);
	printf("\n\n\t  DEPARTMENT NAME : %s",obj.dname);
	printf("\n\n\t  EMAIL ID : %s",obj.emailId);
	
getch();
}
