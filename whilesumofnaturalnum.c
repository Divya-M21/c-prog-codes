#include<stdio.h>
main()
{
int i,n,sum=0;
printf("enter the number\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum=sum+i;
printf("sum of first %d natural numbers=%d\n",n,sum);
i++;
}
}
