#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	char dept[10];
};
void main()
{
	int n,i;
	printf("Enter no of students:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%s%s",&s[i].rollno,s[i].name,s[i].dept);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%s",s[i].rollno,s[i].name,s[i].dept);
		printf("\n");
	}
}
