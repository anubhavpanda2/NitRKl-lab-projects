#include<stdio.h>
#define MAX 100
void binary_search(int arr[],int sz,int el){
     int lb=0,ub=sz-1;
     int mid_index=(ub+lb)/2;
     while(lb<=ub){
                   if(arr[mid_index]==el){
                        printf("The element %d has been found at index %d",el,mid_index);
                        break;
                   }
                   else if(arr[mid_index]<el){
                        lb=mid_index + 1;
                        mid_index=(ub+lb)/2;
                   }
                   else if(arr[mid_index]>el){
                        ub=mid_index-1;
                        mid_index=(ub+lb)/2;
                   }
     }
     if(lb>ub)
              printf("Element not found\n");
}
main(){
       int ud_ar[MAX];
       int size,i,j,temp,ele;
       printf("Enter the number of elements in the array,MAX 100\n");
       scanf("%d",&size);
       if(size>100||size<1){
                           printf("Invalid array size was input.Qutting..!!\n");
                           return 0;
       }
       printf("Enter the elements of the array\n");
       for(i=0;i<size;i++)
               scanf("%d",&ud_ar[i]);
       for(i=0;i<size;i++){
               for(j=0;j<size;j++){
                       if(ud_ar[j]>ud_ar[i]){
                                     temp=ud_ar[i];
                                     ud_ar[i]=ud_ar[j];
                                     ud_ar[j]=temp;
                       }
               }
       }
       printf("Enter the element to search\n");
       scanf("%d",&ele);
       binary_search(ud_ar,size,ele);
}
