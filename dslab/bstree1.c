#include<stdio.h>
#include<malloc.h>
struct node
{
       int info;
       struct node *right,*left;
};
void in(struct node *t)
{
     while(t!=NULL)
     {
                         in(t->left);
                         }
                         printf("%d",t->info);
     
                                              in(t->right);
                                              }
                                              
main()
{
      struct node *t=NULL,*p=NULL,*q=NULL;
      struct node a[100];
      int i,n;
      int ch=0;
      p=(struct node *)malloc(sizeof(struct node));
      printf("enter data to root node");
      scanf("%d",&p->info);
      p->right=NULL;
      p->left=NULL;      
      t=q=p;
      while(ch!=4)
      {
                  printf("enter value of ch");
                  scanf("%d",&ch);
                  switch(ch)
                  {
                            case 1:
                                 {
                                 struct node *k,*t1;
                                 k=t;
                  p=(struct node *)malloc(sizeof(struct node));
                  p->right=NULL;
                  p->left=NULL; 
                  k->right=NULL;
                  k->left=NULL;
                  printf("enter the value of data");
                  scanf("%d",&p->info);
                                 while(k!=NULL)
                                 {
                                               t1=k;
                                               if((p->info) > (k->info))
                                               {
                                                          k=k->right;
                                                          }
                                                          if((p->info)<(k->info))
                                                          {
                                                              k=k->left;
                                                              }
                                                              
                                                              }
                            if((t1->info)<(p->info)) 
                            {
                                                t1->right=p;
                                                }
                                                else
                                                {
                                                    t1->left=p;
                                                    }
                                                    break;
                                                    } 
                                                    case 2:
                                                         {
                                                               in(t);
                                                               break;
                                                               }
                                                    }
                                                    }
                                                    getch();
                                                    }                                          
