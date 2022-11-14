#include<stdio.h>
void main()
{
	int i,n,temp,a[10];
	scanf("%d",&n);
	temp=n;
	while(temp)
	{
		a[i]=temp%10;
		temp=temp/10;
		i++;
	}
	printf("%d%d",a[i-1],a[0]);
}
