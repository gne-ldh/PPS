![LOGO](https://gndec.ac.in/logo.png)
# PROGRAMMING FOR PROBLEM SOLVING ESC -18105
|     |     |
|-----|-----|
|**Submitted To** | Dr. Kamaljit Kaur Dhillon |
|**Submitted By** | Priyanshu Tiwari |
|**CRN** | 1921127 |
|**Branch**| Information Technology|
|**Year** | *1st*|


---
### 1 Program to find sum of two numbers
```C
#include<stdio.h>
 
int main()
{
   int a, b, c;
   
   printf("Enter two numbers to add\n");
   scanf("%d%d", &a, &b);
   
   c = a + b;
   
   printf("Sum of the numbers = %d\n", c);
   
   return 0;
}
```
---
### 2 Program to print table using FOR loop
```C
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=1; i<=10; ++i)
    {
        printf("%d X %d = %d \n", n, i, n*i);
    }
    
    return 0;
}
```
---
### 3 Program to check whether a given number is an Armstrong number or not
```C
#include <stdio.h>
int main()
{
        int sum=0,digit;
        int n, temp;
        printf("enter any positive integer number");
        scanf("%d",&n);
        temp=n;
        while(temp>0)
        {
                digit=temp%10;
                temp/=10;
                sum=sum+digit*digit*digit;
        }
        if(n==sum)
                printf("\n %d is a armstrong number\n",n);
        else
                printf("\n %d is not a armstrong number\n",n);
}
```
---
### 4 Program to find average of N numbers
```C
#include <stdio.h>
int main()
{
    int n, i;
    float num[100], sum = 0.0, average;
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    while (n > 100 || n <= 0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }
    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    average = sum / n;
    printf("Average = %.2f", average);
    return 0;
}
```
---
### 5 Algorithm of Binary Search  
``` C
#include<stdio.h>
        
int check(int b[],int m,int o)
{       
        int p=-1,mid;
 int f=1,l=m;
 mid=(f+l)/2;           

while(f<=l)
 {
        mid=(f+l)/2;
        if(b[mid]==o)
        {
                p=mid;
                break;
        }
        else if(o>b[mid])
        {
                f=mid+1;
        }
        else if (o<b[mid])
        {
                l=mid-1;
        }
        
}       
                        return p;
        
}     
       
void main()
{       
        int n,num,index;
        printf("enter the array size\n");
        scanf("%d",&n);
        int a[n];
        printf("enter the array elements in assending order\n");
        for(int i=1;i<=n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("now enter the number which you want to check\n whether it is present or not in entered array\n");
        
        scanf("%d",&num);
        index=check(a,n,num);
        if(index==-1)   
        printf("element is not found\n");
        else
        printf("element is found at the position %d \n",index);

}
```
----
### 6 Algorithm of Bubble Short

``` C
#include<stdio.h>
int main()
{
        int i,n,k,temp;
        printf("\n enter the array size\n");
        scanf("%d",&n);
        int a[n];
        printf("enter %d elements of array\n",n);
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(k=0;k<n-1;k++)
        {
                for(i=0;i<n-k-1;i++)
                {
                        if(a[i]>a[i+1])
                        {
                                temp=a[i];
                                a[i]=a[i+1];
                                a[i+1]=temp;
                        }
                }
        }
        printf("\n array elements after shorting\n");
        for(i=0;i<n;i++)
                printf("%d\t",a[i]);
        printf("\n");
}
```
### 7 Program to print schematics of a calculator
```C
#include <stdio.h>
int main()
{
puts("__________________");
puts("|                |");
puts("|________________|");
puts("|  1 | 2 | 3 |   |");
puts("|____|___|___|   |");
puts("|  4 | 5 | 6 | + |");
puts("|____|___|___|___|");
puts("|  7 | 8 | 9 |   |");
puts("|____|___|___| = |");
puts("|  - | * | / |   |");
puts("|____|___|___|___|");
return 0;
}
```
---
### 8 Program to print Weekdays using switch statement
```C
#include <stdio.h>

int main()
{
    int week;
    
    /* Input week number from user */
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    
    switch(week)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}
```
---
### 7 Program to print table using FOR loop
```C
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=1; i<=10; ++i)
    {
        printf("%d X %d = %d \n", n, i, n*i);
    }
    
    return 0;
}
```
---
 ### 9 Program to find Even or Odd number
 ```C
 #include <stdio.h>
 
int main()
{
  int n;
 
  printf("Enter an integer\n");
  scanf("%d", &n);
 
  if (n%2 == 0)
    printf("Even\n");
  else
    printf("Odd\n");
 
  return 0;
}
```
### 10 Program to calculate factorial of a given number
```C
#include <stdio.h>

long factorial(int);

int main()
{
int number;
long fact = 1;

printf("Enter a number to calculate it's factorial\n");
scanf("%d", &number);

printf("%d! = %ld\n", number, factorial(number));

return 0;
}

long factorial(int n)
{
int c;
long result = 1;

for (c = 1; c <= n; c++)
result = result * c;
/*multiplying result by 1,2,3...n */

return result;
}
```
---
### 11 FizzBuzz
```C
#include <stdio.h>
    int main()
 {  int a;
    printf("enter a no.");
    scanf("%d",&a);
    if(a%3==0 && a%5==0)
    {
        printf("fizz buzz");
    }
    else if (a%5==0)
    {
        printf("buzz");
    }
    else if (a%3==0)
    {
        printf("fizz");
    }
    else
    {
        printf("");
    }
    return 0;
}

```
---
### 12 Program to find the sum to first 100 natural numbers
```C
 #include <stdio.h>
int main()
{
   i, sum = 0;
   
    for(i=1; i <= 100;i++)
    {
        sum += i;  
    }
    printf("Sum = %d",sum);
    return 0;
}
 ```
 ---
 ### 13 Program to find GCD of numbers

```C
#include <stdio.h>
int main()
{
int m,n,r=1;
printf("\n Enter value for m,n\n");
scanf("%d%d",&m,&n);
while(r!=0)
{
r=n%m;
n=m;
m=r;
}
printf("\n GCD=%d \n",n);
return 0;
}
```
---
### 14 Program to find greater number among two number
```C
#include <stdio.h>
void main()
{       
        float a,b;
        printf("enter first number\n");
        scanf("%f",&a);
        printf("enter the second nummber\n");
        scanf("%f",&b);
        if(a>b)
                printf("%f is greater\n",a);
        else if(b>a)
                printf("%f is greater\n",b);
        else    
                printf("both numbers are equal\n");
}
```
### 15 Program to find greater number among three numbers
```C
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three numbers which you want to compare \n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("\n%d is the greatest number\n",a);
else if(b>a&&b>c)
printf("\n%d is the greatest number\n",b);
else 
printf("\n%d is the greatest number\n",c);
}
```
---
### 16 Program to find Leap Year
```C
#include<stdio.h>
int main()
{
        int a;
        printf("enter the year\n");
        scanf("%d",&a);
        if(a%4==0)
        printf("it is a leap year\n");
        else
                printf("it is not a leap year\n");
}

```
---
### 17 Algorithm of Linear Search
```C
#include <stdio.h>

int main()
{
int array[100], search, c, n;

printf("Enter the number of elements in array\n");
scanf("%d",&n);

printf("Enter %d integer(s)\n", n);

for (c = 0; c < n; c++)
scanf("%d", &array[c]);

printf("Enter the number to search\n");
scanf("%d", &search);

/* We keep on comparing each element with the element to search until the desired element is found or list ends */
for (c = 0; c < n; c++)
{
if (array[c] == search){
/* if required element found*/
printf("%d is present at location %d.\n", search, c+1);
break;
}
}
if (c == n)
printf("%d is not present in array.\n", search);

return 0;
}
```

### 18 Program to add two 2D Matrixes
```C 
#include <stdio.h>

int main()
{
int m, n, c, d, first[10][10], second[10][10], sum[10][10];

printf("Enter the number of rows and columns of matrix\n");

scanf("%d%d", &m, &n);
printf("Enter the elements of first matrix\n");

for ( c = 0 ; c < m ; c++ )
for ( d = 0 ; d < n ; d++ )
scanf("%d", &first[c][d]);

printf("Enter the elements of second matrix\n");

for ( c = 0 ; c < m ; c++ )
for ( d = 0 ; d < n ; d++ )
scanf("%d", &second[c][d]);

for ( c = 0 ; c < m ; c++ )
for ( d = 0 ; d < n ; d++ )
sum[c][d] = first[c][d] + second[c][d];
/* Matrix addition */

printf("Sum of entered matrices:-\n");

for ( c = 0 ; c < m ; c++ )
{
for ( d = 0 ; d < n ; d++ )
printf("%d\t", sum[c][d]);

printf("\n");
}

return 0;
}
```
---
### 19 Program to find transpose of a matrix
```C
#include <stdio.h>

int main()
{
int m, n, c, d, matrix[10][10], transpose[10][10];
printf("Enter the number of rows and columns of matrix \n ");
scanf("%d%d",&m,&n); printf("Enter the elements of matrix \n");
for( c = 0 ; c < m ; c++ )
{
for( d = 0 ; d < n ; d++ )
{
scanf("%d",&matrix[c][d]);
}
}

for( c = 0 ; c < m ; c++ )
{
for( d = 0 ; d < n ; d++ )
{
transpose[d][c] = matrix[c][d];
/* transpose by interchanging rows and columns */
}
}

printf("Transpose of entered matrix :-\n");
for( c = 0 ; c < n ; c++ )
{
for( d = 0 ; d < m ; d++ )
{
printf("%d\t",transpose[c][d]);
}
printf("\n");
}
return 0;
}
```
---
### 20 Program to calculate sum of digits of a number
```C
#include<stdio.h>
int main()
{
        int a,sum=0,c;
        printf("enter the number\n");
        scanf("%d",&a);
        while(a!=0)
        {
        c=a%10;
        sum+=c;
        a=a/10;
        }
        printf("sum of digits is %d\n",sum);
}
```
---
### 21 Program to check whether a number is Palindrome or not
```C
#include <stdio.h>

int main()
{
int n, reverse = 0, temp;

printf("Enter a number to check if it is a palindrome or not\n");
scanf("%d",&n);

temp = n;

while( temp != 0 )
{
reverse = reverse * 10;
reverse = reverse + temp%10;
temp = temp/10;
}
/*Taking reverse of the given no
see reverse no program*/

if ( n == reverse )
/*if reverse is same as n*/
printf("%d is a palindrome number.\n", n);
else
printf("%d is not a palindrome number.\n", n);

return 0;
}
```
---
### 22 Program to swap two numbers using call by value method
```C
void swap(int, int);
 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int a, int b)
{
   int temp;
 
   temp = b;
   b = a;
   a = temp;
    printf("Values of a and b is %d  %d\n",a,b);
}
```
---
### 23 Program TO swap two numbers using Call By Reference method
```C

#include <stdio.h>

void swap(int * num1, int * num2);

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);
    swap(&num1, &num2);
    printf("After swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    return 0;
}
void swap(int * num1, int * num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;
    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}
```
---
### 24 Program to show Employees Datails
```C
#include <stdio.h>
 
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
 
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name ?:");        
    gets(emp.name);
    printf("ID ?:");      
    scanf("%d",&emp.empId);
    printf("Salary ?:");  
    scanf("%f",&emp.salary);
    return 0;
}
```
---

### 25 Program to find product of fractions using structure
```C
#include<stdio.h>
#include<conio.h>
typedef struct
     {
        int num;
        int deno;
     
      }Fract;
 
   Fract sum(Fract,Fract);
 
   int main()
    {
     int num1,deno1,num2,deno2;
     printf("Enter fraction 1: numerator denominator:");
     scanf("%d%d",&num1,&deno1);
     printf("Enter fraction 2:numerator denominator:");
     scanf("%d%d",&num2,&deno2);
    
     Fract f1 ={num1, deno1}; 
     Fract f2 ={num2, deno2};
     Fract result = sum(f1, f2);//sum the fractions
     printf("Result=%d/%d",result.num,result.deno);  
     getch();
     return 0;
    }
   Fract sum(Fract f1, Fract f2)
    {
     Fract result={(f1.num * f2.deno) + (f2.num * f1.deno), f1.deno * f2.deno};
     return result;
 
   }
```
---
***
---
     
