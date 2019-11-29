# PPS
Programming for Problem Solving

Follow instructions give in README.md file, found in respective folder.

P2.c
Print name using puts
 
//print name using puts
#include <stdio.h>
void main()
{
puts("My name is Nimrat Kaur");
}                                                                   

P3.c
Print address of college 
//PROGRAM TO PRINT ADDRESS OF COLLEGE
#include <stdio.h>
void main()
{
printf("\nGuru Nanak Dev Engineering College,");
printf("\n Gill Road,");
printf("\n Ludhiana, Punjab\n");
}






P4.c
Find sum of two numbers
 
//PROGRAM TO FIND SUM OF TWO NUMBERS
#include <stdio.h>
void main()
{
int a,b,c;
printf("\nEnter first number");
scanf("%d",&a);
printf("\n Enter second number");
scanf("%d",&b);
c=a+b;
printf("\n The sum is::  %d",c);
printf("\n");
}


P5.c
To print quotient and remainder
 
//PROGRAM TO PRINT THE QUOTIENT AND REMAINDER
#include <stdio.h>
void main()
{
int a,b,c,d;                                                                           
printf("\nEnter first number");
scanf("%d",&a);
printf("\nEnter second number");
scanf("%d",&b);
c=a/b;
printf("\nThe quotient is %d",c);
d=a%b;
printf("\nThe remainder is %d\n",d);
}

P5-1.c
Swap 2 numbers without using third variable
 
//swap two numbers without using third variable
#include<stdio.h>
 int main()
{
int a=10, b=20;
printf("\nBefore swap a=%d b=%d",a,b);
a=a+b;//a=30 (10+20)
b=a-b;//b=10 (30-20)
a=a-b;//a=20 (30-10)
printf("\nAfter swap a=%d b=%d\n",a,b);                             
}





P6.c to check if a number is odd or even
 
//PROGRAM TO CHECK IF A NUMBER IS EVEN OR ODD
#include <stdio.h>
void main()
{
int a,d;
printf("\nEnter a number");
scanf("%d",&a);
d=a%2;
if(d==0)
printf("\n The number is even");
else
printf("\n The number is odd\n");
}       
  

P7.c find greater of two numbers
 
//program to find greater of two numbers
#include <stdio.h>                                                  
void main()
{
int a,b,c;
printf("\nEnter the first number");
scanf("%d",&a);
printf("\nEnter the second number");
scanf("%d",&b);
if(a>b) 
printf("\n The larger number is %d",a);
else
printf("\n The larger number is %d",b);
}










P8.c Find largest of three numbers


P9.c
Program to print grade of students according to marks entered

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

 

P10.c
Find roots of a quadratic equation
 
#include <stdio.h>
#include<math.h>
void main()
{
float a,b,c,discriminant;
float root1, root2;
printf("\nEnter the coefficient of x^2 (a)::");
scanf("%f",&a);
printf("\nEnter the coefficient of x (b)::");
scanf("%f",&b);
printf("\nEnter the constant term (c)::");
scanf("%f",&c);
discriminant =pow(b,2)-4*a*c;
root1=( -b + sqrt(discriminant))/(2*a);
root2=(-b - sqrt(discriminant))/(2*a);
printf("\nRoots are :: %f %f \n", root1,root2);
}

P11.c
To check whether a year is leap year or not
 
#include<stdio.h>
void main()
 {
 int year;
 printf("\nEnter a year::");
 scanf("%d",&year);
 if(year%4==0)
{
if(year%100 == 0)
{
if(year%400 == 0)
printf("\n%d is a leap year\n",year);
else
printf("\n%d is not a leap year\n",year);
}
else
printf("\n%d is a leap year\n",year);
}
else
printf("\n%d is not a leap year",year);
}

P12.c
Program to generate multiple of 5
 
#include<stdio.h>
void main()
 {
 int i;
for (i=1;i <=10; i++)
printf("\n5\t*\t%d\t=\t%d",i,5*i);
}


P13.c
To make simple calculator using switch
 
#include<stdio.h>
void main()
 {
 int num1, num2, choice;
float result;

printf("\nEnter the first number::");
scanf("%d",&num1);
printf("\nEnter the second number::");
scanf("%d",&num2);
printf("\n\t\tMENU");
printf("\n1 : ADDITION");
printf("\n2 : SUBTRACTION");
printf("\n3 : MULTIPLICATION");
printf("\n4 : DiVISION");
printf("\n Enter your choice of Operation to be performed::");
scanf("%d",&choice);
switch(choice)
{
case 1:
result = num1+num2;
printf("\nThe Sum is %f", result);
break;
case 2:
result=num1-num2;
printf("\nThe Difference is  %f",result);
break;
case 3:
result=num1*num2;
printf("\nThe product is %f", result);
break;
case 4:
result = num1/num2;
printf("\nThe quotient is %f", result);
break;
}
}

