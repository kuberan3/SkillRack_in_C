#include<stdio.h>
void main()
{
	int i,j,m,k;
	printf("Enter the m,k:");
	scanf("%d%d",&m,&k);
	int a[m][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=k;i<m;i++)
	{
		for(j=k;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
