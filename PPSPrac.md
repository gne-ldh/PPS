![](https://i.imgur.com/eBZLVAa.png)
---
## **<p align="center"> ESC-18104/18105 Programming for Problem Solving </p>**
---
### **<p align="center">Name - _Rishab Mehndiratta_ </p>**
### **<p align="center">CRN - _1915346_</p>**
### **<p align="center">Branch - _CSE C2_</p>**
### **<p align="center">Submitted to - _Ms. Goldendeep Kaur_</p>**
---


### 1) To print name.
```C
      /* Program to print your name */

#include<stdio.h>
int main() {

puts("~~~~~~~~~~~~~~");
puts("Rishab");
puts("~~~~~~~~~~~~~~");

return 0;
}
```
#### Result:  
![result](https://i.imgur.com/ZIBEU5M.png)
---
### 2) To print College address.
```C
        /* College Address */
 
#include<stdio.h>
int main() {

printf("\n\t\t\t -Guru Nanak Dev Engineering College,");
printf("\n\t\t\t -Gill Road,");
printf("\n\t\t\t -Ludhiana , Punjab\n");

return 0;
}
```
#### Result:
![result address](https://i.imgur.com/6d1VQuI.png)

### 3) Program to add two integers.
```C
     /* To add two integers */

#include <stdio.h>
int main() {
    
int a,b;

printf("\nEnter the numbers....");

printf("\nA:");
scanf("%d",&a);

printf("\nB:");
scanf("%d",&b);

a=a+b;

printf("\n Sum of the number is %d \n",a);

return 0;

}
```
#### Result:
![addInt.c](https://i.imgur.com/70km7pn.png)

### 4) Program to find quotient and remainder.
```C
    /* To find quotient and remainder */

#include <stdio.h>

int main() {
    
int a,b,r,q;

printf("\nEnter the Dividend: ");
scanf("%d",&a);

printf("\nEnter the divisor: ");
scanf("%d",&b);

r=a%b;
q=a/b;

printf("\nRemainder: %d",r);
printf("\nQuotient: %d \n",q);

return 0;
}
```
##### Result :
![quotient.c](https://i.imgur.com/xGSua2X.png)

### 5) Program to swap two variables without 3rd variable.
```C
    /* Swapping without 3rd variable  */

#include <stdio.h>
int main() {
    
int a,b;

printf("Enter the value of A: ");
scanf("%d",&a);

printf("Enter the value of B: ");
scanf("%d",&b);

   a = a + b;
   b = a - b;
   a = a - b;
   
printf("\nA: %d",a);
printf("\nB: %d"\n,b);

return 0;
}
```
#### Result: 
![swappingWithout.c](https://i.imgur.com/u26diBO.png)
### 6) Program to check even odd number.
```C
/* To find whether number is even or odd */

#include<stdio.h>
int main() { 

  int num;

  printf("Enter the Number:");
  scanf("%d",&num);

  if(num%2==0)
  printf("\nNumber is Even");

  else
  printf("\nNumber is Odd\n");

  printf("\n");
  return 0;
}
```
#### Result:
![EvenOdd.c](https://i.imgur.com/S5KIreQ.png)
### 7) Finding greteast of two numbers.
```C
     /* Largest one in two */

#include<stdio.h>

int main() {
    int a,b;
    printf("Enter any two number(A and B): ");
    scanf("%d%d", &a,&b);
    
if(a>b)
printf("\nA is largest");
else
        printf("\nB is largest\n");
    
return 0;
}
```
#### Result:
![greatest.c](https://i.imgur.com/vJJ0a4I.png)
### 8) Find greatest of three number .
```C
/* Largest of three number */

#include<stdio.h>
int main() {
int x, y, z, large;
        
 printf(" Enter any three integer numbers for x, y, z :  ") ;

scanf("%d %d %d", &x, &y, &z) ;

large = (x > y ? ( x > z ? x : z) : (y > z ? y : z)) ;

printf("\n\n Largest  or biggest or greatest or maximum among 3 numbers using Conditional ternary Operator :  %d", large) ;
       
 return 0;
}
```
#### Result:
![greatest3.c](https://i.imgur.com/6kCn1ed.png)
### 9) Program to assign grade to student according to percentage.
```C
/* To find grade of a student by marks */

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
      printf("\nA\n");
      
  }
  
  else if (perc>=80 && perc<90)
  { 
      printf("\nB\n");
      
  }
  
  else if(perc>=70 && perc<80)
  {
      printf("\nC\n");
      
  }
  
  else if(perc>=60 && perc<70)
  { 
      printf("\nD\n");
  }
  else if(perc>=50 && perc<60)
  {
      printf("\nE\n");
  }
  else 
     {
          printf("\nScope of Improvement\n");
    } 
    return 0;
}
```
#### Result: 
![Percentage.c](https://i.imgur.com/J4Hvbq1.png)
### 10) Program to print roots of quadratic equation.
```C
/*Program to print roots */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    float a, b, c, root1, root2;
    float realp, imagp, disc;
 
printf("Enter the values of a, b and c \n");
    scanf("%f %f %f", &a, &b, &c);
    
/* If a = 0, it is not a quadratic equation */

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
### 11) Program to check year is leap or not.
```C
/* To find whether year is leap or not */

#include<stdio.h>
int main() { 

  int year,temp;

  printf("Enter teh year: ");
  scanf("%d",&year);

  temp=year%4;

  if(year%100==0)
  {
     if(year%400==0)
     printf("\nLeap year...");
  }

  else
  {
    if(year%4==0)
    printf("\nLeap year\n");

else
    printf("\nNot a Leap year\n");
   }
  
  return 0;
}
```
#### Result:
![leapYear.c](https://i.imgur.com/d5hdSqL.png)
### 12) Program to print table of 5.
```C
/* Table of 5 */

#include<stdio.h>

int main() { 
  int i,res;

for(i=0;i<=10;i++) {
res = 5*i;
       printf("5 X %d = %d\n",i,res);
   }

   return 0;
}
```
#### Result:
![multiply.c](https://i.imgur.com/Ggjc5kb.png)
### 13) To make simple calculator using switch case.
```C
/* C Program to Create Simple Calculator using Switch Case */
 
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
  
printf("\n The result of %.2f %c %.2f  = %.2f\n", num1, Operator, num2, result);
	
return 0;
}
```
#### Result:
![](https://i.imgur.com/MWA0qG0.png)
### 14) To calculate reverse of a number.
```C
/* To find reverse of a Number*/

#include<stdio.h>
int main() { 

  int num,rev=0;

  printf("\nEnter the Number:");
  scanf("%ld",&num);

while(num!=0)
{ 
    rev = rev * 10;
    rev = rev + num%10;
    num = num/10;
  }
  

  printf("\nReversed number:%d\n",rev);

  printf("\n\n");
  return 0;
}
```
#### Result: 
![](https://i.imgur.com/RTj5v0K.png)
### 15) To check whether number is palindrome or not.
```C
/* Palindrome */

#include<stdio.h>
int main() { 

  int n,rev=0,check,rem;

  printf("\nEnter the number:");
  scanf("%d",&n);
  check=n;
  
  while( n!=0 )
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
  
  if(rev==check)
  printf("\nNumber is a Pallindrome\n");
  
  else 
  printf("\nNumber is not a Pallindrome\n");
  
  printf("\n\n");
  return 0;
}
```
#### Result:
![](https://i.imgur.com/kJGiObD.png)
### 16) To check whether a number is prime or not.
```C
/* Program to check prime no. */

#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
   int num, j, flag;
  
  printf("Enter a number \n");
   scanf("%d", &num);
 
  if (num <= 1)
    {
        printf("%d is not a prime numbers \n", num);
        exit(1);
    }
    flag = 0;
    for (j = 2; j <= num / 2; j++)
    {
        if ((num % j) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number \n", num);
     else
        printf("%d is not a prime number \n", num);

return 0;
    
}
```
#### Result:
![](https://i.imgur.com/SBPNF6O.png)
### 17) Program to print prime number to 100.
```C
/* Prime number from 1 to 100 */
 
 #include<stdio.h>

   int main(){

int numbr,k,remark;

printf(" The prime numbers between 1 and 100 : \n");

   for(numbr=2;numbr<=100;++numbr)

  {

   remark=0;

  for(k=2;k<=numbr/2;k++){

  if((numbr % k) == 0){

 remark++;

  break;
     }

   }

   if(remark==0)
    printf("\n    %d ",numbr);

 }

  return 0;

   } 
 ``` 
 #### Result:
 ![](https://i.imgur.com/56jiKH1.png)
### 18) Program to check whether a number is armstrong or not.
```C
/* To check armstrong number */

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
        printf("%d is an Armstrong number.\n",number);
    else
        printf("%d is not an Armstrong number\n.",number);

return 0;
}

```
#### Result:
![](https://i.imgur.com/lghRXZe.png)
### 19) Print Different Patterns.
#### i) Pattern 1.
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
#### Result:
![](https://i.imgur.com/BvdTmjg.png)
#### ii) Pattern 2. 
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
####Result: 
![](https://i.imgur.com/fI3noch.png)
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
#### Result:
![](https://i.imgur.com/MCiLLyl.png)
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
#### Result:
![](https://i.imgur.com/C84Fwdc.png)
### 22) Program to add two matrices .
```C
/*  Addition of matrix */
    
#include <stdio.h>
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    // Adding Two matrices
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    // Displaying the result
    printf("\nSum of two matrices: \n");
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            printf("%d   ",sum[i][j]);
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    
    return 0;
}
```
#### Result:
![](https://i.imgur.com/YPkbRbE.png)

### 23) Program to multiply two matrices .
```C
/* Multiplation of matrices */
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);
    
    while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }
    
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }
   
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            result[i][j] = 0;
        }
 
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
    
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == c2-1)
                printf("\n\n");
        }
    return 0;
}
```
#### Result:
![](https://i.imgur.com/FirSHr7.png)

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
 	    printf("string is palindrome\n");
    else
        printf("string is not palindrome\n");
 
return 0;
}
```
#### Result:
![](https://i.imgur.com/aIHWhAb.png)
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
#### Result:
![](https://i.imgur.com/2KNH7TD.png)
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
#### Result:
![]()
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
#### Result:
![]()
   
### 27) Program to calculate factorial of a number with and without recursion both.
```C
/* Recursion */

#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    
int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, multiplyNumbers(n));
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
#### Result:
![](https://i.imgur.com/EKlxzF2.png)

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
#### Result:
![](https://i.imgur.com/PqmuBQI.png)
### 28) Program to print fibonacci series with and without recursion both.
```C
/* Program to print fibonaci series with recursion */

#include<stdio.h>
void series(int);		//prototype

int main() {

  int n;

printf("\n\nEnter the number of terms you wish: ");
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
    printf("%d\n",t1);

    next=t1+t2;
    t1=t2;
    t2=next;
  }
}
```
#### Result:
![](https://i.imgur.com/jr4y7zQ.png)
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
#### Result:
![](https://i.imgur.com/1PIBSLt.png)
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
#### Result:
![](https://i.imgur.com/6kQ0e42.png)
### 30) Program to implement linear serach and binary.
```C
/* Linear Search */
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
    if (array[c] == search)                                      
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
#### Result:
![](https://i.imgur.com/ZuG2NKm.png)

```c
/* Binary Search */

#include <stdio.h>
 
int main()
{
   int c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);
 
   return 0;  
}
```
#### Result:
![](https://i.imgur.com/kzAQpnP.png)
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
#### Result:
![](https://i.imgur.com/5EpIq52.png)
### 32) Program to store information of 10 students using array of structures.
```C
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
#### Result:
![](https://i.imgur.com/IKvGSkG.png)
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
#### Result:
![](https://i.imgur.com/6wHML2b.png)
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
#### Result:
![](https://i.imgur.com/EChuja6.png)

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
```
#### Result:
![](https://i.imgur.com/JqPFaLZ.png)
# **<p align="center"> ****** ThankYou ****** </p>**
