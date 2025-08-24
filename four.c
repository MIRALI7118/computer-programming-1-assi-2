#include<stdio.h>
int main()
{
int number;
printf("Enter the number:");
scanf("%d",&number);
if(number%7==0)
{
printf("The number is divisible by seven.");
}
else
{
printf("The number is not divisible by seven.");
}
return 0;
}
