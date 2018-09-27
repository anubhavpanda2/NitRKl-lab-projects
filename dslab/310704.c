/*Matrix manipulation*/
#include<stdio.h>
#define MAX 51
main(){
	int array[MAX-1][MAX-1],array_out[MAX][MAX];
	int i,j,size;
	printf("Enter the size of the array(less than 50)\n");
	scanf("%d",&size);
	printf("Enter the elements line by line\n");
	for(i=0;i<size+1;i++){
		for(j=0;j<size+1;j++){
			array_out[i][j]=0;
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array[i][j]);
			array_out[i][j]=array[i][j];
		}
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			array_out[i][size]+=array[i][j];
			array_out[size][j]+=array[i][j];
			if(i==j)
				array_out[size][size]+=array[i][j];
		}
	}
	for(i=0;i<size+1;i++){
		for(j=0;j<size+1;j++){
			printf("%d ",array_out[i][j]);
		}
		printf("\n");
	}
}
