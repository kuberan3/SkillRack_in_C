#include<stdio.h>
struct commonpossamechar
{
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
	int i,j,L,n,count=0;
	printf("Enter n:");
	scanf("%d",&n);
	struct commonpossamechar b[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",b[i].a);
	}
	L=findLength(b[0].a);
	for(i=1;i<n;i++)
	{
		for(j=0;j<L;j++)
		{
			if(b[i].a[j]==b[0].a[j])
				count++;
		}
	}
	if(count>=n-1)
	{
		for(i=1;i<n;i++)
		{
			for(j=0;j<L;j++)
			{
				if(b[i].a[j]==b[0].a[j])
					printf("%c",b[i].a[j]);			
			}
		}
	}
}
