![](https://i.imgur.com/eBZLVAa.png)
---
# PPS
## My Details
**Name** - shriya rani
**CRN** -1915350
**Branch** - CSE


## 1) To print name using puts.

```c
/*Program to print your namess*/

#include<stdio.h>
int main() {

puts("**************");
puts(" shriya rani");

puts("**************");

return 0;
}
```
![](https://i.imgur.com/DP4JNHt.jpg)

## 2) To print College address

```c
/*College Address*/
 
#include<stdio.h>
int main() {

printf("\n\t\t\tGuru Nanak Dev Engineering College,");
printf("\n\t\t\tGill Road,");
printf("\n\t\t\tLudhiana , Punjab");

return 0;
}
```
![](https://i.imgur.com/SyY6BJS.jpg)

## 3) Program to add two integers .

```c
/*To add two integers*/

#include<stdio.h>
 void main()
{
  int a,b,c;
  printf("enter a two numbers = ");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("sum = %d",c);
 
}
```
![](https://i.imgur.com/m1cwtQ7.jpg)

## 4) Program to find quotient and remainder.

```c

/*To find quotient and remainder*/

#include <stdio.h>
int main()
{
     int dividend, divisor, quotient, remainder;

     printf("Enter dividend: ");
     scanf("%d", &dividend);

     printf("Enter divisor: ");
     scanf("%d", &divisor);
 
     // Computes quotient
     quotient = dividend / divisor;

     // Computes remainder
     remainder = dividend % divisor;

     printf("Quotient = %d\n", quotient);
     printf("Remainder = %d", remainder);

     return 0;
}
```
![](https://i.imgur.com/r0ukqNa.jpg)
## 5) Program to swap two variables without 3rd variable.


```c
/*Swapping without 3rd variable */
    
#include<stdio.h>
void main()
{    
 int a,b;
 printf("enter the first number = ");
 scanf("%d",&a);
 printf("enter the second number =");
 scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n first number=%d",a);
printf("\n second number=%d",b);
 }   

```
![](https://i.imgur.com/RuwurKT.jpg)

## 6) Program to check even odd number.



```c
/*To find whether number is even or odd*/

 #include<stdio.h>
void main()
{
int a;
printf("enter a");
scanf("%d",&a);                                          
if(a%2==0)
{
printf("a is even");
}
else
{
printf("a is odd");
}
}
```
![](https://i.imgur.com/vQUsuB7.jpg)


## 7) Finding greteast of two numbers.

```c
/*Largest one in two*/
include<stdio.h>
void main()
{
 int a,b;
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 if(a>b)
 {
  printf("a is greatest");
 }
 else
 {
   printf("b is the greatest");
  }
  
}


```
![](https://i.imgur.com/TnyGUmo.jpg)

## 8) Find greatest of three number .

```c
/*Largest of three number*/

#include<stdio.h>
void main()
{
 int a,b,c;
   printf("enter the numbers ");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b && b>c)
       {
        printf("a is greatest=%d\n",a);                  
       }
 else if(b>c && c>a)
   {
   printf("b is greatest=%d\n",b);
   }
 else
   {
   printf("c is  greatest=%d\n",c);
   }                                                     
}
```
![](https://i.imgur.com/SEIldEA.jpg)

## 9) Program to assign grade to student according to percentage.

```c
/*To find grade of a student by marks*/

#include<stdio.h>
int main() { 
    
  int s1,s2,s3,s4,s5,agg;
  float perc;

  printf("Enter the Marks in 5 Subjects Respectively:\n");

scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

agg=s1+s2+s3+s4+s5; // Aggregate Marks
  
  perc=agg/500.0*100;  // Perc Marks

  if(perc>=90)
  {
      printf("\nA");
      
  }
  
  else if (perc>=80 && perc<90)
  { 
      printf("\nB");
      
  }
  
  else if(perc>=70 && perc<80)
  {
      printf("\nC");
      
  }
  
  else if(perc>=60 && perc<70)
  { 
      printf("\nD");
  }
  else if(perc>=50 && perc<60)
  {
      printf("\nE");
  }
  else 
     {
          printf("\nScope of Improvement....");
    } 
    return 0;
}
```
![](https://i.imgur.com/P7iczeS.jpg)

## 10) Program to print roots of quadratic equation.

```c
/*Program to print roots */

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);
    discriminant = b*b-4*a*c;
    if (discriminant > 0)
    {
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf",root1 , root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    return 0;
}
```
![](https://i.imgur.com/KlHz9M5.jpg)

## 11) Program to check year is leap or not.

```c
/*To find whether year is leap or not*/

#include <stdio.h>

int main()
{
     int year,temp;

     printf("Enter a year: ");
     scanf("%d",&year);
 temp=year%4;
           if( year%100 == 0)
           {

                 if (year%400 == 0)
   printf("%d is a leap year.", year);
}
  else
{
 if(year%4==0)

 printf("%d is a leap year.", year);
  else
 printf("%d is not a leap year.", year );
     }
 
     return 0;
```
![](https://i.imgur.com/vyFrUq5.jpg)

## 12) Program to print table of 5.
```c
/*Table of 5*/

#include<stdio.h>

int main() { int res;

for(int i=1;i<=10;i++) {

res=5*i;
    
   printf("\n5*%d=%d",i,res);
   }

   return 0;
}
```
![](https://i.imgur.com/HIPyv3u.jpg)

## 13) To make simple calculator using switch case.

```c
/*C Program to Create Simple Calculator using Switch Case*/
#include <stdio.h>
 
int main() {
  char Operator;
  float num1, num2, result = 0;
  
printf("\n Please Enter an Operator (+, -, *, /)  :  ");
scanf("%c", &Operator);
    
printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
scanf("%f%f", &num1, &num2);
    
switch(Operator)
    {
      case '+':
        result = num1 + num2;
        break;
      case '-':
        result = num1 - num2;
        break;
      case '*':
        result = num1 * num2;
        break;
      case '/':
        result = num1 / num2;
        break;
    default:
      printf("\n You have enetered an Invalid Operator ");                  
  }
  
printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);
  
return 0;
}
```
![](https://i.imgur.com/bkxcuWa.jpg)
  


## 14) To calculate reverse of a number.

```c
/*To find reverse of a Number*/

include<stdio.h>
int main()
{  
 int n,reverse=0;
 printf("enter a number to reverse\n");
 scanf("%d",&n);
 while(n!=0)
  {
    reverse = reverse*10;
    reverse= reverse+n%10;
    n=n/10;
  }
   printf("reverse of entered number is =%d\n",reverse);
  return 0;
  }
```
![](https://i.imgur.com/1sS8lD4.jpg)



## 15) To check whether number is palindrome or not.

```c
/*Palindrome*/

include<stdio.h>
void main()
{
  int n, reverse=0,t;
  printf("enter a number to check if it is palindrome or not$
 scanf("%d",&n);
 t=n;
 while(t!=0)
 {  
   reverse= reverse*10;
   reverse= reverse+ t%10;
   t= t/10;
  }
   if(n==reverse)
   printf("%d is a palindrome number .\n",n);
  else
    printf("%d isn't a palindrome number.\n",n);
   
 }	
```
![](https://i.imgur.com/L7kZcDJ.jpg)


### 16) To check whether a number is prime or not.

```c
/*Program to check prime no.*/
#include<stdio.h>               
void main()                     
{                                               
 int a,i,c=0;                           
 printf("enter the number");
 scanf("%d",&a);
 for(i=2;i<a;i++)
 {
  if(a%i ==0)
  {
   c++;
   break;
  }
 }
  if (c==0)
  printf("\n it is prime number");
  else
 {
  printf("it is not prime number");
 }
}
```
    
 ![](https://i.imgur.com/IeVOdFY.jpg)  



### 17) Program to print prime number to 100.
```c
/*Prime number from 1 to 100*/
 
 #include<stdio.h>
int main()
{
int i,j;
for(i=2;i<100;i++)
{       
for(j=2;j<i;j++)
{
if(i%j==0)
break;  
else{ if(i==j+1)
printf("%d \n",i);
}
}       
}       
}
```
![](https://i.imgur.com/iCC56Fv.jpg)
   
   
   
## 18) Program to check whether a number is armstrong or not.
```c
/*To check armstrong number*/
#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
    return 0;
}
```
![](https://i.imgur.com/be7FJrt.jpg)
## 19) Print Different Patterns.

#### i) 
```c
/*Pattern 1*/
#include <stdio.h>
int main() {
    
   int i,j,r;
    
   printf("Enter number of rows: ");
    scanf("%d",&r);
    
for(i=1; i<=r; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
```
![](https://i.imgur.com/yTpgbf5.jpg)
```c
#### ii) 

  /*Pattern 2*/
#include <stdio.h>
int main() {
    
   int r,i,j,num= 1;
   printf("Enter number of rows: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;++j)
        {
            printf("%d",num);
            ++num;
        }
        printf("\n");
    }
    return 0;
}
```
![](https://i.imgur.com/ia5Gu09.jpg) 
 
### 20)  Program to find largest from 1 dimensional array.
 
 ```c
 /*Largest in 1 dimensional array*/

#include<stdio.h>
void main()
{
 int a,arr[100],s,i;
  printf("enter array size(max-100)");
  scanf("%d",&s);
   printf("enter array numbers");
   for(i=0;i<s;i++)
 {
     scanf("%d",&arr[i]);
  }
   printf("searching for largest number..\n");
  a=arr[0];
   for(i=0;i<s;i++)
 {
   if(a<arr[i])

   {  
      a=arr[i];
   }
 }
  printf("largest number =%d",a);
 }
 ```
![](https://i.imgur.com/aM843fd.jpg)
### 21) To find sumof the N natural numbers in an array.
```c
/*Sum of N no.s in array*/
     
#include<stdio.h>

int main()
{
printf("Enter the number of integers you want to add: ");
    scanf("%d", &n);

 printf("\n\nEnter %d integers \n\n", n);

for(c = 0; c < n; c++)
   {
        scanf("%d", &array[c]);
        sum += array[c];    // same as sum = sum + array[c]
    }

  printf("\n\nSum = %d\n\n", sum);
    return 0;
    }

```
![](https://i.imgur.com/miZ2c33.jpg)

     
### 22) Program to add two matrices .
```c
/*Addition of matrix*/
    #include<stdio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3],i,j;
 printf("enter 3*3 matrix 1 elements:");
 for(i=0;i<3;i++)
 {
  for(j=0; j<3; j++)
  scanf("%d",&a[i][j]);
 }
 printf("enter 3*3 matrix 2 elemnts:");
 for(i=0;i<3;i++)
  {                   
   for(j=0; j<3; j++)
   scanf("%d",&b[i][j]);
  }
 printf("\n adding two matrix");
 for(i=0;i<3;i++)
 {
  for(j=0; j<3; j++)
  c[i][j]=a[i][j]+b[i][j];
 }
 printf("\n matrix added successfully");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  printf("%d",c[i][j]);
 printf("\n");
 }
}
```
![](https://i.imgur.com/WAysnqK.jpg)


## 23) Program to multiply two matrices 
```c
#include<stdio.h>
void main()
{
int m,n,p,q,c,d,k,sum=0;
int first[10][10],second[10][10],multiply[10][10];
 printf("enter a number of rows and coloums of first matrix\n");
scanf("%d%d",&m,&n);
 printf("enter elements of first matrix\n");
 for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&first[c][d]);
 printf("enter number of rows and coloums of second matrix\n");
scanf("%d%d",&p,&q);
 if(n!=p)
  printf("the matrices can't be  multiplied with each other.\n");
 else
{
 printf("enter elements of second matrix\n");
 for(c=0;c<p;c++)
 for(d=0;d<q;d++)
 scanf("%d", &second[c][d]);
 for(c=0;c<m;c++){
 for(d=0;d<q;d++) {
 for(k=0; k<p;k++) {
 sum= sum+first[c][k]*second[k][d];
 }
 multiply[c][d]=sum;
sum=0;
}
}
 printf("product of the matrices.\n");
 for(c=0;c<m;c++) {
for(d=0;d<q;d++)
printf("%d\t",multiply[c][d]);
printf("\n");
}
}
}
```
![](https://i.imgur.com/bD8rzl9.jpg)
## 24) Program to check whether  a string is palindrome or not .
```c
#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        printf("%s is not a palindrome\n", string1);
    }    
    else {
        printf("%s is a palindrome\n", string1);
    }
    return 0;
}
```
![](https://i.imgur.com/xHUVEV8.jpg)    


## 25) Program to perform basic operations like lenghth of string ,string concat, string copy ,string compare and string reverse.

```c
///fundamental string operation, lenth, concatenation, compare and copy strings without string.h

#include <stdio.h> 
#include <stdlib.h>
  
int find_length(char string[]) {
    int len = 0, i;
    for (i = 0; string[i] != '\0'; i++) {
      len++;
    }
    return len;
  }

void join_strings(char string1[], char string2[]) {
  int i, len1, len2;
  len1 = find_length(string1);
  len2 = find_length(string2);
  for (i = len1; i < len1 + len2; i++) {
    string1[i] = string2[i - len1];
  }
  string1[i] = '\0'; //adding null character at the end of input
}
/*returns 0 if thery are same otherwise returns 1*/

int compare_strings(char string1[], char string2[]) {
  int len1, len2, i, count = 0;
  len1 = find_length(string1);
  len2 = find_length(string2);
   if (len1 != len2)
    return 1;
  for (i = 0; i < len1; i++) {
    if (string1[i] == string2[i])
      count++;
  }
  if (count == len1)
    return 0;
  return 1;
}

void copy_string(char destination[], char source[]) {
  int len, i;
  len = find_length(source);
  for (i = 0; i < len; i++) {
    destination[i] = source[i];
  }
  destination[i] = '\0';
}

int main() {
  char string1[20], string2[20]; //string variables declaration with size 20
  int choice;
  while (1) {
    printf("\n1. Find Length \n2. Concatenate \n3. Compare \n4. Copy \n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      printf("Enter the string: ");
      scanf("%s", string1);
      printf("The length of string is %d", find_length(string1));
      break;
    case 2:
      printf("Enter two strings: ");
      scanf("%s%s", string1, string2);
      join_strings(string1, string2);
      printf("The concatenated string is %s", string1);
      break;
    case 3:
      printf("Enter two strings: ");
      scanf("%s%s", string1, string2);
      if (compare_strings(string1, string2) == 0) {
        printf("They are equal");
      } else {
        printf("They are not equal");
      }
      break;
    case 4:
      printf("Enter a string: ");
      scanf("%s", string1);
      printf("String1 = %s\n");
      printf("After copying string1 to string 2\n");
      copy_string(string2, string1);
      printf("String2 = %s", string2);
      break;
    case 5:
      exit(0);
    }
  }
  return 0;
}
```
![](https://i.imgur.com/xlHoS8l.jpg)

## 26) Programs to swap two numbers using call by value and call by refernce.
```c
#### call by refernce:-

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
![](https://i.imgur.com/BnESJbI.jpg)
```c
#### call by value:- 
   
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
![](https://i.imgur.com/X1ASWbE.jpg)
    
    
## 27) Program to calculate factorial of a number with and without recursion both.

```c
#### Recursion:-

#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    
int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
```
![](https://i.imgur.com/xeAA2RA.jpg)
#### without recrsion:-
```c
#include <stdio.h>

int main() {
  
  int c, n, fact = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
  return 0;
}
```
![](https://i.imgur.com/SJkeDEw.jpg)

## 28) Program to print fibonacci series with and without recursion both.
```c
#### Without recursion:-

/*Program to print fibonaci series*/

#include<stdio.h>
void series(int);		//prototype

int main() {

  int n;

printf("\n\nEnter the number of terms you wish.......");
  scanf("%d",&n);
  printf("\n\n");

  series(n);			// function call
  printf("\n\n\n");

  return 0;
}

void series(int n)		// definition

{
   int t1=0,t2=1,next;

   for(int i=0;i<=n;i++)
  {
    printf("%d\t",t1);

    next=t1+t2;
    t1=t2;
    t2=next;
  }
}
```
![](https://i.imgur.com/IYPQUGA.jpg)
#### with recursion:-

```c
#include <stdio.h>
int fibo(int);
 
int main() {

int num;
int result;
 
  printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        result = fibo(num);
        printf("The %d number in fibonacci series is %d\n", num, result);
    }
    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}
```
![](https://i.imgur.com/Jc3NdTl.jpg)

## 29) Program to calculate average of 5 numbers using function.

```c
 /*program to find average of 5 numbers */
 #include<stdio.h>
void main()
{
 int a,b,c,d,e,sum,avg;
 printf("enter the five values");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 sum=a+b+c+d+e;
 avg= sum/5;
 printf("average=%d",avg);
 }
```
![](https://i.imgur.com/JgKhFre.jpg)
 
## 30) Program to implement linear serach and binary.

```c
/*Program to implement linear search and Binary search*/
/*BINARY SEARCH*/
#include<stdio.h>
void main()
{
  int c, first ,last,middle,n,search,array[100];
  printf("enter number of elements\n");
  scanf("%d",&n);
  printf("enter %d integers\n",n);
  for(c=0; c<n ; c++)
 scanf("%d", &array[c]);
  printf("enter value to find\n");
  scanf("%d", &search);
  first=0;
  last= n-1;
  middle = (first+last)/2;
   while(first<= last){
     if (array[middle]< search)
      first=middle+1;
 else if (array[middle]== search){
  printf("%d found at location %d.\n",search,middle+1);
break;
}
 else 
last=middle-1;
 middle = (first+ last)/2;
 }
if (first> last)
  printf("not found! %d isn't present in the list.\n",search);
 }
```
![](https://i.imgur.com/wHoQvoN.jpg)

/*LINEAR SEARCH*/
```c
#include <stdio.h>
 
int main()
{
  int array[100], search, c, n;
 
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
 
  printf("Enter %d integer(s)\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  printf("Enter a number to search\n");
  scanf("%d", &search);
 
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", search);
 
  return 0;
}
```
![](https://i.imgur.com/jZsWoGA.jpg)


## 31) Program to implement bubble sort.

```c
   /*Bubble sort implementation*/
 
#include <stdio.h>

#include<stdio.h>
void main()
{
 int array[100],n,c,d,swap;
 printf("enter number of elements\n");
 scanf("%d",&n);
 printf("enter %d integers\n",n);
 for(c=0;c<n;c++)
 scanf("%d",&array[c]);
 for(c=0;c<n-1;c++)
 {
 for(d=0;d<n-c-1;d++)
 {
 if (array[d]>array[d+1])
{
 swap=array[d];
 array[d]=array[d+1];
 array[d+1]=swap;
 }
}
}
printf("sorted list in ascending order:\n");
for(c=0;c<n;c++)
printf("%d\n",array[c]);
}
```
![](https://i.imgur.com/Our3B7J.jpg)
## 32) Program to store information of 10 students using array of structures.


```c
/* Structures for student */

#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];
int main()
{
    int i;
    printf("Enter information of students:\n");
    for(i=0; i<3; ++i)
    {
        s[i].roll = i+1;
        printf("\nFor roll number%d,\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<3; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}
```
![](https://i.imgur.com/3rka5rC.jpg)

## 33) Programs to compute the transpose of a matrix.

```c
#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    // Storing elements of the matrix
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        
// Displaying the matrix a[][] */
    printf("\nEntered Matrix: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }
    // Finding the transpose of matrix a
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            transpose[j][i] = a[i][j];
        }
    // Displaying the transpose of matrix a
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }
    return 0;
}
```
![](https://i.imgur.com/QBVxPln.jpg)

## 34) Program to print the address of variable using pointer.

```c   
#include <stdio.h>
int main() {
  int a;
  int *pt;

  a = 10;
  pt = &a;

  printf("\n[&a ]:Address of A = %p", &a);


  return 0;
}
```
![](https://i.imgur.com/Z1mLkzt.jpg)

## 35) Program to access array using pointer.
```c
#include <stdio.h>
int main()
{
   int data[5],i;
   printf("Enter elements: ");
   for(i = 0; i < 5; ++i)
     scanf("%d", data + i);
   printf("You entered: \n");
   for(i = 0; i < 5; ++i)
      printf("%d\n", *(data + i));
   return 0;
}
```
![](https://i.imgur.com/WMVgw9g.jpg)
