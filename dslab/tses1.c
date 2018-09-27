#include<stdio.h>
#include<malloc.h>
struct stu
{
       int info;
       struct stu *next;
       };
void push();
void pop();
void show();
struct stu *p,*q=NULL,*t;
int i=0;
int main()
{
      int y=0;
      while(y!=4)
      {
              printf("enter y");
              scanf("%d",&y);
              switch(y)
              {
                       case 1:
                            push();
                            break;
                            case 2:
                                 pop();
                                 break;
                                 case 3:
                               //       show();
                                      break;
                                      }
}
    getch();
    return 0;                                  
                                      }
void push()
{
     p=(struct stu *)malloc(sizeof(struct stu));
     if(p==NULL)
     {
                printf("ovrflw");
                return;
                }
                scanf("%d",&p->info);
                p->next=NULL;
                if(q!=NULL)
                p->next=q;
               // t=q;
                q=p;
                }
                void pop()
                {
                     struct stu *k;
                     if(q==NULL)
                     {
                                printf("data underflow");
                                return;
                                }
                                printf("%d",q->info);
                               // k=q;
                               q=q->next;            
                               }
                                         
