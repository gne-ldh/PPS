//PROGRAM TO CALCULATE AVERAGE OF 5 NUMBERS USING FUNCTIONS
#include<stdio.h>
float calc_avg(int[]);
void main()
{
int i;
int numbers[5];
float average;
printf("\nPlease enter the 5 numbers you wish to calculate the average\n");
for (i = 0; i < 5; i++)
{
printf("Enter number %d :: \n",i+1);
scanf("%d", &numbers[i]);
}
average=calc_avg(numbers);
printf("The average of the numbers that you've entered is %.2f\n", average); 
}

float calc_avg(int numbers[5]) 
{
int i, sum = 0;
float avg;
for (i = 0; i < 5; i++)
{
sum = sum+ numbers[i];
}
avg= (float)sum / 5;
return avg;
}
