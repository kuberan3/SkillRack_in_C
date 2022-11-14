#include<stdio.h>
void main()
{
	int i,n,j,temp,a[10],flag=0;
	scanf("%d",&n);
	temp=n;
	while(temp)
	{
		a[i]=temp%10;
		temp=temp/10;
		i++;
	}
	for(j=1;j<i;j++)
	{
		if(a[j]%2==0)
			{
				printf("%d",a[j]);
				flag=1;
			}
	}
	if(flag==0)
		printf("-1");
}
