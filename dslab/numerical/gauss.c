#include<stdio.h>
main()
{
      float a[3][4];
      float b,c,d;
      int i,j;
      printf("enter the matrix");
      for(i=0;i<3;i++)
      {
                      for(j=0;j<4;j++)
                      {
                                      printf("a[%d][%d]",i,j);
                                      scanf("%f",&a[i][j]);
                                      }
                                      }
                                      b=a[1][0]/a[0][0];
                                      for(i=0;i<4;i++)
                                      {
                                                      a[1][i]-=a[0][i]*b;
                                                      }
                                                      b=a[2][0]/a[0][0];
                                                      for(i=0;i<4;i++)
                                                      {
                                                                      a[2][i]-=a[0][i]*b;
                                                                      }
                                                                      b=a[2][1]/a[1][1];
                                                                      for(i=0;i<4;i++)
                                                                      {
                                                                                      a[2][i]-=a[1][i]*b;
                                                                                      }
                                                                       b=a[2][3]/a[2][2];
                                                                       printf("\nz:%f",b);
                                                                       c=(a[1][3]-a[1][2]*b)/a[1][1];
                                                                       printf("\ny:%f",c);
                                                                       d=(a[0][3]-a[0][2]*b-a[0][1]*c)/a[0][0];
                                                                       printf("\nx%f",d);
                                                                       getch();
                                                                       }               
                                                                                      
                                                      
      
