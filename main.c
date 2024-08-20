#include <stdio.h>

int main()
{
int i,n,j;
float a[20][10],s=0,t=1,x;
printf("enter number of numbers: \n");
scanf("%d",&n);
printf("enter value of x and f(x): \n");
for (i=0;i<n;i++)
{
scanf("%f%f",&a[0][i],&a[1][i]);
}
printf("enter intermediate x value: \n");
scanf("%f", &x);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i!=j)
t=t*((x-a[0][i]/a[0][i]-a[0][j]));
}
s=s+a[1][i]*t;
t=1;
}
printf("f(%f)=%f\n",x,s);
getch();
}
