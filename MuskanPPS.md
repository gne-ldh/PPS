![](https://i.imgur.com/J62Mvcf.jpg)
# ESC-18104/18105 Programming for Problem Solving

   **Name**:Muskan Dhiman
   **Branch**:CSE C1
   **Class Roll No.**:1915333
   **Submitted To**:Ms. Goldendeep Kaur


## 1) To print my name using puts 
```c
#include<stdio.h>
int main() 
{

puts("******************************");
puts("My name is Muskan Dhiman");
puts("******************************")
return 0;
```

Output:
![](https://i.imgur.com/IfugLah.jpg)

## 2) To print the college address in multiline statements
```c
#include<stdio.h>                                                    
int main()                                                           
{                                                                    
printf("\n\t\t\tGuru Nanak Dev Engineering College,");               
printf("\n\t\t\tGill Road,");                                        
printf("\n\t\t\tLudhiana , Punjab\n");                               
return 0;                                                            
}
```
Output:
![](https://i.imgur.com/UoP4d5h.jpg)



## 3) Program to add to integers by taking input from the user
```c
#include <stdio.h>                                                   
 int main()                                                          
 {                                                                   
 int a, b, c;                                                        
                                                                     
    printf("Enter two integers: ");                                  
    scanf("%d %", &a, &b);                                          
    c = a+b;                                                         
    printf("%d + %d = %d\n", a, b, c);                               
    return 0;                                                        
}


```
Output:
![](https://i.imgur.com/NVdpVOQ.jpg)

## 4) Program to compute quotient and remainder
```c
#include <stdio.h>                                                   
 int main()                                                          
{                                                                    
 int dividend, divisor, quotient, remainder;                         
 printf("Enter dividend: ");                                         
 scanf("%d", &dividend);                                             
 printf("Enter divisor: ");                                          
    scanf("%d", &divisor);                                           
    quotient = dividend / divisor;                                   
    remainder = dividend % divisor;                                  
     printf("Quotient = %d\n", quotient);                            
     printf("Remainder = %d\n", remainder);                          
     return 0;                                                       
}
```
Output:
![](https://i.imgur.com/UPBTLuN.jpg)



## 5) Program to swap to numbers without using third variable
```c
#include<stdio.h>                                                    
 int main()                                                          
 {                                                                   
 int a=10, b=20;                                                     
 printf("Before swap a=%d b=%d",a,b);                                
 a=a+b;                                                              
 b=a-b;                                                              
a=a-b;                                                               
 printf("\nAfter swap a=%d b=%d\n",a,b);                             
return 0;                                                            
}
```

Output:
![](https://i.imgur.com/9w8ZKpC.jpg)


## 6) Program to check whether a number is even or odd
```c
#include <stdio.h>                                                   
int main()                                                           
 {                                                                   
 int a;                                                              
 printf("Enter an integer: ");                                       
    scanf("%d", &a);                                                 
    if(a % 2 == 0)                                                   
    printf("%d is even.\n", a);                                      
    else                                                             
    printf("%d is odd.\n", a);                                       
    return 0;                                                        
}
```
Output:
![](https://i.imgur.com/quv3xbk.jpg)



## 7) Program to find the greater of two numbers
```c
#include <stdio.h>                                                   
int main()                                                           
 {                                                                   
 int a, b;                                                           
 printf("Enter two integers :");                                     
    scanf("%d%d", &a, &b);                                           
 if (a>b)                                                            
 {                                                                   
        printf("Largest number is %d.\n", a);                        
    }                                                                
    else                                                             
 {                                                                   
 printf("Largest number is %d.\n", b);                               
    }                                                                
    return 0;                                                        
}
```
Output:
![](https://i.imgur.com/voUuoKn.jpg)



## 8) Program to find the greatest of three numbers
```c
#include<stdio.h>                                                    
int main()                                                           
 {                                                                   
 int a, b, c;                                                        
                                                                     
   printf("\nEnter value of a, b, c:");                              
   scanf("%d %d %d",&a,&b,&c);                                       
   if((a>b)&&(a>c))                                                  
{                                                                    
      printf("\n a is greatest\n");                                  
}                                                                    
 else if((b>c)&&(b>a))                                               
{                                                                    
      printf("\n b is greatest\n");                                  
}                                                                    
 else                                                                
{                                                                    
 printf("\n c is greatest\n");                                       
}                                                                    
   return 0;
   }
  ``` 
  Output:
  ![](https://i.imgur.com/HSqUVxN.jpg)
   
   
   
## 9) Program to print grade of students according to marks entered
```c
#include<stdio.h>                                                    
int main()                                                           
 {                                                                   
 int marks;                                                          
 printf("Enter your marks ");                                        
    scanf("%d",&marks);                                              
    if(marks<0 || marks>100)                                         
    {                                                                
    printf("Wrong Entry\n");                                         
    }                                                                
    else if(marks<50)                                                
    {                                                                
    printf("Grade F\n");                                             
    }                                                                
    else if(marks>=50 && marks<60)                                   
    {                                                                
    printf("Grade D\n");                                             
    }
      else if(marks>=60 && marks<70)                                   
    {                                                                
    printf("Grade C\n");                                             
    }                                                                
    else if(marks>=70 && marks<80)                                   
    {                                                                
    printf("Grade B\n");                                             
    }                                                                
    else if(marks>=80 && marks<90)                                   
    {                                                                
    printf("Grade A\n");                                             
    }                                                                
    else                                                             
    {                                                                
    printf("Grade A+\n");
    }
    return 0;
    }
``` 

Output:
![](https://i.imgur.com/nztwRK1.jpg)
    
## 10) Program to find the roots of quadratic equation
```c
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
Output:
![](https://i.imgur.com/ww3WFLP.jpg)
    
    
## 11) Program to check whether a year is leap year or not
```c
#include <stdio.h>                                                   
int main()                                                           
 {                                                                   
 int year;                                                           
 printf("Enter a year: ");                                           
 scanf("%d",&year);                                                  
 if(year%4 == 0)                                                     
 {                                                                   
 if( year%100 == 0)                                                  
 {                                                                   
 if ( year%400 == 0)                                                 
 printf("%d is a leap year.\n", year);                               
 else                                                                
 printf("%d is not a leap year.\n", year);                           
 }                                                                   
 else                                                                
 printf("%d is a leap year.\n", year );                              
 }                                                                   
 else                                                                
 printf("%d is not a leap year.\n", year);                           
 return 0;                                                           
}
```
Output:
![](https://i.imgur.com/bSCkLyF.jpg)



## 12) Program to generate multiplication table of 5
```c
#include <stdio.h>                                                   
int main()                                                           
{ int n=5, i;                                                        
 printf("Table of %d\n",n);                                          
for(i=1; i<=10; ++i)                                                 
 {                                                                   
 printf("%d * %d = %d \n", n, i, n*i);                               
  }                                                                  
  return 0;                                                          
}
```
Output:
![](https://i.imgur.com/T67PO6m.jpg)



## 13) Program to make simple calculator using switch case
```c
#include <stdio.h>                                                   
 int main()                                                          
 {                                                                   
 int num1,num2;                                                      
 float result;                                                       
 char ch;                                                            
 printf("Enter first number: ");                                     
 scanf("%d",&num1);                                                  
 printf("Enter second number: ");                                    
 scanf("%d",&num2);                                                  
 printf("Choose operation to perform (+,-,*,/,%): ");                
 scanf(" %c",&ch);                                                   
 result=0;                                                           
 switch(ch)                                                          
 {                                                                   
 case '+':                                                           
 result=num1+num2;                                                   
 break;
  case '-':                                                           
 result=num1-num2;                                                   
 break;                                                              
 case '*':                                                           
 result=num1*num2;                                                   
 break;                                                              
 case '/':                                                           
 result=(float)num1/(float)num2;                                     
 break;                                                              
 case '%':                                                           
 result=num1%num2;                                                   
 break;                                                              
 default:                                                            
 printf("Invalid operation.\n");                                     
 }                                                                   
 printf("Result: %d %c %d = %f\n",num1,ch,num2,result);              
 return 0;                                                           
}
```
Output:
![](https://i.imgur.com/1TMtpey.jpg)



## 14) Program to calculate reverse of a number
```c
#include <stdio.h>                                                   
int main()                                                           
{                                                                    
 int n, reversedNumber = 0, remainder;                               
 printf("Enter an integer: ");                                       
 scanf("%d", &n);                                                    
 while(n != 0)                                                       
 {                                                                   
 remainder = n%10;                                                   
 reversedNumber = reversedNumber*10+ remainder;                      
 n /= 10;                                                            
  }                                                                  
 printf("Reversed Number = %d\n", reversedNumber);                   
 return 0;                                                           
}

```
Output:
![](https://i.imgur.com/spjFKGP.jpg)


## 15) Program to check whether a number is palindrome or not
```c
#include <stdio.h>                                                   
int main()                                                           
 {                                                                   
 int n, reversedInteger = 0, remainder,originalInteger;              
 printf("Enter an integer: ");                                       
 scanf("%d", &n);                                                    
 originalInteger = n;                                                
 while( n!=0 )                                                       
 {                                                                   
 remainder = n%10;                                                   
 reversedInteger =reversedInteger*10 + remainder;                    
 n /= 10;                                                            
 }                                                                   
 if (originalInteger == reversedInteger)                             
 printf("%d is a palindrome.\n", originalInteger);                   
 else                                                                
 printf("%d is not a palindrome.\n", originalInteger);               
 return 0;                                                           
}

```
Output:
![](https://i.imgur.com/wWzh72P.jpg)


## 16) Program to check whether a number is prime or not
```c
 #include <stdio.h>                                                   
int main()                                                           
{                                                                    
 int n, i, flag = 0;                                                 
 printf("Enter a positive integer: ");                               
 scanf("%d", &n);                                                    
 for(i = 2; i <= n-1; i++)                                           
 {                                                                   
  if(n%i == 0)                                                       
 {                                                                   
 flag = 1;                                                           
 break;                                                              
 }                                                                   
 }                                                                   
 if (n == 1)                                                         
 {                                                                   
 printf("1 is neither a prime nor a composite number.\n");           
 }
  else                                                                
 {                                                                   
 if (flag == 0)                                                      
 printf("%d is a prime number.\n", n);                               
 else                                                                
 printf("%d is not a prime number.\n", n);                           
 }                                                                   
  return 0;                                                          
}
```

Output:
![](https://i.imgur.com/to1jV6P.jpg)


## 17) Program to print prime numbers from 1 to 100
```c
#include <stdio.h>                                                   
int main(void)                                                       
 {                                                                   
 for(int i=2;i<100;i++)                                              
 {                                                                   
 for(int j=2;j<i;j++)                                                
 {                                                                   
 if(i%j==0)                                                          
 break;                                                              
 else if(i==j+1)                                                     
 printf("%d\n",i);                                                   
}                                                                    
}                                                                    
}

```
Output:
![](https://i.imgur.com/epiDJEX.jpg)


## 18) Program to check whether a number is armstrong or not
```c
#include <stdio.h>                                                   
int main()                                                           
{                                                                    
 int number, originalNumber, remainder, result =0;                   
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
 printf("%d is not an Armstrong number.\n",number);                  
 return 0;                                                           
}

```
Output:
![](https://i.imgur.com/xpqHFUd.jpg)


## 19) Program to print different patterns

### i
```c
#include <stdio.h>                                                   
int main()                                                           
{                                                                    
 int i, j;                                                           
 for(i=1; i<=4; ++i)                                                 
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

Output:
![](https://i.imgur.com/pr8XOsA.jpg)
### ii
```c
#include <stdio.h>                                                   
int main()                                                           
{                                                                    
 int i, j, number= 1;                                                
 for(i=1; i <= 4; i++)                                               
 {                                                                   
 for(j=1; j <= i; ++j)                                               
 {                                                                   
 printf("%d ", number);                                              
 ++number;                                                           
 }                                                                   
printf("\n");                                                        
 }                                                                   
return 0;                                                            
}
```
Output:
![](https://i.imgur.com/BnkRWfz.jpg)



## 20) Program to find largest element from one dimensional array
```c
#include <stdio.h>                                                   
int main()                                                           
 {                                                                   
 int i, n;                                                           
 float arr[100];                                                     
 printf("Enter total number of elements(1 to 100): ");               
 scanf("%d", &n);                                                    
 printf("\n");                                                       
 for(i = 0; i < n; ++i)                                              
 {                                                                   
 printf("Enter Number %d: ", i+1);                                   
 scanf("%f", &arr[i]);                                               
 }                                                                   
 for(i = 1; i < n; ++i)                                              
 {                                                                   
 if(arr[0] < arr[i])                                                 
 arr[0] = arr[i];                                                    
 }
  printf("Largest element = %.2f\n", arr[0]);                         
 return 0;                                                 
 }
 ```
 
 Output:
 ![](https://i.imgur.com/OuXUNvo.jpg)
 
 
 ## 21) Program to find the sum of N natural numbers in an array
 ```c
 #include <stdio.h>                                                   
int main()                                                           
{                                                                    
int n, sum = 0, c, value;                                            
printf("How many numbers you want to add?\n");                       
scanf("%d",&n);                                                      
printf("Enter %d integers\n", n);                                    
for (c = 1; c <= n; c++)                                             
{                                                                    
scanf("%d", &value);                                                 
sum = sum +value;                                                    
}                                                                    
printf("Sum of the integers = %d\n", sum);                           
return 0;                                                            
}
```
Output:
![](https://i.imgur.com/bDQzpXO.jpg)



## 22) Program to add two matrices
```c
#include <stdio.h>                                                   
int main()                                                           
{                                                                    
 int r, c, a[100][100], b[100][100], sum[100][100], i, j;            
 printf("Enter number of rows (between 1 and 100): ");               
 scanf("%d", &r);                                                    
 printf("Enter number of columns (between 1 and 100): ");            
 scanf("%d", &c);                                                    
 printf("\nEnter elements of 1st matrix:\n");                        
 for(i=0; i<r; ++i)                                                  
 {                                                                   
 for(j=0; j<c; ++j)                                                  
 {                                                                   
 printf("Enter element a%d%d: ",i+1,j+1);                            
 scanf("%d",&a[i][j]);                                               
 }                                                                   
 }                                                                   
 printf("Enter elements of 2nd matrix:\n");
  for(i=0; i<r; ++i)                                                  
 {                                                                   
 for(j=0; j<c; ++j)                                                  
 {                                                                   
 printf("Enter element a%d%d: ",i+1, j+1);                           
 scanf("%d", &b[i][j]);                                              
 }                                                                   
 }                                                                   
 for(i=0;i<r;++i)                                                    
 {                                                                   
 for(j=0;j<c;++j)                                                    
 {                                                                   
 sum[i][j]=a[i][j]+b[i][j];                                          
 }                                                                   
 }                                                                   
 printf("\nSum of two matrices: \n");
  for(i=0;i<r;++i)                                                    
 {                                                                   
 for(j=0;j<c;++j)                                                    
 {                                                                   
 printf("%d ",sum[i][j]);                                            
 if(j==c-1)                                                          
 {                                                                   
 printf("\n\n");
 }
 }
 return 0;
 }
 ```  
 
 Output:
 ![](https://i.imgur.com/Rvs4RZv.jpg)
## 23) Program to multiply two matrices
 ```c
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
printf("Error! column of first matrix not equal to row of second.\n\$
printf("Enter rows and column for first matrix: ");                  
scanf("%d %d", &r1,&c1);                                             
printf("Enter rows and column for second matrix: ");                 
scanf("%d %d",&r2, &c2);                                             
}                                                                    
printf("\nEnter elements of matrix 1:\n");
for(i=0; i<r1; ++i)                                                  
{                                                                    
for(j=0; j<c1; ++j)                                                  
{                                                                    
printf("Enter elements a%d%d: ",i+1, j+1);                           
scanf("%d", &a[i][j]);                                               
}                                                                    
}                                                                    
printf("\nEnter elements of matrix 2:\n");                           
for(i=0; i<r2; ++i)                                                  
{                                                                    
for(j=0; j<c2; ++j)                                                  
{                                                                    
printf("Enter elements b%d%d: ",i+1, j+1);                           
scanf("%d",&b[i][j]);                                                
}                                                                    
}                                                                    
for(i=0; i<r1; ++i)                                                  
{                                                                    
for(j=0; j<c2; ++j)                                                  
{                                                                    
result[i][j] = 0;                                                    
}                                                                    
}                                                                    
for(i=0; i<r1; ++i)
 for(j=0; j<c2; ++j)
 for(k=0; k<c1; ++k)
 {
 result[i][j]+a[i][k]*b[k][j];
 }
 printf("\nOutput Matrix:\n");
 for(i=0; i<r1; ++i)
 for(j=0; j<c2; ++j)
 {
 printf("%d  ",result[i][j];
 if(j == c2-1)
 printf("\n\n");
 }
 return 0;
 }
 ```
 
 
 Output:
 ![](https://i.imgur.com/SMavlmd.jpg)
 
 
## 24) Program to check whether a string is palindrome or not
```c
#include <stdio.h>                                                   
#include <string.h>                                                  
int main()                                                           
{                                                                    
char string1[20];                                                    
int i, length;                                                       
int flag = 0;                                                        
printf("Enter a string:");                                           
scanf("%s", string1);                                                
length = strlen(string1);                                            
for(i=0;i < length ;i++)                                             
{                                                                    
if(string1[i] != string1[length-i-1])                                
{                                                                    
flag = 1;                                                            
break;
                                                              
}                                                                    
}                                                                    
if (flag)                                                            
{                                                                    
printf("%s is not a palindrome\n", string1);                         
}                                                                    
else                                                                 
{                                                                    
printf("%s is a palindrome\n", string1);                             
}                                                                    
return 0;                                                            
}    
```

Output:
![](https://i.imgur.com/ejLFOu7.jpg)
    
## 25) Program to perform basic operations like length of string, string concat, string copy, string compare and string reverse
```c
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
  string1[i] = '\0'; 
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
 Output:
 ![](https://i.imgur.com/mUrDP13.jpg)
## 26) Program to swap two numbers using call by value and call by refernce

### Call by reference
 ```c
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
Output:
![](https://i.imgur.com/R3gOd8L.jpg)
### Call by value
```c
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
Output:
![](https://i.imgur.com/U0xpwws.jpg)

## 27) Program to calculate factorial of a number with and without recursion both

### With recursion

    #include <stdio.h>
    long int multiplyNumbers(int n);
    int main()
    {
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
    
    
  Output:
  ![](https://i.imgur.com/9n0pp3V.jpg)
   ### Without recursion 

```c
#include <stdio.h>

int main() 
{
  
  int c, n, fact = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
  return 0;
}
```

Output:
![](https://i.imgur.com/57Btrk4.jpg)

## 28) Program to print fibonacci series with and without recursion both
### With recursion
    #include<stdio.h>
     
    int f(int);
     
    int main()
    {
      int n, i = 0, c;
     
      scanf("%d", &n);
     
      printf("Fibonacci series terms are:\n");
     
      for (c = 1; c <= n; c++)
      {
        printf("%d\n", f(i));
        i++;
      }
     
      return 0;
    }
     
    int f(int n)
    {
      if (n == 0 || n == 1)
        return n;
      else
        return (f(n-1) + f(n-2));
    }
    
  Output:
  ![](https://i.imgur.com/jW7oZTG.jpg)
     
    
  ### Without recursion
 ```c
#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d\n",n1,n2); 
 for(i=2;i<number;++i) 
 {    
  n3=n1+n2;    
  printf(" %d\n",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 } 
```
Output:
![](https://i.imgur.com/GEKXsjo.jpg)
## 29) Program to find average of five numbers using function
```c
#include<stdio.h>
int avg(int,int,int,int,int);      
 
int main() { int a1,a2,a3,a4,a5,res;
   
   printf("\nEnter the numbers respectiively: ");
   scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
   
   res=avg(a1,a2,a3,a4,a5);     
   printf("Average of the numbers is %d\n",res);
   
   return 0; 
 }
 
 int avg(int a1,int a2,int a3,int a4,int a5)      
 
 { int p; 
   p=(a1+a2+a3+a4+a5)/5;
   return p;
 }
 ```
 Output:
 ![](https://i.imgur.com/zIdFX1l.jpg)
 ## 30) Program to implement linear search and binary search
 
  ### Linear search
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
Output:
![](https://i.imgur.com/NK5reLm.jpg)
## Binary search
```c
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
 Output:
 ![](https://i.imgur.com/l1yxWyl.jpg)
 
## 31) Program to implement bubble sort

```c
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
Output:
![](https://i.imgur.com/dJBg0Ky.jpg)



## 32) Program to store information of 10 students using array of structures

```c
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

Output:
![](https://i.imgur.com/gA2YBTq.jpg)
## 33) Program to compute the transpose of a matrix
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
Output:
![](https://i.imgur.com/CPnXkxc.jpg)
## 34) Program to print the address of variable using pointer
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
Output:
![](https://i.imgur.com/cwES99d.jpg)



## 35) Program to access array elements using pointer
```c

#include <stdio.h>
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

Output:
![](https://i.imgur.com/lVjpKfv.jpg)

