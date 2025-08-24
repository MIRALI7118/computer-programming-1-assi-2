#include<stdio.h>
int main()
{
float net_salary,gross_salary,allowance,deduction;
printf("Enter the gross salary:");
scanf("%f",&gross_salary);
if(gross_salary>10000)
{
allowance=0.1*gross_salary;
deduction=0.03*gross_salary;
printf("The allowance = %.2f\n",allowance);
printf("The deduction = %.2f\n",deduction);
}
else if(gross_salary>5000)
{
allowance=0.07*gross_salary;
deduction=0.02*gross_salary;
printf("The allowance = %.2f\n",allowance);
printf("The deduction = %.2f\n",deduction);
}
net_salary= gross_salary+allowance-deduction;
printf("The net salary= %.2f", net_salary);
return 0;
}
