//product of digits using malloc
#include<stdio.h>
void main()
{
	int n,i,temp,*a,mul;
	printf("Enter n: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<n;i++)
	{
		temp=*(a+i);
		mul=1;
		while(temp)
		{
			mul=mul*(temp%10);
			temp=temp/10;
		}
		printf("%d ",mul);
	}
}
