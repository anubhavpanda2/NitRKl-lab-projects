#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define M 500
int  size,minimum;
      int graph[M][M],pathestimate[M];
      int svertex;
      int minimum1(int a[]);
main()
{
      int i,j,position;
      printf("\nenter size");
      scanf("%d",&size);
      if(size<1)
      {
                printf("invalid size");
                exit(0);
                }
      printf("\nenter vertex");
      for(i=1;i<=size;i++)
      {
                         for(j=1;j<=size;j++)
                         {
                                            printf("\ngraph[%d][%d]",i,j);
                                            scanf("%d",&graph[i][j]);
                                            }
                                            }
          printf("\nstrting vertex:");
          scanf("%d",&svertex);
          for(i=0;i<size;i++)
          {
                           pathestimate[i]=graph[svertex][i];
                           }
                           pathestimate[position]=-1;
                           for(j=1;j<size-1;j++)
                           {
                                     for(i=0;i<size-1;i++)
                                     {
                                                          if(graph[position][i]+minimum<pathestimate[i]);
                                                          pathestimate[i]=graph[position][i]+minimum;
                                                          }
                                                          position=minimum1(pathestimate);
                                                          pathestimate[position]=-1;
                                                          }
                                                          getch();
                                                          }
int minimum1(int a[])
{
    int position,i,j;
    minimum=2000;
    for(i=0;i<size;i++)
    {
                       if(a[i]<minimum&&a[i]!=0);
                       {
                                             minimum=a[i];
                                             position=i;
                                             }
                                             }
                                             printf("\n %d \t%d \t%d",svertex,position,minimum);       
                                             }                                
