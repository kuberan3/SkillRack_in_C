//reverse last x digits
#include<stdio.h>
void main()
{
	int count=0,n,i,a[20],x,temp,rem;
	printf("Enter n,x:");
	scanf("%d%d",&n,&x);
	for(temp=n;temp;temp=temp/10)
	{
		count++;
		rem=temp%10;
		for(i=count-1;i<count;i++)
		{
			a[i]=rem;
			printf("%d ",a[i]);
		}
	
	}
	printf("\n");
		for(i=count-1;i>=0;i--)
		{
			for(i=0;i<count-x;i++)
			{
				printf("%d ",a[i]);
			}
			for(i=count-1;i>=count-x;i--)
			{
				printf("%d ",a[i]);
			}
		}
}
