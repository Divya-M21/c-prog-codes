#include<stdio.h>
main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
{
printf("a is largest among two numbers");
}
else if(b>c && b>a)
{
printf("b is largest among two numbers");
}
else if(c>b && c>a)
{
printf("c is largest among two numbers");
}
}
