#include<stdio.h>
#include<conio.h>
#define M 500
void euler(int);
int vert,svertex,array[M][M];
main()
{
      int i,j,c=0,d=0,e=0;
      printf("Enter size");
      scanf("%d",&vert);
      if(vert<1)
      {
                printf("invalid entry");
                exit(0);
                }
      int array1[M][M],array2[M];
      printf("If path is present between two vertices enter 1 else enter 0\n");
      for(i=0;i<vert;i++)
      {
          for(j=0;j<vert;j++)
          {
                             printf("array[%d][%d]",i,j);
            scanf("%d",&array[i][j]);
            array[i][j]=array1[i][j];
            if(array[i][j]==1)
            c++;
          }
          array2[i]=c;
          c=0;
      }
      for(i=0;i<vert;i++)
      {
          if(array2[i]==0)
          {
               printf("the graph has no euler path and circuit as the graph is not connected\n");
               break;
          }
          else if(array2[i]%2==0)
            d++;
          else if(array2[i]%2!=0)
          {
            e++;
            svertex=i;
          }
      }      
       if(d==vert)
       {
               printf("euler circuit is present\n");
               printf("the euler circuit is  ");
               euler(0);
       }
        else if(e==2)
       {
               printf("euler path is present\n");
               printf("euler path is  ");
               euler(svertex);
       }
       else
       printf("Both euler path and circuit are absent\n");
       
       getch();
}    
void euler(int x) 
{
     int i,j,stack[M],circuit[M],c=0,d=0,count=0;
     while(c!=-1)
     {
                 count=0;
         for(i=0;i<vert;i++)
         {
           if(array[x][i]==1)
           {
             array[i][x]=0;
             array[x][i]=0;
             stack[c]=x;
             c++;
             x=i;
             break;
           }
           else
           count++;
         }
           if(count==vert)
           {
             circuit[d]=x;
             d++;
             x=stack[c-1];
             c--;
         
           }
        
             
     }
     for(i=d-1;i>=0;i--)
     {
          printf("%d ",circuit[i]+1);
     }
     
}
      
