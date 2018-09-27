#include<stdio.h>
#include<malloc.h>
#define MAX 500

int numNodes,array[MAX][MAX];

struct node{
        char info;
        struct node *next;
} *headStack=NULL,*endStack=NULL,*headQ=NULL,*endQ=NULL,*travLLH=NULL,*travLLE=NULL;

push(char info,int flag){
        struct node *p=(struct node *)malloc(sizeof(struct node));
        p->info=info;
        if(flag==1){
                if(headStack==NULL)
                        endStack=headStack=p;
                else{
                        endStack->next=p;
                        endStack=p;
                }
                endStack->next=NULL;
        }
        else if(flag==0){
                if(headQ==NULL)
                        endQ=headQ=p;
                else{
                        endQ->next=p;
                        endQ=p;
                }
                endQ->next=NULL;
        }
        else if(flag==2){
                if(travLLH==NULL)
                        travLLE=travLLH=p;
                else{
                        travLLE->next=p;
                        travLLE=p;
                }
                travLLE->next=NULL;
        }
}

char pop(int flag){
        if(flag==0){
                char tempInfo=headQ->info;
                struct node *temp=headQ;
                headQ=headQ->next;
                free(temp);
                return tempInfo;
        }
        else{
                struct node *tempHead=headStack;
                struct node *save=tempHead,*tempHead2=tempHead;
                printf("Printing stack\n>>");
                while(tempHead!=NULL){
                        save=tempHead;
                        printf("%d\t",save->info);
                        tempHead=tempHead->next;
                        //tempHead2=tempHead->next;
                }
                char saveInfo=tempHead->info;
                printf("save's data=%d\n",save->info);
                //save->next=NULL;
                endStack=tempHead;
                endStack->next=NULL;
                free(tempHead);
                printf("%c is being deleted\n",saveInfo);
                return saveInfo;
        }
}

breadthFirstSearch(){
        int ctr=0;
        push('A',0);
        //printf("Entered here\n");
        int i=0,j;
        while(ctr!=numNodes){
                //printf("Attempting to pop\n");
                char travD,i;
                if(headQ!=NULL){
                        travD=pop(0);
                        //printf("Deleted element is %c\n",travD);
                        i=(int)(travD-65);
                }
                //printf("i=%d\n",i);
                for(j=0;j<numNodes;j++){
                        /*printf("Entered here 2 inserting for %c checking at
%c\n",(char)(i+65),(char)(j+65));
                        printf("i=%d\tj=%d\n",i,j);
                        printf("array[%d][%d]=%d",i,j,array[i][j]);*/
                        if(array[i][j]==1){
                                //printf("Entered here 1\n");
                                int flagI=0;
                                struct node *travK=travLLH;
                                while(travK!=NULL){
                                        if(travK->info==j+65)
                                                flagI=1;
                                        travK=travK->next;
                                }
                                if(flagI==0){
                                        push((char)(j+65),0);
                                        //printf("Pushed element is %c\n",(char)(j+65));
                                }
                        }
                }
                struct node *x=travLLH;
                int flagger=0;
                while(x!=NULL){
                        if(x->info==travD)
                                flagger=1;
                        x=x->next;
                }
                if(flagger==0)
                        push(travD,2);
                /*printf("Printing queue\n>>");
                struct node *temp=headQ;
                while(temp!=NULL){
                        printf("%d\t",temp->info);
                        temp=temp->next;
                }
                if(headQ==NULL)
                        printf("Queue empty\n");
                */
                ctr++;
                /*struct node *tempTrav=travLLH;
                printf("The path is as follows\n>>");
                while(tempTrav!=NULL){
                        printf("%d\t",tempTrav->info);
                        tempTrav=tempTrav->next;
                }
                printf("\n");*/
        }
        struct node *tempX=travLLH;
        printf("The path is as follows\n>>");
        while(tempX!=NULL){
                printf("%c\t",tempX->info);
                tempX=tempX->next;
        }
        printf("\n");
        travLLH=travLLE=NULL;
}

depthFirstSearch(){
        int ctr=0;
        push('A',1);
        int i=0,j;
        while(ctr!=numNodes){
                char travD,i;
                if(headStack!=NULL){
                        travD=pop(1);
                        i=(int)(travD-65);
                }
                for(j=0;j<numNodes;j++){
                        if(array[i][j]==1){
                                int flagI=0;
                                struct node *travK=travLLH;
                                while(travK!=NULL){
                                        if(travK->info==j+65)
                                                flagI=1;
                                        travK=travK->next;
                                }
                                if(flagI==0){
                                        push((char)(j+65),1);
                                        printf("Pushing here\n");
                                }
                        }
                }
                struct node *x=travLLH;
                int flagI=0;
                while(x!=NULL){
                        if(x->info==travD)
                                flagI=1;
                        x=x->next;
                }
                if(flagI==0)
                        push(travD,2);
                ctr++;
        }
        struct node *tempS=travLLH;
        printf("The path obtained is as follows\n>>");
        while(tempS!=NULL){
                printf("%d\t",tempS->info);
                tempS=tempS->next;
        }
        printf("\n");
}

main(){
        int i,j;//adjM[MAX][MAX];
        for(i=0;i<numNodes;i++){
                for(j=0;j<numNodes;j++)
                        array[i][j]=0;
        }
        printf("Enter number of nodes in the graph\n");
        scanf("%d",&numNodes);
        for(i=0;i<numNodes;i++){
                for(j=i+1;j<numNodes;j++){
                        printf("Does path exist between node %c and node %c? 1 for yes, 0 for
no\n",(char)(i+65),(char)(j+65));
                        scanf("%d",&array[i][j]);
                        array[j][i]=array[i][j];
                }
        }
        printf("Currently the matrix is\n");
        for(i=0;i<numNodes;i++){
                for(j=0;j<numNodes;j++){
                        printf("%d\t",array[i][j]);
                }
                printf("\n");
        }
        breadthFirstSearch();
        depthFirstSearch();
}
