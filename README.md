![](https://i.imgur.com/8bi6Eay.jpg)
---
## **Programming for Problem Solving**
### **Name** ~ Payal
### **Class roll no. ~ 1915338**
### **Branch ~ CSE-C2**
### **Submitted to ~ Ms. Goldendeep Kaur**
---
### 1) To display name:




```C
#include<stdio.h>
int main() {

                                                                                                                                                                                                                                                                                                                    
puts("~~~~~~~~~~~~~~~");                                                                                                    
puts("  Payal Kash");                                                                                                       
puts("~~~~~~~~~~~~~~~");                                                                                                    
                                                                                                                            
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
Output:
![](https://i.imgur.com/EN9cQQG.png)
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
### i) Pattern 1:
```C
#include<stdio.h>                                                                                  
void main(){                                                                                       
for(int i=1;i<=5;i++)                                                                              
{                                                                                                  
for(int j=1;j<=i;j++)                                                                              
{                                                                                                  
printf("%d ",j);                                                                                   
}                                                                                                  
printf("\n");                                                                                      
}                                                                                                  
}        

```
Output:
![](https://i.imgur.com/SzolNdw.png)
### ii) Pattern 2: 
```C
                                                                                                   
#include<stdio.h>                                                                                  
int main()                                                                                         
{                                                                                                  
int i, space, k=0;                                                                                 
    for(i=1; i<=7; ++i, k=0)                                                                       
    {                                                                                              
        for(space=1; space<=7-i; ++space)                                                          
        {                                                                                          
            printf("  ");                                                                          
        }                                                                                          
        while(k != 2*i-1)                                                                          
        {                                                                                          
            printf("* ");                                                                          
            ++k;                                                                                   
        }                                                                                          
        printf("\n");                                                                              
    }                                                                                              
    return 0;                                                                                      
}                                                                                                  
                                                                                                                                                                                                  
                
```
Output:
![](https://i.imgur.com/xAzgfBg.png)
### 20) To find the largest number from a one dimensional array:
```C 
include<stdio.h>                                                                                  
void main(){                                                                                       
int a[10];                                                                                         
int i,n;                                                                                           
printf("Enter the number of elements to be entered in the array:");                                
scanf("%d",&n);                                                                                    
printf("Enter the elements of array:");                                                            
for(i=0;i<n;i++)                                                                                   
{                                                                                                  
scanf("%d",&a[i]);                                                                                 
}                                                                                                  
                                                                                                   
int max=a[0];                                                                                      
for(i=0;i<n;i++){                                                                                  
if(a[i]>max)                                                                                       
{                                                                                                  
max=a[i];                                                                                          
}                                                                                                  
}                                                                                                  
printf("The largest number is %d\n",max);                                                          
}                             

```
Output:
![](https://i.imgur.com/TO9hTBY.png)
### 21) To find the sum of array elements:
```C
#include<stdio.h>                                                                                  
void main()                                                                                        
{                                                                                                  
int a[10],n;                                                                                       
printf("ENter number of elements of array: ");                                                     
scanf("%d",&n);                                                                                    
printf("Enter the elements of array: ");                                                           
int i,sum;                                                                                         
for(i=0;i<n;i++)                                                                                   
{                                                                                                  
scanf("%d",&a[i]);                                                                                 
sum=sum+a[i];                                                                                      
}                                                                                                  
printf("The sum of the elements of array is: %d\n",sum);                                           
}                                                                                                  
                                                                                                   
               
```
Output:
![](https://i.imgur.com/lykRLfy.png)
### 22) Addition of two matrices:
```C
#include<stdio.h>                                                                                                         
int main(){                                                                                                               
                                                                                                                          
int a[3][3],b[3][3],c[3][3],i,j;                                                                                          
printf("Enter the first matrix:\n ");                                                                                     
for(i=0;i<3;i++)                                                                                                          
{                                                                                                                         
   for(j=0;j<3;j++)                                                                                                       
   {                                                                                                                      
    scanf("%d",&a[i][j]);                                                                                                 
   }                                                                                                                      
printf("\n");                                                                                                             
}                                                                                                                         
                                                                                                                          
printf("Enter the second matrix: \n");                                                                                    
for(i=0;i<3;i++)                                                                                                          
{                                                                                                                         
  for(j=0;j<3;j++)                                                                                                        
{                                                                                                                         
scanf("%d",&b[i][j]);                                                                                                     
}                                                                                                                         
printf("\n");                                                                                                             
}                                                                                                                         
                                                                                                                          
for(i=0;i<3;i++)                                                                                                          
{                                                                                                                         
for(j=0;j<3;j++)                                                                                                          
{                     
c[i][j]=a[i][j]+b[i][j];                                                                                                  
}                                                                                                                         
}                                                                                                                         
printf("The addition of two matrices is:\n");                                                                             
for(i=0;i<3;i++)                                                                                                          
{                                                                                                                         
for(j=0;j<3;j++)                                                                                                          
{                                                                                                                         
printf("\t %d",c[i][j]);                                                                                                  
}                                                                                                                         
printf("\n");                                                                                                             
}                                                                                                                         
return 0;   

      
```
Output:
![](https://i.imgur.com/lw5xjQb.png)
### 23) Multiplication of matrices:
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
printf("The multiplication of two matrices is:\n");                                                                       
for(i=0;i<3;i++)                                                                                                          
{                                                                                                                         
for(j=0;j<3;j++)                                                                                                          
{                                                                                                                         
printf("\t%d",c[i][j]);                                                                                                   
}                                                                                                                         
printf("\n"); 
}
}

```
Output:
![](https://i.imgur.com/tPEZuNc.png)
### 24) To  check whether a string is palindrome or not:
```C
#include<stdio.h>
#include <string.h>
 
int main() {
    char s[1000];
    int i,n,c=0;
 
   printf("Enter  the string : ");
   scanf("%s",s);
   n=strlen(s);
 
for(i=0;i<n/2;i++)
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
if(c==i)
 	    printf("%s is a palindrome.\n",s);
    else
        printf("%s is not a palindrome.\n",s);
 
return 0;
}
```
Output:
![](https://i.imgur.com/bzOF5Qr.png)
### 25) String operations:
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
Output:
![](https://i.imgur.com/CTRfOaW.png)
### 26) Swapping two numbers:
### i) Call by reference:
```C


#include <stdio.h>
void swap(int *a, int *b);
 
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
![](https://i.imgur.com/oNNANHD.png)
### ii) Call by value: 
```C
include<stdio.h>                                                                                                         
                                                                                                                          
void swap(int x,int y);                                                                                                   
                                                                                                                          
void main()                                                                                                               
{                                                                                                                         
int n1,n2;                                                                                                                
printf("Enter n1: ");                                                                                                     
scanf("%d",&n1);                                                                                                          
printf("Enter n2 :");                                                                                                     
scanf("%d",&n2);                                                                                                          
void swap(int n1,int n2);                                                                                                 
printf("after swapping: n1= %d and n2= %d\n",n2,n1);                                                                      
}                                                                                                                         
                                                                                                                          
                                                                                                                          
void swap(int x,int y){                                                                                                   
                                                                                                                          
printf("Enter 1st number x: ");                                                                                           
scanf("%d",&x);                                                                                                           
printf("Enter 2nd number y: ");                                                                                           
scanf("%d",&y);                                                                                                           
int temp;                                                                                                                 
temp=x;                                                                                                                   
x=y;                                                                                                                      
y=temp;                                                                                                                   
printf("After swapping: x = %d and y= %d",y,x);
}

```
Output:
![](https://i.imgur.com/sR9Kwit.png)
   
### 27) Factorial of a number:
### i) With recursion:
```C
#include<stdio.h>                                                                                                         
                                                                                                                          
int factorial(int m);                                                                                                     
                                                                                                                          
int main(){                                                                                                               
                                                                                                                          
int n,result;                                                                                                             
printf("Enter a number: ");                                                                                               
scanf("%d",&n);                                                                                                           
result = factorial(n);                                                                                                    
printf("The factorial of the number is: %d\n",result);                                                                    
}                                                                                                                         
                                                                                                                          
int factorial(int m)                                                                                                      
{                                                                                                                         
if(m<0)                                                                                                                   
printf("Factorial of a negative number is not possible.");                                                                
                                                                                                                          
else if(m==0 || m==1)                                                                                                     
return 1;                                                                                                                 
                                                                                                                          
else                                                                                                                      
return (m*factorial(m-1));                                                                                                
}                                                                                                                         
```
Output:
![](https://i.imgur.com/YfcvJ87.png)
### ii) Without recursion:
```C

                                                                                                                          
#include<stdio.h>                                                                                                         
                                                                                                                          
void main()                                                                                                               
{                                                                                                                         
int a,fact=1;                                                                                                             
printf("Enter a number: ");                                                                                               
scanf("%d",&a);                                                                                                           
int i=a;                                                                                                                  
while(i>0)                                                                                                                
{                                                                                                                         
fact = fact*i;                                                                                                            
i= i-1;                                                                                                                   
                                                                                                                          
}                                                                                                                         
printf("The factorial of the entered number is %d \n",fact);                                                              
}                                                                                                                         
              

```
Output:
![](https://i.imgur.com/YfcvJ87.png)
### 28) Finonacci series:
### i) With recursion:
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
Output:
![](https://i.imgur.com/6yZ5mQk.png)
### ii) Without recursion:
```C
                                                                                                                          
#include<stdio.h>                                                                                                         
int main()                                                                                                                
{                                                                                                                         
 int n1=0,n2=1,n3,i,number;                                                                                               
 printf("Enter the number of elements:");                                                                                 
 scanf("%d",&number);                                                                                                     
 printf("%d \n%d\n",n1,n2);                                                                                               
 for(i=2;i<number;++i)                                                                                                    
 {                                                                                                                        
  n3=n1+n2;                                                                                                               
  printf("%d\n",n3);                                                                                                      
  n1=n2;                                                                                                                  
  n2=n3;                                                                                                                  
 }                                                                                                                        
  return 0;                                                                                                               
 }                 


```
Output:
![](https://i.imgur.com/klkirml.png)
### 29) Average of five numbers using functions:
```C
                                                                                                                         
#include<stdio.h>                                                                                                         
int average();                                                                                                            
void main(){                                                                                                              
int avg;                                                                                                                  
avg=average();                                                                                                            
printf("The average of five numbers is: %d\n",avg);                                                                       
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
 Output:
 ![](https://i.imgur.com/W9XnidG.png)
### 30) Linear and binary search:
### i) Linear search:
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
![](https://i.imgur.com/gU0Vu22.png)

### ii) Binary search:
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
}

```
Output:
![](https://i.imgur.com/h4dPD7n.png)
### 31) Bubble Sort:
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
Output:
![](https://i.imgur.com/g4h29XA.png)
### 32) Program to store information of 10 students using array of structures.
```C
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
![](https://i.imgur.com/Vr78u23.png)
### 33) Transpose of a matrix:
```C
                                                                                                                         
#include<stdio.h>                                                                                                         
int main(){                                                                                                               
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
Output:
![](https://i.imgur.com/DLUsA0m.png)
### 34) To display address of a variable using pointers:
```C
#include <stdio.h>                                                                                                        
int main() {                                                                                                              
  int a;                                                                                                                  
  int *p;                                                                                                                 
printf("Enter a value: ");                                                                                                
scanf("%d",&a);                                                                                                           
  p = &a;                                                                                                                 
                                                                                                                          
  printf("Address of the value is: %d\n", p);                                                                             
                                                                                                                          
                                                                                                                          
  return 0;                                                                                                               
}                                                                                                                         
                
```
Output:
![](https://i.imgur.com/GfXzJmg.png)
### 35) Accessing an array using pointer: 
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
Output:
![](https://i.imgur.com/ycENt8S.png)

