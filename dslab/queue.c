#include<stdio.h>
void insert(int *front,int *rear,int p[10])
{
     if(((*front)==0&&(*rear)==9)||((*front)==(*rear)+1))
     {
     printf("data over flow");
     return;
     }
     if((*front)==-1)
     {
                  *front=0;
                  *rear=0;
                  }
                  else
                  {
                      (*rear)+=1;
                      }
  //                    printf("enter the item");
//                      scanf("%d",&p[(*rear)]);
                        //(*rear)=0;
                      if((*rear)==10)
                      (*rear)=0;
                      if((*front)==(*rear))
                      {
                      (*rear)=0;
                      //(*front)=0;
                      }
                      printf("enter the item");
                      scanf("%d",&p[(*rear)]);

                      }
                      void delete(int *front,int *rear,int p[10])
                      {
                           int k;
                           if(((*front)==-1&&(*rear)==-1))//||(((*front)==(*rear)!=0)))
                           {printf("data underflow");
                           return;
                           }
                           k=(*front);
                           if((*front)==9)
                           (*front)=0;
                           else
                           {
                           (*front)++;
                           }
                           printf("deleted element is %d",p[k]);
                           }
                           void disp(int *front,int *rear,int p[10])
                           {
                                int i;
                                for(i=(*front);i<=(*rear);i++)
                                printf("\n%d",p[i]);
                                }
                            
     
main()
{
      int n;
      int p[10];
      int front=-1,rear=-1;
      while(n!=4)
      {
                 printf("enter\n1for insert\n 2for delete\n 3 for display");
                 scanf("%d",&n);
                 switch(n)
                 {
                          case 1:
                               {
                                      insert(&front,&rear,p);
                                      break;
                                      }
                                      case 2:
                                          {
                                                           delete(&front,&rear,p);
                                                           break;
                                                           }
                                                           case 3:
                                                                {
                                                                 disp(&front,&rear,p);
                                                                 break;
                                                                 }
                                                                 }
                                                                 }
                                                                 getch();
                                                                 }                 
