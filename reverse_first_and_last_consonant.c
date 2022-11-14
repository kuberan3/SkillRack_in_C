//revese string in between first and last consonants
#include<stdio.h>
int findLength(char s[])
{
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
		count++;
	return count;
}
void main()
{
	char a[20];
	int n,i,j,k,index,index1;
	printf("Enter string:");
	gets(a);
	n=findLength(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u')
		{
			index=i;
			break;
		}
	}
	for(j=n-1;j>=0;j--)
	{
		if(a[j]!='a' && a[j]!='e' && a[j]!='i' && a[j]!='o' && a[j]!='u')
		{
			index1=j;	
			break;
		}
	}
    for(k=0;k<index;k++)
    {
    	printf("%c",a[k]);
	}
	for(k=index1;k>=index;k++)
	{
		printf("%c",a[k]);
	}
	for(k=index1+1;k<n;j++)
	{
		printf("%c",a[k]);
	}
}
