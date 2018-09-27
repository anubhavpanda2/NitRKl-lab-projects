#include<stdio.h>
#define MAX 50
void rev(int array[],int size);
int main()
{
	int array[MAX],i,size;
	printf("enter size");
	scanf("%d",&size);
	if(size>50)
	{
	printf("redefine max");
	exit(0);//invalid size
	}
	
	printf("enter data");
	for(i=0;i<size;i++)
	{
	scanf("%d",&array[i]);
	}
	rev(array,size);
	getch();
	return 0;
}
void rev(int array[],int size)
{
	int i,t;
	for(i=0;i<size/2;i++)
	{
	t=array[i];
	array[i]=array[size-1-i];
	array[size-1-i]=t;
	}
	printf("the rev order is");
	for(i=0;i<size;i++)
	{
	printf("%d\n",array[i]);
	}
}
	
