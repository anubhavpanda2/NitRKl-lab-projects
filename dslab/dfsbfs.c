#include<stdio.h>
#include<malloc.h>
struct node
{
       int info;
       struct node *next;
       };
       void create(struct node **t,struct node **q,int n)
       {
            struct node *p;
            p=(struct node*)malloc(sizeof(struct node));
            p->next=NULL;
            p->info=n;
            if(*t==NULL)
            {
                         *t=*q=p;
                         }
                         else
                         {
                             (*q)->next=p;
                             *q=p;
                             }
                             }
int pop(struct node **t)
{
       struct node *k;
       if(*t==NULL)
       {
                  return 10;
                  }
       k=*t;
       (*t)=(*t)->next;
       return k->info;
       }
main()
{
      //int a[200][200],int b[100];
      int a[200][200],b[200];
      int i,j,n,ch=0,k=0,c=0;
      b[0]=0;
      struct node *t=NULL,*q,*p;
      printf("enter the no of nodes");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      for(j=0;j<n;j++)
                      {
                                      printf("a[%d][%d]",i,j);
                                      scanf("%d",&a[i][j]);
                                      }
                                      }
      while(ch!=4)
      {l:
                  printf("enter ur choice");
                  scanf("%d",&ch);
                  
                  switch(ch)
                  {
                            case 1:
                                 //for(i=0;i<n;i++)
                                 //while(k<=n)
                                 for(i=0;i<n;i++)
                                 {
                                                 for(j=0;j<n;j++)
                                                 {
                                                      if(a[k][j]==1)
                                                      {
                                                                    create(&t,&q,j);
                                                                    }
                                                                    }
                                                                    
                                                                    k=pop(&t);
                                                                    if(k==10)
                                                                    {
                                                                    goto l;
                                                                    }
                                                                    //printf("%d",b[c]);
                                                                    c++;
                                                                    b[c]=k;
                                                                    }
                                                                    }                                                                 
                                                                    }
                                                                //    }
                                                                    for(i=0;i<=n;i++)
                                                                    {
                                                                                    printf("\n%d",b[i]);
                                                                                    }
                                                                    getch();
                                                                    }
                                
