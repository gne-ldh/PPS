![](https://ibb.co/W29pwFz) 
---
# Programming for Problem Solving
# Name:- Gurleen Kaur Birdi
# CRN:-1915315
# Branch:- CSE-C1
# submitted to :- Goldendeep Kaur Mam
***
## 1) To print name.

```C
#include<stdio.h>
void main()
{
puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
puts("My name is Guleen Kaur Birdi");
puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}
```
Output :-

![](/image/1.jpg)
***
## 2) To print college address.
```C

#include<stdio.h>
int main() {

printf("\n\t\t\tGuru Nanak Dev Engineering College,");
printf("\n\t\t\tGill Road,");
printf("\n\t\t\tLudhiana , Punjab");

return 0;
}
```
Output :-
![](/image/2.jpg)
***
## 3) Program to add two numbers.
```C
#include<stdio.h>
void main() 
{                                      
int a,b,c;
printf("enter the numbers");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d=%d+%d \n",c,a,b);
}
```
Output:-
![](/image/3.jpg)
***
## 4) Program to find quotient and remainder.
```C
#include <stdio.h>
int main()
 {
int a, b, quo,rem;
printf("Enter a");
scanf("%d", &a);
printf("Enter b");
scanf("%d", &b);
quo = a/ b;
rem = a % b;
printf("Quo = %d\n", quo);
printf("Rem = %d", rem);
 return 0;
}
```
Output:-
![](/image/4.jpg)
***
## 5) Program to swap two no.s without 3rd variable.
```C
#include <stdio.h>
int main() 
{                                       
 int a, b;
 printf("enter two numbers \n");
 scanf("%d%d", &a, &b);                            
 a = a + b;
 b = a - b;
 a = a - b;
 printf("a = %d\nb = %d\n",a,b);                    return 0;
}
```
Output:-
![](/image/5.jpg)
***
## 6) To check even or odd number.
```C
#include<stdio.h>
void main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if (a%2 ==0)
{
printf("The number is even");
}
else
{
printf("The number is odd");
}
}
```
Output:-
![](/image/6.jpg)
***
## 7) Finding greatest of two numbers.
```C
#include<stdio.h>
int main() 
{
    int a,b;
    printf("Enter any two number(A and B): ");
    scanf("%d%d", &a, &b);
    
if(a>b)
printf("\nA is largest....");
else
        printf("\nB is largest.....");
    
return 0;
}
```
Output:-
![](/image/7.jpg)

***
## 8) To find greatest of 3 numbers.
```C
#include <stdio.h>
 
void main()
{
    int num1, num2, num3;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest among three \n");
        }
        else
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)
        printf("num2 is the greatest among three \n");
    else
        printf("num3 is the greatest among three \n");
}
```
Output:-
![](/image/8.jpg)

***
## 9) Program to grade to student according to percentage.
```C
#include<stdio.h>
void main()
{ int marks;
 printf("Enter marks:");
scanf("%d",&marks);
 if(marks<=100 && marks>90)
{ printf("Your grade is: A1\n");
}
else if(marks<=90 && marks>80)
 { printf("Your grade is A2\n");
}
else if(marks<=80 && marks>70)
{ printf("Your grade is B1\n");
}
else if(marks<=70 && marks>60)
{ printf("Your grade is B2\n"); 
 }
 else
 { printf("FAIL\n");
}
}
```
Output:-
![](/image/9.jpg)

***
## 10) Program to print roots of quadric equation.
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
Output:-
![](/image/10.jpg)

***
## 11) Program to check year is leap or not.
```C
#include<stdio.h>
int main() { 

  int year,temp;

  printf("Enter teh year:");
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
    printf("\nLeap year...");

else
    printf("\nNot a Leap year...");
   }
  
  return 0;
}
```
Output:-
![](/image/11.jpg)

***
## 12) To print table of 5.
```C
#include<stdio.h>

int main() { int res;

for(int i=1;i<=10;i++) {

res=5*i;
    
   printf("\n5*%d=%d",i,res);
   }

   return 0;
}
```
Output:-
![](/image/12.jpg)
***
## 13) To make simple calculator using switch case.
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
Output:-
![](/image/13.jpg)
***
## 14) To calculate reverse of a number.
```C
#include<stdio.h>
void main()
int i,n,rev=0 
i=0;
{
printf("Enter a number");
scanf("%d",&n);
while(i<=n)
{ 
rev=rev*10;
rev=rev+n%1;
n=n/10; i++
}
printf("The number is reversed");
scanf("%d",&n);
 }
```
![](/image/14.jpg)
***
## 15) To check whether a no. is palindrome or not.
```C
#include <stdio.h>
int main()
{
    int n, rev= 0, rem, a;
    printf("Enter an integer: ");
    scanf("%d", &n);
    a= n;
    
    while( n!=0 )
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    
    if (a == rev)
        printf("%d is a palindrome.", a);
    else
        printf("%d is not a palindrome.", a);
    
    return 0;
}
```
Output:-
![](/image/15.jpg)
***
## 16) To check whether a number is prime or not.
```C
#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
       
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
Output:-
![](/image/16.jpg)
***
## 17) Program to print prime no. to 100.
```C
#include<stdio.h>

   int main(){

int num,i,remark;

printf(" The prime numbers between 1 and 100 : \n");

   for(num=2;num<=100;++num)

  {

   remark=0;

  for(i=2;i<=numbr/2;i++){

  if((num % i) == 0){

 remark++;

  break;
     }

   }

   if(remark==0)
    printf("\n    %d ",num);

 }

  return 0;

   }
```
Output:-
![](/image/17.jpg)
***
## 18) Program to check whether a no. is amstrong or not.
```C
#include<stdio.h>
void main()
{ int a,b,rem,x=0;
 printf("Enter a number: ");
scanf("%d",&a);
 b=a;
 while(a!=0)
 {
rem=a%10;
x= x+rem*rem*rem;
 a=a/10; 
 }
 if(x==b)
printf("The number is armstrong\n");
 else  
printf("The number is not armstrong\n");
}
```
Output:-
![](/image/18.jpg)
***
## 19) Print different patterns.
   - pattern 1
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
Output:-
![](/image/19i.jpg)
- pattern 2

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
Output:-
![](/image/19ii.jpg)
***
## 20) Program to find largest from 1-D array.
```C
#include <stdio.h>
 
int main()
{
 
        int array[50], size, i, largest;
 
        printf("\n Enter the size of the array: ");
	scanf("%d", &size);
 
        printf("\n Enter %d elements of  the array: ", size);
 
        for (i = 0; i < size; i++)
		scanf("%d", &array[i]);
 
        largest = array[0];
 
        for (i = 1; i < size; i++) 
        {
		if (largest < array[i])
			largest = array[i];
	}
 
        printf("\n largest element present in the given array is : %d", largest);
 
        return 0;
 
}
```
Output:-
![](/image/20.jpg)
***
## 21) To find sum of N natural numbers in an array.
```C
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
Output:-
![](/image/21.jpg)
***
## 22) Program to add two matrices.
```C
#include <stdio.h>
int main()
{
int m,n,c,d,first[10][10],second[10][10],
sum[10][10];
 printf("Enter the number of rows and columns of m$scanf("%d%d", &m, &n);
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
Output:-
![](/image/22.jpg)
***
## 23) Multiplication of matrices.
```C
#include<stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k;
int sum=0;
printf("Enter the first matrix:\n");
for(i=0;i<3;i++) 
{
for(j=0;j<3;j++)
 {
scanf("%d",&a[i][j]);
}
}
printf("Enter the sceond matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}   
  } 
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=0;
for(k=0;k<3;k++)
{
sum=sum+a[i][j]*b[i][j];
c[i][j]=sum;
}
}

}
printf("The multiplication of two matrices is:\n"$
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{printf("\t%d",c[i][j]);
}
printf("\n");
}
}
```
Output:-
![](/image/23.jpg)
***
## 24) Program to check whether a string is palindrome or not .
```C 
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
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}
```
Output:-
![](/image/24.jpg)
***
## 25) Program to perform basic operations like lenghth of string ,string concat, string copy ,string compare and string reverse.
```C
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
  char string1[20], string2[20]; 
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
Output:-
![](/image/25.jpg)
***
## 26) Programs to swap two numbers using call by value and call by refernce.
- Call by reference
```C
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
Output:-
![](/image/26ii.jpg)
- call by value:-
```C
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
Output:-
![](/image/26i.jpg)
***
## 27) Program to calculate factorial of a number with and without recursion both.
### with recursion
```C
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
Output:-
![](/image/27ii.jpg)
## without recursion 
```C
#include <stdio.h>
int main()
{
         int n, i;
         long fact=1; 

         printf(" Enter any number: ");
         scanf("%d", &n);

         for (i=1; i<=n; i++)
         fact = fact*i;
         printf(" Factorial = %ld", fact); 

        return 0;
} 
```
Output:-
![](/image/27i.jpg)
***
## 28) Program to print fibonacci series with and without recursion both.
### with recursion
```C
#include<stdio.h>
void series(int);		

