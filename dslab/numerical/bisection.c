#include<stdio.h>
main()
{
int i=0;
float  x,y,g,z,e=0.1;
printf("\n Enter the first value");
scanf("%f",&x);

z=(x*x-5);
while(e>0.0001)
{
  g=1/((z*z)+1);
  printf("\n%d iteration %f",(i+1),g);
  if(g>z)
                e=g-z;
  else
                e=z-g;
    z=g;
   i++;
  }
  printf("\n Solution of equation is %f",g);
  getch();
}
