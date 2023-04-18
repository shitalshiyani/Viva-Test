#include<stdio.h>

struct students
{
	char name[50];
	char address[100];
	int roll_no;
};

void main()
{
	struct students s[5];
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("Enter Name=");
		scanf("%s",&s[i].name);
		printf("Enter Roll_No=");
		scanf("%d",&s[i].roll_no);
		printf("Enter Address=");
		scanf("%s",&s[i].address);
	}
	
	
}
