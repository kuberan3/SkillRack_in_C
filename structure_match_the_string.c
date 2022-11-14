#include<stdio.h>
struct MatchString
{
	int c[20];
	char a[20];
};
int findLength(char s[])
{
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
void main()
{
	int i,j,n;
	printf("Enter n:");
	scanf("%d",&n);
	struct MatchString b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&b[i].c[i],b[i].a);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i].c[i]==findLength(b[j].a))
			{
				printf("%d %s",b[i].c[i],b[j].a);
				break;
			}
		}
		printf("\n");
	}
}
