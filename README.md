# PROGRAMMING FOR PROBLEM SOLVING ESC -18105
|     |     |
|-----|-----|
|**Submitted To** | Dr. Kamaljit Kaur Dhillon |
|**Submitted By** | Priyanshu Tiwari |
|**CRN** | 1921127 |
|**Branch**| Information Technology|
|**Year** | *1st*|

---
### 1 Program to Check Whether a Number is Prime or Not
```C
include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("%d is a prime number.", n);
        else
          printf("%d is not a prime number.", n);
    }
    
    return 0;
}
```
---
```C
### 2 Program to Find LCM of two Numbers
#include <stdio.h>
int main()
{
    int n1, n2, minMultiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    // maximum number between n1 and n2 is stored in minMultiple
    minMultiple = (n1>n2) ? n1 : n2;
    // Always true
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    return 0;
}
```
----
### 3 Program to find whether a given number is Even or Odd
```C

#include<stdio.h>
 int main() {

  int num,temp;

  printf("Enter the Number:");
  scanf("%d",&num);

  if(num%2==0)
  printf("\nNumber is Even....");

  else
  printf("\nNumber is Odd....");

  printf("\n\n");
  return 0;

```
---

### 4 Program to check whether a given number is an Armstrong number or not
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
### 5 Program to print schematics of a calculator
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
### 6 Program to find average of N numbers
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
### 8 FizzBuzz
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
### 9 Program to find Leap Year
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
### 10 Program to Week Days
```C
#include <stdio.h>
 int main()
 {
     int week; /* Input week number from user */ 
    printf("Enter week number(1-7): "); scanf("%d", &week);
     switch(week)
     { 
        case 1: printf("Monday"); 
        break; 
        case 2: printf("Tuesday"); 
        break; 
        case 3: printf("Wednesday"); 
        break; 
        case 4: printf("Thursday"); 
        break; 
        case 5: printf("Friday"); 
        break; 
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday"); 
        break;
        default: printf("Invalid input! Please enter week number between 1-7.");
       } 
    return 0; 
    }
```
---
### 11 Program to calculate factorial of a given number
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
### 12 Program to add two 2D Matrixes
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
### 13 Program to find greater number among two number
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
---
### 14 Program to find the sum to the given number
```C
 #include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}
 ```
 ---
### 15 Program to find GCD

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
### 16 Program to find transpose of a matrix
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
### 17 Program to find greater number among three numbers
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
### 18 Program to check whether a number is Palindrome or not
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
### 19 Program to Call By Reference
```C

#include <stdio.h>

void call_by_reference(int *y) {
printf("Inside call_by_reference y = %d before adding 10.\n", *y);
(*y) += 10;
printf("Inside call_by_reference y = %d after adding 10.\n", *y);
}

int main() {
int b=10;

printf("b = %d before function call_by_reference.\n", b);
call_by_reference(&b);
printf("b = %d after function call_by_reference.\n", b);

return 0;
}
```
---
### 20 Program to show Employees Datails
```C
#include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
```
---
### 21 Program to calculate sum of digits of a number
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
### 22 Program to print Biodata of students
```C

#include<stdio.h>
int main()
{
        int n,R;
        char name[25];

        printf("\nEnter The Number of Students: ");
        scanf("%d",&n);

        for(int i=1; i<=n;i++)
{
        printf("\nEnter The Name of The Student : ");
        scanf("%s", name);

        printf("Enter The Roll No. of Students: ");
        scanf("%d",&R);

        printf("\nName = %s\nRoll No. = %d\n", name,R);
}
        return 0;
}

```
---
### 23 Linear Search
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
---
### 24 Program to Call_ By _value
```C
#include <stdio.h>

void call_by_value(int x)
{
printf("Inside call_by_value x = %d before adding 10.\n", x);
x += 10;
printf("Inside call_by_value x = %d after adding 10.\n", x);
}

int main() 
{
int a=10;

printf("a = %d before function call_by_value.\n", a);
call_by_value(a);
printf("a = %d after function call_by_value.\n", a);

return 0;
}
```
---
### 25 Arthmetic Operators
```C
#include<stdio.h>
int main()
{

     float x,a;

     printf("\nEnter The Value of x: ");
     scanf("%f",&x);

     a = x;
     printf("Answer is a = x %.3f\n",a);
     a +=x; //answer is a+x
     printf("Answer is a+x = %.3f\n",a);
     a -=x; //answer is a-x
     printf("Answer is a-x = %.3f\n",a);
     a *=x; //answer is a*x
     printf("Answer is a*x = %.3f\n",a);
     a /=x; //answer is a/x
     printf("Answer is a/x= %.3f\n",a);

     return 0;
}
 ``` 
 ---
 ### 1 Algorithm of Binary Search  
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

### 2 Algorithm of Bubble Short

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
 ***   
     