P14.c
Calculate reverse of a number
 
#include<stdio.h>
void main()
{
int number, remainder, reverse_no=0;
printf("\nEnter a number::");
scanf("%d",&number);
while(number != 0)
{
remainder = number % 10;
reverse_no = reverse_no * 10 + remainder;
number = number / 10;
}
printf("\n Reverse of the number is %d::", reverse_no);
}

P15.c
Check whether a number is palindrome

 

#include<stdio.h>
void main()
{
int number, remainder, original_no, reverse_no=0;
printf("\nEnter a number::");
scanf("%d",&number);
original_no=number;
while(number != 0)
{
remainder = number % 10;
reverse_no = reverse_no * 10 + remainder;
number = number / 10;
}
printf("\n Reverse of the number is %d::", reverse_no);
if (original_no == reverse_no)
printf("\nThe number is a palindrome");
else
printf("\n The number is not a palindrome");
}


P16.c
Prime or not
 
//PROGRAM TO CHECK WHETHER A NO. IS PRIME OR NOT
#include<stdio.h>
void main()
{
int number,i,m=0,flag=0;
printf("Enter a number::");
scanf("%d",&number);
m=number/2;
for(i=2;i<=m;i++)
{
if(number%i==0)
{
printf("\nNumber is NOT prime\n");
flag=1;
break;
}
}
if(flag==0)
printf("\nNumber IS prime\n");
 }

P18.c
Prime numbers 1 to 100
 
//PROGRAM TO PRINT PRIME NUMBERS FROM 1 TO 100                                                                                                                                            
#include <stdio.h>                                                                                                                                                                        
void main()                                                                                                                                                                               
{                                                                                                                                                                                         
  int i, Number, flag;                                                                                                                                                                    
  printf("\nPrime Numbers from 1 to 100 are:: \n");                                                                                                                                       
  for(Number = 1; Number <= 100; Number++)                                                                                                                                                
  {                                                                                                                                                                                       
    flag = 0;                                                                                                                                                                             
    for (i = 2; i <= Number/2; i++)                                                                                                                                                       
    {                                                                                                                                                                                     
        if(Number%i == 0)                                                                                                                                                                 
        {                                                                                                                                                                                 
          flag=1;                                                                                                                                                                         
          break;                                                                                                                                                                          
        }                                                                                                                                                                                 
    }                                                                                                                                                                                     
    if(flag == 0 && Number != 1 )                                                                                                                                                         
    {                                                                                                                                                                                     
        printf("%d  ", Number);                                                                                                                                                           
    }
  }
printf("\n");
  }

P18.c
To check whether a number is Armstrong or not
 
//PROGRAM TO CHECK WHETHER A NO. IS AN ARMSTRONG NUMBER OR NOT                                                                                                                            
#include<stdio.h>                                                                                                                                                                         #include <math.h>
void main()
{
    int number, sum = 0, rem = 0, cube = 0, original_no;
    printf ("\nEnter a number::");
    {
        rem = number % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        number = number / 10;
    }
    if (sum == original_no)
        printf ("\nThe given no IS an ARMSTRONG no\n");
    else
        printf ("\nThe given no is NOT an ARMSTRONG no\n");
 }

P19_1.c
Program to generate pattern
1
1 2
1 2 3
 
//PROGRAM TO PRINT A PATTERN 
#include<stdio.h>
void main()
{
    int row, col;
printf("\n");
 for(row=1;row<=4;row++)
  {
   for(col=1;col<=row;col++)
    {
     printf ("%d ",col);
    }
    printf("\n");  
 }
printf("\n");
}

P19_2.C
TO PRINT A PATTERN
 
//PROGRAM TO PRINT A PATTERN -2
#include<stdio.h>
void main()
{
    int row, col;
printf("\n");
 for(row=1;row<=4;row++)
  {
   for(col=0;col<row;col++)
    {
     printf ("%d ",row+col);
    }                                                                               
    printf("\n");  
 }
printf("\n");
}


P19_3.c
Print a pattern
 

