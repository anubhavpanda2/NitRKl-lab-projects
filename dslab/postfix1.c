#include<stdio.h>
#include<string.h>
void push(int sz,int item,int *t,int p[sz-1])
{
     int top;
     top=*t;
     top=top+1;
     p[top]=item;
     *t=top;
     }
     int pop(int sz,int *t,int p[sz-1])
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
    scanf("%s",ip);
    for(i=0;i<strlen(ip);i++)
    {
                             if(47<(int)ip[i]&&(int)ip[i]<59)
                             {
                                    push(sz,(int)ip[i]-48,&top,p);
                                    }
                                    else
                                    {
                                        switch(ip[i])
                                        {
                                                     case '+':
                                                          {
                                                              j=pop(sz,&top,p);
                                                              k=pop(sz,&top,p);
                                                              push(sz,k+j,&top,p);
                                                              break;
                                                              }
                                                              case '-':
                                                                   {
                                                                              j=pop(sz,&top,p);
                                                                              k=pop(sz,&top,p);
                                                                              push(sz,k-j,&top,p);
                                                                              break;
                                                                              }
                                                                              case '*':
                                                                                   {
                                                                                            j=pop(sz,&top,p);
                                                                              k=pop(sz,&top,p);
                                                                              push(sz,k*j,&top,p);
                                                                              break;
                                                                              }
                                                                              case '/':
                                                                                   {
                                                                                       j=pop(sz,&top,p);
                                                                              k=pop(sz,&top,p);
                                                                              push(sz,k/j,&top,p);
                                                                              break;
                                                                              }     
                                                                              case'%':
                                                                                      {
                                                                                              j=pop(sz,&top,p);
                                                                              k=pop(sz,&top,p);
                                                                              push(sz,k%j,&top,p);
                                                                              break;
                                                                              }
                                                                              }
                                                                              }
                                                                              }
                                                                              printf("%d",pop(sz,&top,p));
                                                                              getch();
                                                                              return 0;
                                                                              }
