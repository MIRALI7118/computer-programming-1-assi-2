#include<stdio.h>
int main()
{
int subject_1,subject_2,subject_3,average;
printf("Enter the marks in subject_1:\n");
scanf("%d",&subject_1);
printf("Enter the marks of subject_2\n");
scanf("%d",&subject_2);
printf("Enter the marks of subject_3\n");
scanf("%d",&subject_3);
if(subject_1||subject_2||subject_3<35)
{
printf("The student is failed.\n");
}
else
{
average=(subject_1+subject_2+subject_3)/3;
printf("The average of the three subjects = %d\n", average);
if(average>= 70)
{
printf("distinction\n");
}
else if(average>=60)
{
printf("first\n");
}
else if(average>=50)
{
printf("second\n");
}
else if(average>=35)
{
printf("third class\n");
}
else
{
printf("fail\n");
}}
return 0;
}
