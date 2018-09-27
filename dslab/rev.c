#include<stdio.h>
struct node
{
       int info;
       struct node *next;
       };
       main()
       {
             struct node *t=NULL,*q,*p;
             int i=0,ctr=0;
             while(i!=3)
             {
                        printf("\n enter 1 for insert \n 2 for display");
                        scanf("%d",&i);
                        switch(i)
                        {
                                 case 1:
                                      {
                                           p=(struct node *)malloc(sizeof(struct node));
                                           p->next=NULL;
                                           ctr++;
                                           printf("enter data");
                                           scanf("%d",&p->info);
                                           if(t==NULL)
                                           {
                                                      t=q=p;
                                                      }
                                                      else
                                                      {
                                                      q->next=p;
                                                      q=p;
                                                  }
                                                      break;
                                                      }
                                                      case 2:
                                                           {
                                                                struct node *k;
                                                                k=t;
                                                                while(k!=NULL)
                                                                {
                                                                              printf("\n%d",k->info);
                                                                              k=k->next;
                                                                              
                                                                              }
                                                                              break;
                                                                              }
                                                                              case3:
                                                                                    {
                                                                                        while(ctr>0)
                                                                                        {
                                                                                                  int  j=1;
                                                                                                    struct node *k=t;
                                                                                                    while(j<ctr)
                                                                                                    {
                                                                                                                k=k->next;
                                                                                                                j++;
                                                                                                                }
                                                                                                                printf("\n%d",k->info);
                                                                                                                ctr--;
                                                                                                                }
                                                                                                                break;
                                                                                                                }
                                                                                                                }
                                                                                                                }
                                                                                                                getch();
                                                                                                                }
