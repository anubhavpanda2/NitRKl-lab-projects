/*Reversal*/
#include<stdio.h>
#define MAX 50
void rev_array(int array[],int sz){
	int i,size=sz,temp;
	for(i=0;i<size/2;i++){
		temp=array[size-i-1];
		array[size-i-1]=array[i];
		array[i]=temp;
	}
	printf("Reversed array is as follows\n");
	for(i=0;i<size;i++)
		printf("%d ",array[i]);
	printf("\n");
}
void main(){
	int array[MAX];
	int size,i,j;
	printf("Enter the size of the array(less than 50 and integral,of course)\n");
	scanf("%d",&size);
	if(size>50||size<=0){
		printf("Invalid input,array size must be less than 50\n");
		return; //user gave invalid size of array,return
	}
	printf("Enter the elements of the array line by line,all integral\n");
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);
	rev_array(array,size);
}

