#include<stdio.h>
#define MAX 50
void binarys(int array[],int size,int ele);
main()
{
	int array[MAX],size,i,ele;
	printf("enter the size");
	scanf("%d",&size);
 	if(size>50)
		{
		printf("redefine max");
		//exit(0);//invalid size
		return;
		}
		
	printf("enter the data");
	for(i=0;i<size;i++)
	{
	scanf("%d",&array[i]);
	}
	printf("enter the element");
	scanf("%d",&ele);
	binarys(array,size,ele);
}
void binarys(int array[],int size,int ele)
{
	int i,j,t;
	int ub=size-1,lb=0;
	int mid=(ub+lb)/2;
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
	if(array[j]>array[i])
	{
	t=array[i];
	array[i]=array[j];
	array[j]=t;
	}
	}
	}
	for(i=0;i<size;i++)
	{
	printf("%d  ",array[i]);
	}
	while(lb<=ub)
	{
	if(array[mid]==ele)
	{
	printf("element is found");
	//exit(0);
	return;
	}
	if(ele<array[mid])
	{
	ub=mid-1;
	mid=(ub+lb)/2;
	}
	if(ele>array[mid])
	{
	lb=mid+1;
	mid=(ub+lb)/2;
	}
	//size=(ub+lb)/2;
	/*size=size/2;
	}
	if(ele>array[size/2])
	{
	 lb=size/2;
	}*/
	}
	printf("element not found");
}

