//print majority- vowel/consonants
#include<stdio.h>
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
	int i,n,count=0,count1=0;
	char a[20];
	printf("Enter string:");
	gets(a);
	n=findLength(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			count++;
		else
			count1++;
	}
	if(count>count1)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
				printf("%c",a[i]);
		}
	}
	else if(count==count1)
	{
		printf("%s",a);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(!(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'))
				printf("%c",a[i]);
		}
	}
}
