#include<stdio.h>
#define MAX 50
void linears(int array[],int size,int ele);
main()
	{
		int array[MAX];
		int i,size,ele;
		printf("enter the size");
		scanf("%d",&size);
		if(size>50)
		{
		printf("redefine max");
		exit(0);//invalid size
		}
		printf("enter the data");
		for(i=0;i<size;i++)
		{
		scanf("%d",&array[i]);//array ip
		}
		printf("enter the element");
		scanf("%d",&ele);
		linears(array,size,ele);
	}
void linears(int array[],int size,int ele)
{
	int i;
	for(i=0;i<size;i++)
	{
	if(array[i]==ele)
	{
	printf("index of the element found is %d",i);
	break;
	}
	}
	if(i==size)	
	printf("element not found");
	}