//PROGRAM TO PRINT A PATTERN -3
#include<stdio.h>
void main()
{ 
    int row, col,col1,spaces;
printf("\n");
 for(row=1;row<=4;row++)
  {  
 for(spaces=4;spaces>row;spaces--)
 {    
  printf(" ");
 } 
   for(col=1;col<=row;col++)
    {
     printf ("%d",col);
    }
     for(col1=col-2;col1>=1;col1--) 
      {
      printf("%d",col1);  
     }
   printf("\n");
   }
printf("\n");                                                                          
} 

P20.c
Find largest element from 1-D array
 
//PROGRAM TO FIND LARGEST ELEMENT FROM 1-D ARRAY
#include<stdio.h>
void main()
{
    int a[10],i, largest,n;
printf("\nEnter number of elements(<=10)::");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("\nEnter element %d::",i+1);
scanf("%d",&a[i]);
}
largest=a[0];
for(i=1;i<=n-1;i++)
{
  if(a[i]>largest)
   largest=a[i];
}
 printf("\nThe largest element in the array is::%d\n",largest);
}

P21.c
Find sum of n elements of array
 
//PROGRAM TO FIND SUM OF N ELEMENTS OF AN ARRAY
#include<stdio.h>
void main()
{
    int a[10],i, sum=0,n;
printf("\nEnter number of elements(<=10)::");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("\nEnter element %d::",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
  sum=sum+a[i];
   }
 printf("\nSum of elements of the Array is::%d\n",sum);
}
 

P22.c
To add 2 matrices
 
/PROGRAM TO FIND SUM OF TWO MATRICES
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3], sum[3][3],i,j;
printf("\nEnter elements of the first 3X3 matrix::");
for(i=0;i<=2;i++)
{ 
printf("\n Enter elements of row %d :: ", i+1);
 for(j=0;j<=2;j++)
 {
   scanf("%d",&a[i][j]);
 }
}
printf("\nEnter elements of the second 3X3 matrix::");
for(i=0;i<=2;i++)
{
printf("\n Enter elements of row %d :: ", i+1);
 for(j=0;j<=2;j++)
 {
   scanf("%d",&b[i][j]);
 }
}
printf("\nThe first 3X3 matrix is::\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
 {
   printf("%d ",a[i][j]);
 }
printf("\n");
}

printf("\nThe second 3X3 matrix is::\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
 {
   printf("%d ",b[i][j]);
 }


P23
Multiply 2 matrices
 
/PROGRAM TO FIND PRODUCT OF TWO MATRICES
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
printf("enter the number of row=");
scanf("%d",&r);
printf("enter the number of column=");
scanf("%d",&c);
printf("\nEnter elements of the first 3X3 matrix::");
for(i=0;i<=r-1;i++)
{
printf("\n Enter elements of row %d :: ", i+1);
 for(j=0;j<=c-1;j++)
 {
   scanf("%d",&a[i][j]);
 }
}
printf("\nEnter elements of the second 3X3 matrix::");
for(i=0;i<=r-1;i++)
{
printf("\n Enter elements of row %d :: ", i+1);
 for(j=0;j<=c-1;j++)
 {
   scanf("%d",&b[i][j]);
 }
}
printf("\nThe first 3X3 matrix is::\n");
for(i=0;i<=r-1;i++)
{
 for(j=0;j<=c-1;j++)
 {
   printf("%d ",a[i][j]);
 }
printf("\n");
}

printf("\nThe second 3X3 matrix is::\n");
for(i=0;i<=r-1;i++)
{
 for(j=0;j<=c-1;j++)
 {
   printf("%d ",b[i][j]);
 }
printf("\n");
}
printf("Multiplication of the two matrices is::\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{ 
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}


P24.c
Tp find whether a string is palindrome
 
//PROGRAM TO CHECK WHETHER A STRING IS PALINDROME
#include<stdio.h> 
#include<string.h>
void main()
{
    char string1[20];
    int i, length;
    int flag = 0;
    printf("\nEnter a string::");
    scanf("%s", string1);
    length = strlen(string1);
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }        
}  
    if (flag) 
    {   
       printf("\n%s is not a palindrome\n", string1);
    }    
    else {
        printf("\n%s is a palindrome\n", string1);
    }

}

