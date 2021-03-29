#include <stdio.h>
void main()
{
int marks;
printf("Enter the marks of the student out of 100::");
scanf("%d",&marks);
if(marks>=90)
printf("\nO  Grade\n");
else if(marks>=75 && marks<90)
printf("\nA Grade\n");
else if(marks>60 && marks <75)
printf("\nB Grade\n");
else if(marks>=50 && marks <60)
printf("\nC Grade\n");
else if (marks>=40 && marks <50)
printf("\nD Grade\n");
else
printf("\nE Grade\n");
}
