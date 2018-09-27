#include<stdio.h>
#include<malloc.h>
struct stu
{
       int info;
       struct stu *next;
       };
void push();
void pop();
void result();
struct stu *p,*q,*t=NULL;
int main()
{
      int i,n;
      while(1)
      {
             printf("enter 1 to push,2 to pop,3 to view result");
             scanf("%d",&n);
             switch(n)
             {
                      case 1:
                           push();
                           break;
                           case 2:
                               pop();
                                break;
                                case 3:
                                   result();
                                   break;
                                   case 4:
                                        exit(0);  
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
        printf("data overflow");
        }
        printf("enter data");
        scanf("%d",&p->info);
        p->next=NULL;
                if(t==NULL)
                t=q=p;
                else
                {
                p->next=q;
                q=p;
                }
                }       
void result()
{
     struct stu *P;
     p=t;
     do
     {
                   printf("%d",p->info);
                   p=p->next;
                   }while(p->next!=NULL);
                   }
/*void pop()
{
     int k;
     struct stu *p;
     p=t;
     printf("enter the element to be element");
     scanf("%d",&k);
     while(k!=((p->next)->info)&&(p->next!=NULL))
     {
                      p=p->next;
                      }
                      if(p->next==NULL)
                      {
                                       return;
                                       }
                                       p->next=(p->next)->next;
                                       }
*/
void pop()
{

     if(q==NULL)
     {
                  printf("data underflow");
                  return;
                  }
        q=q->next; 
        }        