P25.c
To perform basic string operations
 
 
nclude<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()     
{               
    char str1[20],str2[20];
    int ch,i,j; 
    do      
    {      
        printf("\n\tMENU");
        printf("\n------------------------------\n");
        printf("1:Find Length of String");
        printf("\n2:Concatenate Strings");
        printf("\n3:Copy String ");
        printf("\n4:Compare Strings");
        printf("\n5:Exit");
        printf("\n------------------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {       
            case 1:
                printf("\nEnter String: ");
                scanf("%s",str1);
                i=strlen(str1);
                printf("\nLength of String : %d\n\n",i);
            break;
           case 2:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                printf("\nEnter Second string: ");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("\nString After Concatenation : %s\n\n",str1);
            break;
            case 3: 
                printf("\nEnter a String1: ");
                scanf("%s",str1);
                printf("Enter a String2: ");
                scanf("%s",str2);
printf("\nString Before Copying:\nString1=\"%s\",String2=\"%s\"\n",str1,str2);
                strcpy(str2,str1);
                printf("\n-----------------------------------------------\n");
                printf("\"Ccpying string String1 to String2.....\" \n");
                printf("-----------------------------------------------\n");
                printf("String After Copying:\nString1=\"%s\", String2=\"%s\"\n\n",str1,str2);
            break;
            case 4:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                printf("\nEnter Second String: ");
                scanf("%s",str2);
                j=strcmp(str1,str2);
                if(j==0)
                {   
                    printf("\nStrings are Same\n\n");
                }
                else
                { 

                    printf("\nStrings are Not Same\n\n");
                }
            break;
            case 5:
                exit(0);
            break;
            default:
                printf("\nInvalid Input. Please Enter valid Input.\n\n ");
        }   
    }while(ch!=5);
}               
  

P26.c
 
//PROGRAM TO SWAP TWO NUMBERS USING CALL BY VALUE
# include <stdio.h>
void swap(int, int);
int x,y;
void  main()
{  
   //int x, y;
   printf("\nEnter the value of x and y\n::");
   scanf("%d %d",&x,&y);
   printf("\nBefore Swapping\nx = %d\ny = %d\n", x, y);
   swap(x, y);
}

void swap(int a, int b)
{                                                                                   
   int temp;
   temp = b;
   b = a;
   a = temp;
   printf("After Swapping\nx = %d\ny = %d\n", a, b);
}

P26-1.c
Print numbers using call by reference
 

//PROGRAM TO SWAP TWO NUMBERS USING CALL BY REFERENCE
# include <stdio.h>
void swap(int *, int *);
int x,y;
void  main()
{   
   //int x, y;
   printf("\nEnter the value of x and y\n::");
   scanf("%d %d",&x,&y);
   printf("\nBefore Swapping\nx = %d\ny = %d\n", x, y);
   swap(&x,&y);
   printf("\nAfter Swapping\nx = %d\ny = %d\n", x, y);
}

void swap(int *x,int *y)
{
    int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
P27-1.c
To find factorial of a number without using recursion
 
//PROGRAM TO FIND FACTORIAL OF A NUMBER WITHOUT USING RECURSION
#include <stdio.h>
void main()
{        
         int n, i;

         printf("\n Enter any number:: ");
         scanf("%d", &n);

         for (i=1; i<=n; i++)
         fact = fact*i;
         printf("\nFactorial = %ld\n", fact); 
}


P27-.c
Factorial of a number using recursion

 

//PROGRAM TO FIND FACTORIAL OF A NUMBER USING RECURSION
#include <stdio.h>
int factorial(int n);
void main()
{      
    int n;
    printf("\nEnter a positive integer: ");
    scanf("%d", &n);
    printf("\nFactorial of %d = %d\n", n, factorial(n));
}
int factorial(int n)
{
    if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
} 

P28-1.c 
Print Fibonacci series without recursion
 

#include<stdio.h>
void  main()
{    
 int n1=0,n2=1,n3,i,number;    
 printf("\nEnter the number of elements of fibonacci series to be printed::");
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }
printf("\n");
 }

P28-2.C
PRINT FIBONACCI SERIES USING RECURSION
 
//PROGRAM TO PRINT FIBONACCI SERIES USING RECURSION
#include<stdio.h> 
int fibonacci(int);
void main()
{   
    int terms;
    
    printf("\nEnter number of elements of fibonacci series to be printed:: ");
    scanf("%d", &terms);
    for(int n = 0; n < terms; n++)
    {
        printf("%d ", fibonacci(n));
    }
   printf("\n");
 }  
    
