/*
Linear Search
*/
#include<stdio.h>
#define MAX 100

void linear_search(int array[],int sz,int ele){
	int j;
	for(j=0;j<sz;j++){
		if(array[j]==ele){
			printf("Element %d found at index %d\n",ele,j);
			return;  //return if element found
		}
	}
	printf("Element %d not found\n",ele);
}

void main(){
	int iarray[MAX];
	int size=0,i,ele_srch;
	printf("Enter the size of the array(less than 100 and integral,of course)\n");
	scanf("%d",&size); //accept array size from the user
	if(size>100||size<=0){
		printf("Invalid input,array size must be less than 100\n");
		return; //user gave invalid size of array,return
	}
	printf("Enter the elements of the array line by line,all integral\n");
	for(i=0;i<size;i++)
	scanf("%d",&iarray[i]);
	printf("Enter element to search\n");
	scanf("%d",&ele_srch);
	linear_search(iarray,size,ele_srch);
}

