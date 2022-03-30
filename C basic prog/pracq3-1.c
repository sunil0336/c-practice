#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j;
	int *num;
	printf("Enter size of array ");
	scanf("%d",&n);
	
	num=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",(num+i));
	}
	
	printf("\narray elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(num+i));
	}
	
	for(i=0;i<n;i++)
	{
		for(j=n-1-i;j>=0;j--)
		{
			if(j>i)
			{
				int temp=num[i];
				num[i]=num[j];
				num[j]=temp;
				break;
			}
		}
	}
	
	printf("\n\nReverse elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(num+i));
	}
}