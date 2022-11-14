#include<stdio.h>
void main()
{
	int i,*ptr=NULL,n,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Sorry!,Unable to allocate memory");
		exit(0);
	}
	printf("%d",*ptr);
	printf("Enter element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("sum is %d",sum);
	free(ptr);
}
