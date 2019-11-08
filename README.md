---
# **Programming for Problem Solving**
## **Name** ~ Payal
## **Class roll no. ~ 1915338**
## **Branch ~ CSE-C2**
## **Submitted to ~ Ms. Goldendeep Kaur**
---
### 1) To display name:
```C
#include<stdio.h>
int main() {

puts("**************");
puts("Payal Kash");
puts("**************");

return 0;
}
```
Output:
![](https://i.imgur.com/jqoMMI7.png)
### 2) To display College address:
```C
#include<stdio.h>
int main() {

printf("\n\t\t\tGuru Nanak Dev Engineering College,");
printf("\n\t\t\tGill Road,");
printf("\n\t\t\tLudhiana , Punjab");

return 0;
}
```
Output:
![](https://i.imgur.com/qZOwThe.png)
### 3) Adding two integers:
```C
#include <stdio.h>
int main() {
    
int x,y,sum;

printf("Enter two numbers: \n");
scanf("%d %d",&x,&y);
sum=x+y;
printf("\n Sum of the two numbers: %d ",sum);

return 0;

}
```
Output:
![](https://i.imgur.com/ZXegOv3.png)
### 4) To calculate quotient and remainder:
```C
#include <stdio.h>

int main() {
    
int a,b,r,q;

printf("\nEnter the dividend:");
scanf("%d",&a);

printf("\nEnter the divisor:");
scanf("%d",&b);

r=a%b;
q=a/b;

printf("\nRemainder: %d",r);
printf("\nQuotient: %d",q);

return 0;
}
```
Output:
![](https://i.imgur.com/4EPWYqq.png)
### 5) Swapping two numbers without using third variable:
```C
#include <stdio.h>
int main() {
    
int a,b;

printf("\nEnter the value of A: ");
scanf("%d",&a);

printf("\nEnter the value of B: ");
scanf("%d",&b);

   a = a + b;
   b = a - b;
   a = a - b;
printf("After swapping: \n");   
printf("A: %d and B: %d\n",a,b);

return 0;
}
```
Output:
![](https://i.imgur.com/wAlQcwj.png)
### 6) To check whether a number is even or odd:
```C
                                                                                                     
#include<stdio.h>                                                                                    
void main(){                                                                                         
int x;                                                                                               
printf("Enter a number:");                                                                           
scanf("%d",&x);                                                                                       
if(x%2==0)                                                                                           
printf("The number is even.\n");                                                                       
else                                                                                                 
printf("The number is odd.\n");                                                                        
                                                                                                     
}                                                                                                    
```
Output:
![](https://i.imgur.com/FcrxlVI.png)
### 7) Finding greater of two numbers:
```C

#include<stdio.h>

int main() {
    int a,b;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &a, &b);
    
if(a>b)
printf("%d is greater.\n",a);
else
printf("%d is greater.\n",b);
    
return 0;
}
```
Output:
![](https://i.imgur.com/R3QrMwn.png)
### 8) Finding greatest of three numbers:
```C
#include<stdio.h>                                                                                   
void main(){                                                                                        
                                                                                                    
int a,b,c;                                                                                          
printf("Enter three numbers:\n");                                                                      
scanf("%d %d %d",&a,&b,&c);                                                                         
if(a>b && a>c)                                                                                      
{                                                                                                   
printf("%d is the greatest number\n",a);                                                            
}                                                                                                   
else if(b>a && b>c)                                                                                 
{                                                                                                   
printf("%d is the greatest number\n",b);                                                            
}                                                                                                   
else{                                                                                               
printf("%d is the greatest number\n",c);}                                                           
}                                                                                                   
                     

```
Output:
![](https://i.imgur.com/HQfKrm2.png)
### 9) Calculating grade:
```C
#include<stdio.h>                                                                                   
void main()                                                                                         
{                                                                                                   
int marks;                                                                                          
printf("Enter marks:");                                                                             
scanf("%d",&marks);                                                                                 
                                                                                                    
if(marks<=100 && marks>90){                                                                         
printf("Your grade is: A1\n");                                                                      
                                                                                                    
}                                                                                                   
else if(marks<=90 && marks>80)                                                                      
{                                                                                                   
printf("Your grade is A2\n");                                                                       
}                                                                                                   
else if(marks<=80 && marks>70)                                                                      
{                                                                                                   
printf("Your grade is B1\n");                                                                       
}                                                                                                   
else if(marks<=70 && marks>60)                                                                      
{                                                                                                   
printf("Your grade is B2\n"); 
}                                                                                                   
else                                                                                                
{                                                                                                   
printf("FAIL\n");                                                                                   
}                                                                                                   
}                                                                                                   
       
```
Output:
![](https://i.imgur.com/SgRdnip.png)
### 10) Finding the roots of a quadratic equation:
```C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    float a, b, c, root1, root2;
    float realp, imagp, disc;
 
printf("Enter the values of a, b and c \n");
    scanf("%f %f %f", &a, &b, &c);

if (a == 0 || b == 0 || c == 0)
    {
        printf("Error: Roots cannot be determined \n");
        exit(1);
    }
    else
    {
        disc = b * b - 4.0 * a * c;
        if (disc < 0)
        {
            printf("Imaginary Roots\n");
            realp = -b / (2.0 * a) ;
            imagp = sqrt(abs(disc)) / (2.0 * a);
            printf("Root1 = %f  +i %f\n", realp, imagp);
            printf("Root2 = %f  -i %f\n", realp, imagp);
        }

else if (disc == 0)
        {
            printf("Roots are real and equal\n");
            root1 = -b / (2.0 * a);
            root2 = root1;
            printf("Root1 = %f\n", root1);
            printf("Root2 = %f\n", root2);
        }

else if (disc > 0 )
        {
            printf("Roots are real and distinct \n");
            root1 =(-b + sqrt(disc)) / (2.0 * a);
            root2 =(-b - sqrt(disc)) / (2.0 * a);
            printf("Root1 = %f  \n", root1);
            printf("Root2 = %f  \n", root2);
        }

}
   return 0;
}
```
### 11) To check whether a year is leap or not:
```C
#include<stdio.h>
int main() { 

  int year;

  printf("Enter the year:");
  scanf("%d",&year);
  if(year%4==0)
     printf("It is a leap year.\n");
  else
  printf("Not a leap year.\n");
  
  return 0;
}
```
Output:
![](https://i.imgur.com/LpI3yd5.png)
### 12) To print the table of any number:
```C
                                                                                                    
#include<stdio.h>                                                                                   
int main(){                                                                                         
int x,i=0;                                                                                          
printf("Enter a number: ");                                                                         
scanf("%d",&x);                                                                                     
while(i<=10)                                                                                        
{                                                                                                   
printf("%d X %d = %d\n",x,i,x*i);                                                                   
i += 1;                                                                                             
}                                                                                                   
return 0;                                                                                           
}                                                                                                   
             
```
Output:
![](https://i.imgur.com/qkt3Hkh.png)
### 13) A simple calculator:
```C
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
Output:
![](https://i.imgur.com/JnqN6ek.png)
### 14) Reverse of a number:
```C
                                                                                                   
#include<stdio.h>                                                                                   
void main()                                                                                         
{                                                                                                   
                                                                                                    
int x;                                                                                              
printf("Enter a number:");                                                                          
scanf("%d",&x);                                                                                     
int reverse,rem;                                                                                    
int y=x;                                                                                            
while(y!=0)                                                                                         
{                                                                                                   
rem=y%10;                                                                                           
reverse=reverse*10+rem;                                                                             
y=y/10;                                                                                             
                                                                                                    
}                                                                                                   
printf("Reversed number is %d \n",reverse);                                                         
     }                                                                                               
                        
```
Output:
![](https://i.imgur.com/sIGu1Ol.png)
### 15) To check whether a number is palindrome or not:                                                                                 
```C
#include<stdio.h>                                                                                   
void main()                                                                                         
{                                                                                                   
                                                                                                    
int x;                                                                                              
printf("Enter a number:");                                                                          
scanf("%d",&x);                                                                                     
int reverse,rem;                                                                                    
int y=x;                                                                                            
while(y!=0)                                                                                         
{                                                                                                   
rem=y%10;                                                                                           
reverse=reverse*10+rem;                                                                             
y=y/10;                                                                                             
                                                                                                    
}                                                                                                   
printf("Reversed number is %d \n",reverse);                                                         
                                                                                                    
if(x==reverse)                                                                                      
printf("The number is a palindrome\n");                                                             
else                                                                                                
printf("It is not a palindrome\n");o 

```
Output:
![](https://i.imgur.com/eij72SW.png)

                                                                                                    

### 16) To check whether a number is prime or not:
```C
include<stdio.h>                                                                                  
void main(){                                                                                       
int n,counter=0;                                                                                   
printf("Enter a number: ");                                                                        
scanf("%d",&n);                                                                                    
int i=n;                                                                                           
while(i!=0)                                                                                        
{                                                                                                  
if(n%i==0){                                                                                        
counter=counter+1;                                                                                 
}                                                                                                  
i=i-1;                                                                                             
}                                                                                                  
if(counter>2)                                                                                      
printf("The number is not prime.\n");                                                              
else                                                                                               
printf("The number is prime.\n");                                                                  
                                                                                                   
}                   

```
Output:
![](https://i.imgur.com/6WGbQ2o.png)
### 17) To print a series of prime numbers:
```C
#include<stdio.h>                                                                                  
int main(){                                                                                        
int a,b,i,end;                                                                                     
printf("Enter a number: ");                                                                        
scanf("%d",&end);                                                                                  
printf("The series of prime numbers till %d is: \n",end);                                          
for(a=1;a<=end;a++)                                                                                
{                                                                                                  
i=0;                                                                                               
for(b=1;b<=a;b++)                                                                                  
{                                                                                                  
if(a%b==0)                                                                                         
i++;                                                                                               
                                                                                                   
}                                                                                                  
if(i==2)                                                                                           
printf("\n%d \t",a);                                                                               
}                                                                                                  
return 0;                                                                                          
                                                                                                   
}                 

 ```
 Output:
 ![](https://i.imgur.com/DyJIOIm.png)
### 18) To check whether a number is armstrong or not:
```C
#include<stdio.h>                                                                                  
void main(){                                                                                       
int a,b,rem,x=0;                                                                                   
                                                                                                   
printf("Enter a number: ");                                                                        
scanf("%d",&a);                                                                                    
b=a;                                                                                               
while(a!=0)                                                                                        
{                                                                                                  
rem=a%10;                                                                                          
x= x+ rem*rem*rem;                                                                                 
a=a/10;                                                                                            
}                                                                                                  
                                                                                                   
if(x==b)                                                                                           
printf("The number is armstrong\n");                                                               
else                                                                                               
printf("The number is not armstrong\n");                                                           
}              

```
Output:
![](https://i.imgur.com/gvT3ODL.png)
### 19) To print Different Patterns:
i) Pattern 1.
```C
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
### ii) Pattern 2. 
```C
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
### 20) Program to find largest from 1 dimensional array.
```C 
/* Largest in 1 dimensional array */

#include <stdio.h>
int main() {
    
   int i, n;
   float arr[100];
    
   printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");
    
    
// Stores number entered by the user
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }
    // Loop to store largest number to arr[0]
    for(i = 1; i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);
    return 0;
}
```
### 21) To find sumof the N natural numbers in an array.
```C
/* Sum of N no.s in array */
     
#include<stdio.h>

int main() {
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n, sum = 0, c, array[100];

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
### 22) Program to add two matrices .
```C
/*  Addition of matrix */
    
#include <stdio.h>
 
int main() {
   
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}
```
### 23) Program to multiply two matrices .
```C
/* Multiplation of matrices */

#include <stdio.h>
int main()
     {
      int m, n, p, q, c, d, k, sum = 0;
      int first[10][10], second[10][10],   multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The matrices can't be multiplied with each other.\n");
  
  else
  {
    printf("Enter elements of second matrix\n");
 
for (c=0;c<p;c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
  for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
   multiply[c][d] = sum;
        sum = 0;
      }
    }
 
   printf("Product of the matrices:\n");
 
   for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
   printf("\n");
    }
  }
 
  return 0;
}
```
### 24) Program to check whether  a string is palindrome or not .
```C
#include<stdio.h>
#include <string.h>
 
int main() {
    char s[1000];
    int i,n,c=0;
 
   printf("Enter  the string : ");
   gets(s);
   n=strlen(s);
 
for(i=0;i<n/2;i++)
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
return 0;
}
```
### 25) Program to perform basic operations like lenghth of string ,string concat, string copy ,string compare and string reverse.
```C
/*Fundamental string operation, lenth, concatenation, compare and copy strings without string.h */

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
### 26) Programs to swap two numbers using call by value and call by refernce.
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
   
### 27) Program to calculate factorial of a number with and without recursion both.
```C
/* Recursion */

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

```C
/* Without recrsion: */

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
### 28) Program to print fibonacci series with and without recursion both.
```C
/* Program to print fibonaci series with recursion */

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
#
```C
// Fibonaci series without  recursion:-
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
### 29) Program to calculate average of 5 numbers using function.
```C
 /* program to find average of 5 numbers  */
 
#include<stdio.h>
int avg(int,int,int,int,int);      // prototype
 
int main() { int a1,a2,a3,a4,a5,res;
   
   printf("\nEnter the numbers respectiively....");
   scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
   
   res=avg(a1,a2,a3,a4,a5);     // function call
   printf("Average of the numbers %d",res);
   
   return 0; 
 }
 
 int avg(int a1,int a2,int a3,int a4,int a5)      // definition
 
 { int p; 
   p=(a1+a2+a3+a4+a5)/5;
   return p;
 }
 ```
### 30) Program to implement linear serach and binary.
 ```C
/* Program to implement linear search and Binary search */

#include <stdio.h>
#include <stdlib.h>

int main() {

/* Declare variables - array_of_number,search_key,i,j,low,high*/

int array[100],search_key,i,j,n,low,high,location,choice;

   void linear_search(int search_key,int array[100],int n);

   void binary_search(int search_key,int array[100],int n);

   clrscr();

/* read the elements of array */

   printf("ENTER THE SIZE OF THE ARRAY:");

   scanf("%d",&n);

printf("ENTER THE ELEMENTS OF THE ARRAY:\n");

   for(i=1;i<=n;i++)
   {
   scanf("%d",&array[i]);

}

/* Get the Search Key element for Linear Search */

   printf("ENTER THE SEARCH KEY:");

   scanf("%d",&search_key);

/* Choice of Search Algorithm */

   printf("___________________\n");

   printf("1.LINEAR SEARCH\n");

   printf("2.BINARY SEARCH\n");

   printf("___________________\n");

   printf("ENTER YOUR CHOICE:");

   scanf("%d",&choice);

   switch(choice)
   {
    case 1:
       linear_search(search_key,array,n);
        break;

   case 2:      binary_search(search_key,array,n);
  break;

default:

 exit(0);

}

  return 0;

}

/* LINEAR SEARCH */

void linear_search(int search_key,int array[100],int n)
    {

/*Declare Variable */

int i,location;

for(i=1;i<=n;i++)
        {

   if(search_key == array[i])
            {

location = i;

printf("______________________________________\n");

printf("The location of Search Key = %d is %d\n",search_key,location);

printf("______________________________________\n");

}

}

}

/* Binary Search to find Search Key */

void binary_search(int search_key,int array[100],int n)
{

  int mid,i,low,high;

   low = 1;

   high = n;

mid = (low + high)/2;

i=1;

while(search_key != array[mid])
{

   if(search_key <= array[mid])
{

 low = 1;

high = mid+1;

mid = (low+high)/2;

  }
        else
        {

  low = mid+1;
    high = n;

 mid = (low+high)/2;
   }

}

printf("__________________________________\n");

printf("location=%d\t",mid);

printf("Search_Key=%d Found!\n",search_key);

printf("__________________________________\n");

}
```
### 31) Program to implement bubble sort.
```C
   /* Bubble sort implementation  */
 
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
      if (array[d] > array[d+1]) /* For decreasing order use < */
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
### 32) Program to store information of 10 students using array of structures.
```C
/* Structures for student */

#include<stdio.h>
struct student
{
  char name[20],address[30];
  int grade,roll,dob;
};

int main()
{
  struct student s[10];
  int i;
  for(i=0;i<10;i++)
  {
    printf("\nEnter records for student[%d]\n",i+1);
    printf("Enter name: ");
    gets(s[i].name);
    printf("Enter address: ");
    gets(s[i].address);
    printf("Enter class, roll number and date of birth(year): ");
    scanf("%d%d%d",&s[i].grade,&s[i].roll,&s[i].dob);
  }
  printf("Records of the 10 students are here");
  for(i=0;i<10;i++)
  {
    printf("\nStudent %d",i+1);
    printf("\nName: %s",s[i].name);
    printf("\nAddress: %s",s[i].address);
    printf("\nClass: %d",s[i].grade);
    printf("\nRoll No.: %d",s[i].roll);
    printf("\nDOB: %d",s[i].dob);
    printf("\n");
  }
  return 0;
}
```
### 33) Programs to compute the transpose of a matrix.
```C
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
### 34) Program to print the address of variable using pointer.
```C
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
### 35) Program to access array using pointer.
```C
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


