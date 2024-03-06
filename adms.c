#include<stdio.h>
main()
{
float n1,n2,add,sub,mul,div;
int ch;

printf("enter n1, n2 and ch\n");
scanf("%f%f%d",&n1,&n2,&ch);

if(ch==1)
{
add=n1+n2;
printf("addition=%f\n",add);
}
else if(ch==2)
{
sub=n1-n2;
printf("substraction=%f\n",sub);
}
else if(ch==3)
{
mul=n1*n2;
printf("multiplication=%f\n",mul);
}
else if(ch==4)
{
div=n1/n2;
printf("division=%f\n",div);
}
else
printf("invalid choice");

}