int main() {

  int n;

printf("\n\nEnter the number of terms you wish.......");
  scanf("%d",&n);
  printf("\n\n");

  series(n);		
  printf("\n\n\n");

  return 0;
}

void series(int n)		

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
Output:-
![](/image/28.jpg)
## without recursion
```C
#include<stdio.h>

int fibo(int n);
int main(){
int n,i=0,c;
printf("Enter a number: ");

scanf("%d",&n);
printf("Fibonacci series:\n");
for(c=1;c<=n;c++)
     {
     printf("%d\n",fibo(i));
     i=i+1;
     }
return 0;


}
int fibo(int n){
if(n==0)
return 0;
else if(n==1)
return 1;
else
return (fibo(n-1)+fibo(n-2));

}
```
Output:-
***
## 29) Program to calculate average of 5 numbers using function.
```C
#include<stdio.h>
int average();
void main(){
int avg;
avg=average();
printf("The average of five numbers is: %d\n",avg$
}
int average()
{
int a,b,c,d,e,result;
printf("Enter the five numbers: ");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
result=(a+b+c+d+e)/5;
return result;
}
```
Output:-
![](/image/29.jpg)
***
## 30) Program to implement bubble sort.
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
Output:-
![](/image/31.jpg)
***
## 31) Program to implement binary and linear search.
 - binary search:-
```C
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
}```

- linear search:-
```C
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
Output:-
![](/image/30i.jpg)
![](/image/30ii.jpg)
***

## 32) Program to store information of 10 students using array of structures.
```C
#include <stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
};
 int main(){
    struct student s[10];
    int i;
    printf("Enter information of students:\n");
    for(i=0;i<10;++i)
    {
        s[i].roll=i+1;
        printf("\nFor roll number %d\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    printf("Displaying information of students:\n\n");
    for(i=0;i<10;++i)
    {
     printf("\nInformation for roll number %d:\n",i+1);
     printf("Name: ");
     puts(s[i].name);
     printf("Marks: %.1f",s[i].marks);
   }
   return 0;
}
```
Output:-
![](/image/32.jpg)
***
## 33) Program for Transpose of a matrix.
```C
#include<stdio.h>
int main()
{
int a[3][3];
printf("Enter a 3X3 matrix: ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The matrix you entered is:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("The transpose of the matrix is:\n ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}

}
```
Output:-
![](/image/33.jpg)
***
## 34) Program to print the address of variable using pointer.
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
Output:-
![](/image/35i.jpg)
***
## 35) Program to access array using pointer.
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
Output:-
![](/image/35ii.jpg)
