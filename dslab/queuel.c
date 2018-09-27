#include<stdio.h>
#include<malloc.h>
struct node
{
       int info;
       struct node *next;
       };
       struct node *p,*q,*t=NULL;
       int ctr=0;
       void create()
       {
            p=(struct node*)malloc(sizeof(struct node));
            if(p==NULL)
            {
                       printf("data overflow");
                       return;
                       }
                       printf("enter data");
                       scanf("%d",&p->info);
                       p->next=NULL;
                       if(t==NULL)
                       {
                                  t=q=p;
                                  }
                                  else
                                  {
                                      q->next=p;
                                      q=p;
                                      }
                                      }
                                      void delete()
                                      {
                                           if(t==NULL)
                                           {
                                           printf("data underflow");
                                           return;
                                                      }
                                                t=t->next;
                                                }
                                                void display()
                                                {
                                                     struct node *l;
                                                     l=t;
                                                     while(l!=NULL)
                                                     {
                                                                   printf("\n%d",l->info);
                                                                   l=l->next;
                                                                   }
                                                                   }
                                                                   main()
                                                                   {
                                                                         int n=0;
                                                                         while(n!=4)
                                                                         {
                                                                                    printf("enter value");
                                                                                    scanf("%d",&n);
                                                                                    switch(n)
                                                                                    {
                                                                                             case 1:
                                                                                                  {
                                                                                                  create();
                                                                                                  break;
                                                                                                  }
                                                                                                  case 2:
                                                                                                       {
                                                                                                           delete();
                                                                                                           break;
                                                                                                           }
                                                                                                           case 3:
                                                                                                                {
                                                                                                                    display();
                                                                                                                    break;
                                                                                                                    }
                                                                                                                    }
                                                                                                                    }
                                                                                                                    getch();
                                                                                                                    }
                                                                                                                                            
