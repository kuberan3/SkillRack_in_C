//unit digit multiples
#include<stdio.h>
void main()
{
	int n,i,val;
	scanf("%d",&n);
	val=n%10;
	if(val==0)
	{
		val=10;
	}
	for(i=1;i*val<=n;i++)
	{
		printf("%d ",i*val);
	}
}
