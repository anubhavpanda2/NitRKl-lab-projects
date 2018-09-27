#include<stdio.h>
#include<string.h>
void push(int item,int *t,int p[sz-1])
{
     int top;
     top=*t;
     top=top+1;
     p[top]=item;
     *t=top;
     }
     int pop(int *t,int p[sz-1])
     {
         int top;
         top=*t;
         (*t)--;
         return p[top];
         }
         
int main()
{
    int sz,top=-1;
    printf("enter size");
    scanf("%d",&sz);
    char ip[sz];
    int p[sz],i,j,k;
    printf("enter data");
    gets(ip);
    for(i=0;i<strlen(ip);i++)
    {
                             if(47<(int)ip[i]<59)
                             {
                                    push((int)ip[i]-48,&top,p)
                                    }
                                    else
                                    {
                                        switch(ch[i])
                                        {
                                                     case '+':
                                                          {
                                                              j=pop(&top,p);
                                                              k=pop(&top,p);
                                                              push(k+j,top,p);
                                                              break;
                                                              }
                                                              case '-':
                                                                   {
                                                                              j=pop(&top,p);
                                                                              k=pop(&top,p);
                                                                              push(k-j,top,p);
                                                                              break;
                                                                              }
                                                                              case '*':
                                                                                   {
                                                                                            j=pop(&top,p);
                                                                              k=pop(&top,p);
                                                                              push(k*j,top,p);
                                                                              break;
                                                                              }
                                                                              case '/':
                                                                                   {
                                                                                       j=pop(&top,p);
                                                                              k=pop(&top,p);
                                                                              push(k/j,top,p);
                                                                              break;
                                                                              }     
                                                                              case'%":
                                                                                      {
                                                                                              j=pop(&top,p);
                                                                              k=pop(&top,p);
                                                                              push(k%j,top,p);
                                                                              break;
                                                                              }
                                                                              }
                                                                              }
                                                                              }
                                                                              printf("%d",pop(*t,p));
                                                                              }
