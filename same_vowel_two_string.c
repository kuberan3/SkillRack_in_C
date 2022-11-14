#include<stdio.h>
void main()
{
	int l1,l2,i,j;
	char s1[50],s2[50];
	gets(s1);
	gets(s2);
	l1=strlen(s1);l2=strlen(s2);
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			if(s1[i]==s2[j])
			{
				if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i'
				|| s1[i]=='o' || s1[i]=='u')
				{
					printf("%c",s1[i]);
					break;
				}
			}
		}
	}
}
