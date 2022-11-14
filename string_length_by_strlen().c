//string length using strlen
#include<stdio.h>
void main()
{
	char a[20];
	printf("Enter string:");
	gets(a);
	printf("the length of the string %s is %d",a,strlen(a));
}
