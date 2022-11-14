#include<stdio.h>
void removeIndices(int [],int,int [],int);
void main()
{
	int l,k,i;
	printf("Enter l,k:");
	scanf("%d%d",&l,&k);
	int arr[l],indices[k];
	for(i=0;i<l;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<k;i++)
		scanf("%d",&indices[i]);
	removeIndices(arr,l,indices,k);
}
void removeIndices(int arr[],int m,int indices[],int n)
{
	int i,j;
	for(j=0;i<n;j++)
	{
		for(i=0;i<m;i++)
		{
			if(indices[j]==i)
				continue;
		 	else
				printf("%d ",arr[i]);
		}
	}
}
