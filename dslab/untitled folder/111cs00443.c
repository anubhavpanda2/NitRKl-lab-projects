#include<stdio.h>
#define MAX 50
main()
{
	int array[MAX][MAX],array1[MAX][MAX],i,j,size;
	printf("enter size");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{ 
	for(j=0;j<size;j++)
	{
	scanf("%d",&array[i][j]);
	array1[i][j]=array[i][j];
	}
	}
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
	array1[i][size]+=array[i][j];
	array1[size][j]+=array[i][j];
	if(i==j)
	array1[size][size]+=array[i][j];
	}
	}
	for(i=0;i<=size;i++)
	{
	for(j=0;j<=size;j++)
	{
	printf("%d\t",array1[i][j]);
	}
	printf("\n");
	}
}

