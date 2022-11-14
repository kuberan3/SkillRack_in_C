//position digit sum
#include<stdio.h>
void main()
{
	int m,n,temp1,temp2;
	printf("Enter two numbers:");
	scanf("%d%d",&n,&m);
	temp1=n;temp2=m;
	while(temp1!=0 || temp2!=0)
	{
		printf("%d ",(temp1%10)+(temp2%10));
		temp1=temp1/10;
		temp2=temp2/10;
	}
}
