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
		exit(0);//invalid size
		}
		
	printf("enter the data");
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter the element");
	scanf("%d",&ele);
	binarys(array[],size,ele);
}
void binarys(int array[],int size,int ele)
{
	int i,j,t;
	int ub=size,lb=0;
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
	if(a[i]>a[j])
	{
	t=array[i];
	array[i]=array[j];
	array[j]=t;
	}
	}
	}
	while(size!=0)
	{
	if(array[(ub+lb)/2]==ele)
	{
	printf("element is found");
	exit 0;
	}
	if(ele<array[(ub+lb)/2])
	{
	ub=size/2;
	}
	if(ele>array[(ub+lb)/2])
	{
	lb=size/2;
	}
	
	size=size/2;
	}
	if(ele>array[size/2])
	{
	 lb=size/2;
	}
	}
	if(size==0)
	printf("element not found");
}

