#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
       char ch;
       struct node *next,*prev;
       };
struct node *t=NULL;
struct node *p,*q;
int ctr=0;
void create()
{
             //struct node *p,*q;
             p=(struct node*)malloc(sizeof(struct node));
             p->prev=NULL;
             p->next=NULL;
             printf("enter data1");
             scanf(" %c",&p->ch);
             if(t==NULL)
             {
                        t=q=p;
                        }
                        else
                        {
                            q->next=p;
                            p->prev=q;
                            q=p;
                            }
                            ctr++;
                            }
                                   
       void palindrome()
       {
            int i;
            for(i=1;i<=ctr/2;i++)
            {
                                if(q->ch!=t->ch)
                                {
                                                printf("not palindrome");
                                                    return;
                                                    }
                                                    q=q->prev;
                                                    t=t->next;
                                                    }
                                                    printf("palindrome");
                                                    }
                                                    main()
                                                    {
                                                          char i='y';
                                                          while(i!='n')
                                                          {
                                                                  printf("enter data");
                                                                  scanf(" %c",&i);
                                                                  create();
                                                                  }
                                                                  palindrome();
                                                                  getch();
                                                                  }     
