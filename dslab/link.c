#include<stdio.h>
#include<conio.h>
#include<malloc.h>
 struct node
{
       int info;
       struct node *next;
       };
struct node *t=NULL,*p,*q;
       int ctr=0;
       void create()
       {
            p=(struct node*)malloc(sizeof(struct node));
            //p->info=NULL;
            p->next=NULL;
            t=q=p;
            
            }
            void insert()
            {
                 struct node *k;
                 int po,i;
                 p=(struct node *)malloc(sizeof(struct node));
                 p->next=NULL;
                 printf("enter data");
                 scanf("%d",&p->info);
                 printf("enter position");
                 scanf("%d",&po);
                 k=t;
          //       switch(po)
            //     {
                           if(po==1)
                                {
                                          p->next=t;
                                          t=p;
                                          ctr++;
                                          return;
                                    //      break;
                                          }
                                          if(po==ctr)
                                               {
                                                   q->next=p;
                                    //                   break;
                                                                        q=p;
                                                                        ctr++;
                                                                        return;
                                                       } 
                                    
                                                       
                                                                   for(i=1;i<=po-1;i++)
                                                                   {
                                                                                        k=k->next;
                                                                                        }
                                                                                        p->next=k->next;
                                                                                        k->next=p;
//                                                                                        break;
                                                                                              
                                                                                        
                                                                                        ctr++;
                                                                                        }
                  void del()
                  {
                       struct node *k,*z;
                  int po,i;
                  k=t;
                  printf("enter position");
                  scanf("%d",&po);
                  if(po==1)
                  {
                           t=t->next;
                           ctr--;
                           return;
                           }
                           if(po==ctr)
                           {
                                      for(i=1;i<po-1;i++)
                                      {
                                            k=k->next;
                                            }
                                            k->next=NULL;
                                            q=k;
                                            ctr--;
                                            return;
                                            }
                           for(i=1;i<po-1;i++)
                           {
                                             k=k->next;
                                             }
                                 z=k->next;
                                 k->next=z->next;
                                 free(z);
                                 ctr--;
                                 return;
                                 }   
                                 void search()
                                 {
                                      int k;
                                      struct node *l;
                                      l=t;
                                      printf("enter the no to be searched");
                                      scanf("%d",&k);
                                      while(l!=NULL)
                                      {
                                            if(k==t->info)
                                            {
                                                          printf("found");
                                                          return;
                                                          }
                                                          l=l->next;
                                                          }         
                                                          }
                                                          void disp()
                                                          {
                                                               while(t!=NULL)
                                                               {
                                                                             printf("\n%d",t->info);
                                                                             t=t->next;
                                                                             
                                                                             }
                                                                             }
                                                                             main()
                                                                             {
                                                                                   int ch=0;
                                                                                   while(ch!=6)
                                                                                   {
                                                                                               printf("enter \n 1.empty \n2.insert\n3.search\n2.delete\n5.display");
                                                                                               scanf("%d",&ch);
                                                                                               switch(ch)
                                                                                               {
                                                                                               case 1:
                                                                                                    {
                                                                                                         create();
                                                                                                          break;
                                                                                                          }
                                                                                                          case 2:
                                                                                                               {
                                                                                                                   insert();
                                                                                                                   break;
                                                                                                                   }
                                                                                                                   case 3:
                                                                                                                        {
                                                                                                                            del();
                                                                                                                            break;
                                                                                                                            }
                                                                                                                            case 4:
                                                                                                                                 {
                                                                                                                                                                 search();
                                                                                                                                                                 break;
                                                                                                                                                                 }    
                                                                                   
                                                                                                                          case 5:
                                                                                                                               {
                                                                                                                                                                 disp();
                                                                                                                                                                 break;
                                                                                                                               
                                                                                                                                                                 }
                                                                                                                                                                 default:
                                                                                                                                                                         {
                                                                                                                                                                                break;
                                                                                                                                                                                }
                                                                                                                                                                 }
                                                                                                                                                                 }
                                                                                                                                                                 getch();
                                                                                                                                                                 }                                                                                          