int fibonacci(int num)
{   
    
    //base condition
    if(num == 0 || num == 1)
    {   
        return num;
    }
    else
    {
        // recursive call
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

 
P29.c
Print average of 5 numbers using recursion

 

/PROGRAM TO CALCULATE AVERAGE OF 5 NUMBERS USING FUNCTIONS
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
P30.c perform linear and binary search
 

* Program to implement linear search and Binary search */

#include <stdio.h>                                                                  
#include <stdlib.h>
void main()
{

    int array[10],search_item,i,j,n,low,high,location,choice;
    void linear_search(int search_item,int array[10],int n);
    void binary_search(int search_item,int array[10],int n);
/* read the elements of array */
    printf("\nENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&n);
    printf("\nENTER THE ELEMENTS OF THE ARRAY:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }
/* Get the Search element */
    printf("\nENTER THE ELEMENT TO BE SEARCHED:");
    scanf("%d",&search_item);
/* Choice of Search Algorithm */
    printf("\n___________________\n");
    printf("1.LINEAR SEARCH\n");
    printf("2.BINARY SEARCH\n");
    printf("___________________\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        linear_search(search_item,array,n);
        break;
    case 2:
       binary_search(search_item,array,n);
        break;
    default:
        exit(0);
}
/* LINEAR SEARCH */
    void linear_search(int search_item,int array[10],int n)
    {
        int i,location;
        for(i=1;i<=n;i++)
        {
            if(search_item == array[i])
            {
                location = i;
    printf("______________________________________\n");
    printf("The location of Search Item = %d is %d\n",search_item,location);
    printf("______________________________________\n");
        }
    }   
}
        
/* Binary Search to find Search Key */
    
void binary_search(int search_item,int array[10],int n)
{
    int mid,i,low,high;
    low = 1;
    high = n;
    mid = (low + high)/2;
printf("\nmid=%d\n",mid);
    i=1;
    while(search_item != array[mid])
    {       
        if(search_item <= array[mid])
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
    printf("Search_Item=%d Found!\n",search_item);
    printf("__________________________________\n");
}   



P31.c
To perform bubble sort
 
//PROGRAM TO IMPLEMENT BUBBLE SORT
#include<stdio.h>
void main()
{       
    int a[10],i,j,temp,n;
    printf("\n Enter the no.of Elements to Sort: \n");
    scanf("%d",&n);
    printf("\n Enter the Elements : \n");
    for(i=0; i<n; i++)
    {       
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
 printf("\n Sorted Elements are::\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    }
P32.c
Store info of 10 students using array of structures
 
 
/PROGRAM TO STORE INFO OF 10 STUDENTS USING ARRAY OF STRUCTURES
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];
void main()
{
    int i;
    printf("\nEnter information of students:\n");
    // storing information
    for(i=0; i<10; ++i)
    {
        s[i].roll = i+1;
        printf("\nFor roll number%d,\n",s[i].roll);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
       // printf("\n");
    }
    printf("Displaying Information:\n\n");
    // displaying information
    for(i=0; i<10; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
}

P33.c
Program to print transpose of a matrix
 
//PROGRAM TO PRINT TRANSPOSE OF A MATRIX
#include <stdio.h>
void main() 
{       
    static int array[10][10];
    int i, j, m, n;
    printf("\nEnter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("\nEnter the elements of the matrix\n");
    for (i = 0; i < m; ++i)
    {       
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nThe given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)                                     
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is \n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
}

P34.C
PRINT ADDRESS OF VARIABLES USING POINTERS

 
//PROGRAM TO PRINT ADDRESS OF VARIABLES USING POINTERS
#include <stdio.h>
void main( )
{
int  a ;
int  *p ;
printf("\nEnter any integer: ") ;
scanf("%d",&a) ;
p = &a ;
printf("\n Value of Integer : %d ",a) ;
printf("\n Value of Integer : %d ",*p) ;
printf("\n Value of Integer : %d ",*(&a)) ;
printf("\n Address of Integer : %u ",p) ;
printf("\n Address of Integer : %u ",&a) ;
}

P35.c Access array elements using pointers
 
//PROGRAM TO ACCESS ARRAY ELEMENTS USING POINTERS

#include <stdio.h>
void  main()
{
    int arr[10];
    int N, i;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter number of elements in the array (<=10): ");
    scanf("%d", &N);
    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        // Move pointer to next array element
        ptr++;   
    }   
    // pointer again points back to first array element
    ptr = arr;
    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        // Print value pointed by the pointer
        printf("%d, ", *ptr);
        // Move pointer to next array element
        ptr++;
    }   
}

