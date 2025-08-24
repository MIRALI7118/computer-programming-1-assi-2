#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the three numbers:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
    printf("A is the greatest number.\n");
}
else if(b>a && b>c)
{
    printf("B is the greatest number.\n");
}
else
{
    printf("C is the greatest number.\n");
}
if(a<b && a<c)
{
    printf("A is the smallest number.\n");
}
else if(b<a && b<c)
{
    printf("B is the smallest number.\n");
}
else
{
    printf("C is the smallest number.\n");
}
return 0;
}
