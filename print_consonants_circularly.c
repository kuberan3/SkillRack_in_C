//print consonant circularly
#include<stdio.h>
void main()
{
	char ch;
	int i,j;
	printf("Enter string:");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
	{
		for(i=ch;i<=122;i++)
		{
			if(!(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'))
				printf("%c",i);
		}
		for(j=97;j<ch;j++)
		{
			if(!(j=='a' || j=='e' || j=='i' || j=='o' || j6=='u'))
				printf("%c",j);
		}
	}

}
