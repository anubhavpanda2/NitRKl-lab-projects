#include<stdio.h>
main()
{
float x,y,z,w;
int i=0,n;
printf("enter the values");
scanf("%f%f%f%f",&x,&y,&w,&z);
printf("enter the no of iterations");
scanf("%d",&n);
while(i<n)
{
x=.25*y+.25*w+50;
y=.25*x+.25*z+50;
w=.25*x+.25*z+25;
z=.25*y+.25*z+25;
i++;
}
printf("%f\n%f\n%f\n%f",x,y,w,z);
getch();
}
