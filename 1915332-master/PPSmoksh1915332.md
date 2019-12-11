
![College  Logo](https://www.gndec.ac.in/logo.png)

# **Programming for Problem Solving**
## **Name:- MOKSH SOOD**
## **CRN:-1915332**
## **Branch:- CSE-C1**
## **Submitted To:- Ms. Goldendeep Kaur**
---

### 1) To print name.
```C
#include<stdio.h>
int main()
{
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~");
    puts("My name is MOKSH SOOD");
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~");
    return 0;
}
```
![1.jpg](1.png)
### 2) To print College address.
```C
#include<stdio.h>
int main()
{
    printf("Guru Nanak Dev Engineering College,\nGill Road,\nLudhiana, Punjab");
    return 0;
}
```
![2.jpg](02.jpg)
### 3) Program to add two integers.
```C
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter the value of first integer: ");
    scanf("%d", &a);
    printf("Enter the value of second integer: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is %d", sum);
    return 0;
}
```
![3.jpg](03.jpg)
### 4) Program to find quotient and remainder.
```C
#include<stdio.h>
int main()
{
    int divisor, dividend, quotient, remainder;
    printf("Enter the value of divisor: ");
    scanf("%d", &divisor);
    printf("Enter the value of dividend: ");
    scanf("%d", &dividend);
    quotient = dividend/divisor;
    remainder = dividend%divisor; 
    printf("Qoutient is %d\n", quotient);
    printf("Remainder is %d", remainder);
    return 0;
}
```
![4.jpg](04.jpg)
### 5) Program to swap two variables without 3rd variable.
```C
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("~~~~~~~~~~~~~~~~\nAfter Swap\n~~~~~~~~~~~~~~~~\n");
    printf("Value of a = %d\nValue of b = %d", a,b);
    return 0;
}
```
![5.jpg](05.jpg)
### 6) Program to check even odd number.
```C
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    printf("Number is Even");
    else
    printf("Number is Odd");
    return 0;
}
```
![6.png](06.jpg)
### 7) Finding greteast of two numbers.
```C
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2)
    printf("First Number is Greatest i.e %d", num1);
    else
    printf("Second Number is Greatest i.e %d", num2); 
    return 0;
}
```
![7.png](06.jpg)
### 8) Find greatest of three number .
```C
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    printf("Enter the value of c ");
    scanf("%d", &c);
    if (a>b)
    {
        if(a > c)
        printf("a is the greatest");
        else
        printf("c is the greatest");
    }
    else
    {
        if (b > c)
        printf("b is the greatest");
        else
        printf("c is the greatest");
        
    }
    return 0;
    
}
```
![8.png](08.jpg)
### 9) Program to assign grade to student according to percentage.
```C
#include<stdio.h>
int main()
{
    int marks;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSchema for marks and grades\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nMarks\tGrade\n0-30\tF\n31-50\tD\n51-70\tC\n71-80\tB\n81-90\tA2\n91-100\tA1\n");
    printf("Enter is the marks (Out of 100): ");
    scanf("%d", &marks);
    if (marks>=0)
    {
        if (marks <= 90)
            {
                if (marks <= 80)
                {
                    if (marks <= 70)
                    {
                        if (marks <= 50)
                        {
                            if (marks <= 30)
                            printf("Grade is F");
                            else
                            printf("Grade is D");
                        }
                        else
                        printf("Grade is C");
                    }
                    else
                    printf("Grade is B");
                }
                else
                printf("Grade is A2");
            }
        else
        printf("Grade is A1");
    }
    else 
    printf("Invalid Input");
    return 0;
}
```
![9.png](09.jpg)
### 10) Program to print roots of quadratic equation.
```C
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,root1,root2;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSchema of a Quadratic Equation is a(x^2) + b(x) + c = 0\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter is value of a ");
    scanf("%d", &a);
    printf("Enter is value of b ");
    scanf("%d", &b);
    printf("Enter is value of c ");
    scanf("%d", &c);
    root1 = ((-b) + sqrt((b*b) - (4*a*c)))/(2*a);
    root2 = ((-b) - sqrt((b*b) - (4*a*c)))/(2*a);
    printf("Roots are %d and %d", root1,root2);
    return 0;
}
```
![10.png](10.jpg)
### 11) Program to check year is leap or not.
```C
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year%4 == 0)
    printf("%d is a Leap Year", year);
    else 
    printf("%d is not a Leap Year", year);
    return 0;
}
```
![11.png](11.jpg)
### 12) Program to print table of 5.
```C
#include<stdio.h>
int main()
{
    int num,x;
    printf("Enter the number of mutiples of 5 you want: ");
    scanf("%d", &num);
    for (x=1; x<=num; x++)
    {
        printf("5\t*\t%d\t=\t%d\n", x,x*5);
    }
    return 0;
}
```
![12.png](12.jpg)
### 13) To make simple calculator using switch case.
```C
#include<stdio.h>
int main()
{
    double num1,num2;
    char operator;
    printf("Select the Operator (+ - * /)");
    scanf("%c", &operator);
    printf("\nEnter the numbers: ");
    scanf("%lf %lf", &num1,&num2);
    switch(operator)
    {
        case '+':
        printf("%.2lf + %.2lf = %.2lf", num1,num2,num1+num2);
        break;
        case '-':
        printf("%.2lf - %.2lf = %.2lf", num1,num2,num1-num2);
        break;
        case '*':
        printf("%.2lf * %.2lf = %.2lf", num1,num2,num1*num2);
        break;
        case '/':
        printf("%.2lf / %.2lf = %.2lf", num1,num2,num1/num2);
        break;
        default:
        printf("Invalid Operator");
    }

    return 0;
}
```
![13.png](13.jpg)
### 14) To calculate reverse of a number.
```C
#include<stdio.h>
int main()
{
    int num, reverse=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num%10;
        num = num/10;
    }
    printf("Reverse of the Entered Number is %d", reverse);
    return 0;
}
```
![14.png](14.jpg)
### 15) To check whether number is palindrome or not.
```C
 #include<stdio.h>
int main()
{
    int num,original, reverse=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num%10;
        num = num/10;
    }
    if (original == reverse)
    printf("Number is a palindrome");
    else 
    printf("Number is not a palindorme");
    return 0;
}
```
![15.png](15.jpg)
### 16) To check whether a number is prime or not.
```C
#include<stdio.h>
int main()
{
    int num, k=0, x;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (x=1; x<=num; x++)
    {
        if (num%x == 0)
        {
            k++;
        }
    }
    if (k == 2)
    printf("Number is a Prime Number");
    else 
    {
        if (k == 1)
        printf("Number is neither a prime nor a composite");
        else
        printf("Number is not a prime number");
    }
}
```
![16.png](16.jpg)
### 17) Program to print prime numbers from 1 to 100.
```C
#include <stdio.h>
 
int main()
{
  int i, Number, count; 
  
  printf(" Prime Number from 1 to 100 are: \n"); 
  for(Number = 1; Number <= 100; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }  
  }
  return 0;
} 
 ``` 
 ![17.png](17.jpg)
### 18) Program to check whether a number is armstrong or not.
```C
#include<stdio.h>
int main()
{
    int number,remainder,sum=0,original_number;
    printf("Enter the Number: ");
    scanf("%d", &number);
    original_number = number;
    while(number>0)
    {
        remainder = number%10;
        sum = sum+(remainder*remainder*remainder);
        number = number/10;
    }
    if (original_number == sum)
    printf("Number is a Armstrong Number");
    else 
    printf("Number is not a Amrstrong Number");
    return 0;
}

```
![18.png](18.jpg)
### 19) Print the following patterns:
### i) Pattern 1. 
```C
#include<stdio.h>
int main()
{
    int x,y;
    for(x=1; x<5; x++)
    {
        for (y=1; y<=x; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }
    return 0;
}
```
![19_1.png](19a.jpg)

### ii) Pattern 2.
```C
#include<stdio.h>
int main()
{
    int x,y,z=1;
    for (x=1; x<5; x++)
    {
        for (y=1; y<=x; y++)
        {
            printf("%d", z++);
        }
        printf("\n");
    }
    return 0;
}
``` 
![19_2.png](19b.jpg)

### iii) Pattern 3.
```C
#include<stdio.h>
int main()
{
    int p,q,r,s,t;
    for (p=1; p<5; p++)
    {
        for (q=1; q<5-p; q++)
        {
            printf(" ");
        }
        for (r=1; r<=p; r++)
        {
            printf("%d", r);
        }
        for (s=p-1; s>=1; s--)
        {
            printf("%d", s);
        }
        printf("\n");
    }
    return 0;
}
``` 
![19_3.png](19c.jpg)
### 20) Program to find largest from 1 dimensional array.
```C 
#include<stdio.h>
int main()
{
    int i, n, arr[5],largest;
    for(i = 0; i < 6; i++)
    {
       printf("Enter Number %d: ", i);
       scanf("%d", &arr[i]);
    }
    for(i = 0; i < 6; i++)
    {
       if(largest < arr[i])
           largest = arr[i];
    }
    printf("Largest element = %d", largest);
    return 0;
}
```
![20.png](20.jpg)

### 21) To find sumof the N natural numbers in an array.
```C
#include<stdio.h>
int main()
{
    int arr[1000],n,x,y,sum=0;
    printf("Enter the number of elements you want to input(From 1 to 1000): ");
    scanf("%d", &n);
    for (x=0; x<n; x++)
    {
        printf("Enter Element %d: ", x+1);
        scanf("%d", &arr[x]);
    }
    for (y=0; y<n; y++)
    {
        sum += arr[y];
    }
    printf("Sum of above array elements is %d", sum);                    
    return 0;
}
```
![21.png](21.jpg)

### 22) Program to add two matrices .
```C
#include<stdio.h>
int main() 
{ 
    int A[4][4] = { {1, 1, 1, 1},{2, 2, 2, 2},{3, 3, 3, 3}, {4, 4, 4, 4}}; 
  
    int B[4][4] = { {1, 1, 1, 1}, {2, 2, 2, 2},{3, 3, 3, 3},{4, 4, 4, 4}}; 
  
    int C[4][4];
    int i, j; 
    int k, l; 
    for (k = 0; k < 4; k++)
    {
      for (l = 0; l < 4; l++) 
      {
          C[k][l] = A[k][l] + B[k][l];   
      }        
    } 
    printf("Result matrix is \n"); 
    for (i = 0; i < 4; i++) 
    { 
        for (j = 0; j < 4; j++)
        {
            printf("%d ", C[i][j]);
        }    
        printf("\n"); 
    } 
  
    return 0; 
}
```
![22.png](22.jpg)
### 23) Program to multiply two matrices .
```C
#include<stdio.h>
int main() 
{ 
    int mat1[4][4] = { {1, 1, 1, 1},{2, 2, 2, 2},{3, 3, 3, 3},{4, 4, 4, 4}}; 
  
    int mat2[4][4] = { {1, 1, 1, 1},{2, 2, 2, 2},{3, 3, 3, 3},{4, 4, 4, 4}}; 
  
    int res[4][4]; 
    int i, j, k; 
    for (i = 0; i < 4; i++) 
    { 
        for (j = 0; j < 4; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < 4; k++) 
            {
                res[i][j] += mat1[i][k]*mat2[k][j];
            }
        } 
    }  
    printf("Result matrix is \n"); 
    for (i = 0; i < 4; i++) 
    { 
        for (j = 0; j < 4; j++) 
        {
            printf("%d ", res[i][j]);
        }
        printf("\n"); 
    } 
  
    return 0; 
} 
```
![23.png](23.jpg)
### 24) Program to check whether  a string is palindrome or not .
```C
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,shit=0;
    char str[9]; 
    printf("Enter the string you want to check");
    scanf("%s", str);
    for (a=0; a<strlen(str); a++)
    {
        if (str[a] != str[strlen(str) - (a+1)])
        {
            shit=1;
        } 
    }
    if (shit == 1)
    printf("It is not a palindrome.");
    else 
    printf("It is a palindrome");
    return 0;
}
```
![24.png](24.jpg)
### 25) Programs to perform basic operations like length of string, string concatenation, sting copy, string compare and string reverse.
```C
#include<stdio.h>
#include<string.h>
int main()
{
    int s1[10],s2[10],s3[40],i,j;
    printf("Enter the string 1 (MAX. is 10 Elements): ");
    scanf("%s", s1);
    printf("Enter the string 2 (MAX. is 10 Elements): ");
    scanf("%s", s2);
    if(strcmp(s1,s2)==0)
    printf("Entered strings are same\n");
    else 
    printf("Entered strings are not same\n");
    printf("Length of string 1 and string 2 is %d and %d respectively\n", strlen(s1),strlen(s2));
    printf("Concatenated string is %s\n", strcat(s1,s2));
    printf("New Copied string from string 2 by strcpy() is %s\n", strcpy(s3,s2));
    printf("Reverse of string 2 is %s",strrev(s2));
    return 0;
}
```
![25.jpg](25.jpg)
### 26) Programs to swap two numbers using call by value and call by refernce.

### Call by reference
```C
/* Call by reference */

#include <stdio.h>
void swap(int*, int*);
 
int main() {
   
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;
}
```
![26_1.png](26.jpg)
### call by value:- 
```C
/* Call by value */

#include <stdio.h>
 
void swap(int, int);
 
int main() {
   
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int a, int b) {
   int temp;
 
   temp = b;
   b = a;
   a = temp;
    printf("Values of a and b is %d  %d\n",a,b);
}
```
![26_2.png](20b.jpg)
   
### 27) Program to calculate factorial of a number with and without recursion both.
```C
/* Recursion */

#include<stdio.h>
long long int factorial(long long int x);
int main()
{
    long int number;
    printf("Enter the number of which you want to know the factorial: ");
    scanf("%d", &number);
    printf("Factorial of the Entered Number is %d", factorial(number));
    return 0;
}
long long int factorial(long long int x)
{
    if (x>=1)
    return x*factorial(x-1);
    else 
    return 1;
}
```
![27_1.png](27a.jpg)

```C
#include<stdio.h>
int main()
{
    int number,factorial=1,x;
    printf("Enter the number: ");
    scanf("%d", &number);
    for (x=1; x<=number; x++)
    {
        factorial = factorial*x;
    }
    printf("Factorial of %d is %d", number, factorial);
    return 0;
}
```
![27_2.png](27b.jpg)

### 28) Program to print fibonacci series with and without recursion both.
```C
#include<stdio.h>
int fib(int j);
int main()
{
    int n,i,j=0;
    printf("Enter the Number of terms you want to print: ");
    scanf("%d", &n);
    printf("Fibonacci Series upto %d terms are: ", n);
    for (i=1; i<=n; i++)
    {
        printf("%d\n", fib(j));
        j++;
    }
    return 0;
}
int fib(int j)
{
    if (j == 1 || j == 0)
    return j;
    else
    return (fib(j-1) + fib(j-2));
}
```
![28_1.png](28a.jpg)
```C
#include<stdio.h>
int main()
{
    int i,j,n, f[100000]={0,1};
    printf("Enter the Number upto which you want to print the fibonacci seires");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        f[i+2] = f[i+1] + f[i];
        printf("%d\n", f[i]);
    } 
}
```
![28_2.png](28b.jpg)

### 29) Program to calculate average of 5 numbers using function.
```C
#include<stdio.h>
int average();
int main()
{
    int a,b,c,d,e;
    printf("Enter the 5 values of whom you want to calculate average");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    printf("Average is %d", average(a,b,c,d,e));
    return 0;
}
int average(int a, int b, int c, int d, int e)
{
    return ((a+b+c+d+e)/5);
}
 ```
![29.png](29.jpg)
### 30) Program to implement linear serach and binary.

### Linear Search Program
```C
#include<stdio.h>
int main()
{
    int a[99999],i,j,s,k;
    printf("Enter the numbers you want to enter: ");
    scanf("%d", &i);
    for (j=0; j<i; j++)
    {
        scanf("%d", &a[j]);
    }
    printf("Enter the number you want to search");
    scanf("%d", &s);
    for (k=0; k<i; k++)
    {
        if (s == a[k])
        {
            printf("%d is present in this array at %d location of array", s,k+1);
            break;
        }
    }
    if (k == i)
    printf("%d is not present in this array", s);
    return 0;
}
```
![30_1.png](30a.jpg)
### Binary Search Program
```C
#include<stdio.h>
int main()
{
    int number, first, middle, last, search, i, arr[9999];
    printf("Enter the value of numbers you want to enter: ");
    scanf("%d", &number);
    printf("Enter those %d values: \n", number);
    for (i=0; i<number; i++)
    {
        scanf("\n%d", &arr[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &search);
    first = 0;
    last = number - 1;
    middle = (first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
            first = middle + 1;
        else if (arr[middle] == search)
        {
            printf("%d is found and present at %d", search, middle+1);
            break;
        } 
        else
        last = middle - 1;
        
        middle = (first+last)/2;
    }
    if (first>last)
    printf("%d is not present in the above list", search);
    return 0;
}
```

![30_2.png](30b.jpg)

### 31) Program to implement bubble sort.
```C
#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) 
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);
 
  return 0;
}
```
![31.png](31.jpg)
### 32) Program to store information of 10 students using array of structures.
```C
#include<stdio.h>
struct student 
{
    char name[50];
    int roll;
    int age;
    int marks;
    char sex;
} s[5];
int main()
{
    int i;
    printf("Enter the information of students: \n");
    for (i=0; i<5; i++)
    {
        s[i].roll = i+1;
        printf("\nFor Roll Number %d: \n", s[i].roll);
        printf("Enter Name: ");
        scanf("%s", &s[i].name);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
        printf("Enter the Sex:");
        scanf("%s", &s[i].sex);
        printf("\n\n");
    }
    printf("Information Entered is: \n\n");
    for (i=0; i<5; i++)
    {
        printf("\nRoll Number: %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Marks: %d\n", s[i].marks);
        printf("Sex: %c\n", s[i].sex);
        printf("\n\n");
    }
    return 0;
}
```
![32_1.png](32.jpg)
![32_2.png](32_cont.jpg)
### 33) Programs to compute the transpose of a matrix.
```C
#include<stdio.h>
int main()
{
    int m1[3][3]={{1,1,1},{2,2,2},{3,3,3}}, m1t[3][3], i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            m1t[j][i] = m1[i][j];
        }
    }
    for (j=0; j<3; j++)
    {
        for (i=0; i<3; i++)
        {
            printf("%d", m1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```
![33.png](33.jpg)
### 34) Program to print the address of variable using pointer.
```C
#include <stdio.h>

int main() {
  int a;
  int *pt;

  printf("Pointer Example Program : Print Pointer Address\n");
  a = 10;
  pt = &a;

  printf("\n[a  ]:Value of A = %d", a);
  printf("\n[*pt]:Value of A = %d", *pt);
  printf("\n[&a ]:Address of A = %p", &a);
  printf("\n[pt ]:Address of A = %p", pt);
  printf("\n[&pt]:Address of pt = %p", &pt);
  printf("\n[pt ]:Value of pt = %p", pt);
  
  return 0;
}
```
![34.png](34.jpg)
### 35) Program to access array using pointer.
```C
int main()
{
   int data[5], i;
   printf("Enter elements: ");
   for(i = 0; i < 5; ++i)
     scanf("%d", data + i);
   printf("You entered: \n");
   for(i = 0; i < 5; ++i)
      printf("%d\n", *(data + i));
   return 0;
}
```
![35.png](35.jpg)
