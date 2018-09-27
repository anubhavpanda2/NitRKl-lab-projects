#include<stdio.h>
#include<malloc.h>
struct node
{
       int info;
       struct node *left,*right;
       };
       void in(struct node *t)
       {
            while(t!=NULL)
            {
                          in(t->left);
                          printf("%d",t->info);
                          in(t->right);
                          }
                          }
       
main()
{
      struct node *t=NULL;
      struct node *k,*p;
      int n;
      t=(struct node*)malloc(sizeof(struct node));
      t->left=NULL;
      t->right=NULL;
      printf("enter the root");
      scanf("%d",&t->info);
      int ch=0;
      k=t;
      while(ch!=4)
      {
                  printf("enter the choices");
                  scanf("%d",&ch);
                  y:
                  switch(ch)
                  {
                            
                                 {
                                              int n;
                                              k=t;
                                              
                                              printf("enter the no");
                                              scanf("%d",&n);
                                              
                                              while(k!=NULL)
                                              {
                                                            if(n<(k->info))
                                                            {
                                                                         if((k->left)!= NULL)
                                                                         k=k->left;
                                                                         else
                                                                {
                                                                         p=(struct node *)malloc(sizeof(struct node));
                                                                         p->info=n;
                                                                         p->left=p->right=NULL;
                                                                          k->left=p;
                                                                          goto y;
                                                                          }
                                                                          }
                                                                          else if(n>(k->info))
                                                                          {
                                                                               if((k->right)!=NULL)
                                                                               {
                                                                                                 k=k->right;
                                                                                                 goto y;
                                                                                                 }
                                                                                                 else
                                                                                                 {
                                                                                                        p=(struct node *)malloc(sizeof(struct node));
                                                                         p->info=n;
                                                                         p->left=p->right=NULL;
                                                                         k->right=p;
                                                                         }
                                                                         }
                                                                         else
                                                                         {
                                                                             printf("duplicate");
                                                                             }                                                                            
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
