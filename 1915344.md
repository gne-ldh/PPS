# Practical

 #        **PROGRAMMING FOR PROBLEM SOLVING ESC-18105**
##   NAME- *Rahul Kumar*
##   ROLL NO- *1915344*
##   BRANCH- *COMPUTER SCIENCE & ENGINEERING*
##   SECTION- *CS(C)*   



 #### 1.To add two numbers  

#include<stdio.h>  
int main()  
{  
int a,b,sum=0;  
printf("Enter two numbers \n");  
scanf("%d%d",&a,&b);  
sum=a+b;  
printf("Sum of two numbers is %d \n",sum);  
return 0;  
}  

### Output  
Enter two numbers  
5  
10  
Sum of two numbers is 15  

 
 
 #### 2.To find average of n numbers 

#include<stdio.h>  
int main()  
{  
int n,i,a[10];  
int sum=0,avg;  
printf("Enter value of n : \n");  
scanf("%d",&n);  
printf("Enter %d numbers: \n ",n);  
for(i=0;i<n;i++)  
{  
scanf("%d",&a[i]);  
sum=sum+a[i];  
}  
avg=sum/n;  
printf("Average is %d \n",avg);  
return 0;                                            
}  

#### Output  
Enter value of n  
5  
Enter 5 numbers  
1  
2  
3  
4  
5  
Average is 3  


 #### 3. To print week days using switch statement 

#include<stdio.h>  
int main()  
{  
int c;  
printf(" Enter the value of day");  
scanf("%d",&c);  
switch (c)  
{  
case 1:  
printf("Monday \n");  
break;  
case 2:    
printf("Tuesday  \n");  
break;  
case 3:    
printf("Wednesday \n");
break;    
case 4:    
printf("Thursday \n"); 
break;   
case 5:    
printf("Friday \n");  
break;  
case 6:    
printf("Saturday \n");  
break;  
case 7:    
printf("Sunday \n");  
break;  
default :    
printf("Wrong choice \n");
}  
return 0;  
}  

#### Output  
Enter the value of day  
5  
Friday  

 #### 4. To check whether a number is odd or even 

#include<stdio.h>  
int main()  
{  
int number;  
printf("Enter any number");  
scanf("%d",&number);  
if(number%2==0)  
printf("Number is even");  
else  
printf("Number is odd");  
return 0;  
}  

#### Output  
Enter any number  
5  
Number is odd  

 #### 5. To print the table of 2

#include<stdio.h>  
int main()  
{  
int i,a=2,b=1;  
printf("The table of 2 :");  
printf("\n ============ \n");  
for(i=1;i<=10;i++)  
{  
b=2*i;  
printf("%d * %d  = %d \n",a,i,b);  
}  
return 0;  
}  

#### Output
     The table of 2    
     ----------------  
     ----------------  
 2  *   1   =   2      
 2  *   2   =   4  
 2  *   3   =   6  
 2  *   4  =    8 
 2  *   5  =    10
 2  *   6  =    12
 2  *   7  =    14   
 2  *   8  =    16 
 2  *   9  =    18   
 2  *   10 =    20  
          
#### 6. To check whether a number is armstrong or not 

#include<stdio.h>  
int main()  
{  
int number,temp;  
int arm=0,digit;  
printf("Enter any number");  
scanf("%d",&number);  
temp=number;  
while(temp>0)  
{  
digit=temp%10;  
arm=arm+(digit  *  digit  *  digit);  
temp/=10;   
}   
if(arm==number)  
printf("Armstrong\n");  
else  
printf("Not armstrong\n");  
return 0;  
}  

#### Output  
Enter any number 
153
Armstrong  


 #### 7. To print calculator 

  
#include<stdio.h>  
void main()  
{  
puts(" _____________________ ");  
puts("| _____________________ |\n");  
puts("| 1 | 2 | 3 |\t|\n");  
puts("| ___ | ___ | ___ |\t|\n");  
puts("| 4 | 5 | 6 | + |\n");  
puts("| ___ | ___ | ___ | ___ |\n");  
puts("| 7 | 8 | 9 | - |\n");  
puts("| ___ | ___ | ___ | ___ |\n");  
puts("|\t0\t | * |\n");  
puts("| _______________ | ___ |\n");  
}  


#### 8.Bubble Sort 

#include<stdio.h>  
int main()  
{  
int a[20],i,n,k,temp;  
printf("Enter size of array\n");  
scanf("%d",&n);  
printf("Enter %d  elements of array:\n",n);  
for(i=0;i<n;i++)  
{  
scanf("%d",&a[i]);  
}  
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
printf("Array elements after sorting \n");  
for(i=0;i<n;i++)  
{  
printf("%d",a[i]);  
printf("\n");  
}  
return 0;  
}  

#### Output  

 #### 9. Binary Search  

#include<stdio.h>  
int main()  
{  
int i,a[10],n,lb=0,ub=9,mp;  
printf("Enter 10 numbers in ascending order \n");  
for(i=0;i<10;i++)  
{  
scanf("%d",&a[i]);  
}  
printf("Enter number to be searched \n ");  
scanf("%d",&n);  
mp=((lb+ub)/2);  
while(lb<=ub)  
{  
if(a[mp]==n)  
{  
printf("Number is found\n");  
break;  
}  
else if(a[mp]>n)  
{  
ub=mp-1;  
}  
else  
{  
lb=mp+1;  
}  
mp=((lb+ub)/2);  
}  
if(lb>ub)  
{  
printf("Number not found ");  
}  
return 0;  
}  


 #### 10.To find factorial of a number  

#include<stdio.h>  
int main()  
{  
int i,n,fact=1;  
printf("Enter the  number whose factorial is to be find :\n");  
scanf("%d",&n);  
for(i=1;i<=n;i++)  
{  
fact=fact*i;  
}  
printf("Factorial of given number is : %d \n",fact);  
return 0;  
}  


 #### 11.Fizz Buzz  

#include<stdio.h>  
int main()  
{  
int n;  
for(n=1;n<=30;n++)  
{  
if(n%3==0 && n%5==0)  
printf("FizzBuzz");  
else if(n%3==0)  
printf("Fizz \n");  
else if(n%5==0)  
printf("Buzz \n");  
else  
printf(" \n %d \n ",n);  
}  
return 0;  
}  


#### 12.To find sum of first 100 numbers 

#include<stdio.h>  
int main()  
{  
int i,sum=0;  
for(i=1;i<=100;i++)  
{                                                                         
sum=sum+i;  
}  
printf("Sum of first 100 numbers is %d \n",sum);  
return 0;  
}  


 #### 13. To find greater of two numbers  

#include<stdio.h>  
int main()  
{  
int a,b;  
printf("Enter the  value of a and b");  
scanf("%d%d",&a,&b);  
if(a>b)  
{  
printf("a is grteater");  
}  
else  
{  
printf("b is greater"); 
}                               
return 0;  
}  

 #### 14.To find greatest of 3 numbers  

#include<stdio.h>  
int main()  
{  
int a,b,c;  
printf("Enter the three numbers to check greatest \n");  
scanf("%d%d%d",&a,&b,&c);  
if(a>b&&a>c)  
{  
printf("1st number is greatest \n");  
}  
else if(b>c&&b>a)    
{  
printf("2nd number is greatest \n");  
}  
else  
{  
printf("3rd number is greatest \n");                                        
}  
return 0;  
}  


 #### 15. To find gcd of two numbers 

#include<stdio.h>  
int main()  
{  
int m,n,r=1;  
printf("Enter two numbers to find gcd \n");  
scanf("%d%d",&m,&n);  
 while(r!=0)  
{  
r=m%n;  
m=n;  
n=r;  
}  
printf("\n GCD =%d\n ",m);  
return 0;  
}  


#### 16.To check whether a year is leap or not  

#include<stdio.h>  
int main()  
{  
int year;  
printf("Enter the value of year");  
scanf("%d",&year);  
if(year%4==0)  
printf(" The year is Leap \n");  
else  
printf(" \n The year is not leap \n");  
return 0;  
}  


 #### 17. Linear search  

#include<stdio.h>  
int main()  
{  
int a[5],i,s,f;  
printf("Enter 5 numbers\n");  
for(i=0;i<5;i++)  
{  
scanf("%d",&a[i]);  
}  
printf("Enter number to be searched\n");  
scanf("%d",&s);  
for(i=0;i<5;i++)  
{  
if(s==a[i])  
{  
f=1;  
break;  
}  
}  
if(f==1)  
printf("Number is found \n");  
else  
printf("Number is not found \n");  
return 0;  
}  


#### 18.To find sum of two matrices  

#include<stdio.h>  
int main()  
{  
int m,n,a[5][5],b[5][5],c[5][5],i,j;  
printf("Enter the size of  matrix");  
scanf("%d%d",&m,&n);  
printf("Enter the elements of matrix A\n");  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
scanf("%d",&a[i][j]);  
}  
printf("Enter the elements of matrix B\n");  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
scanf("%d",&b[i][j]);  
}  
printf("Sum of two matrices is :\n");  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
{  
c[i][j]=a[i][j]+b[i][j];  
printf("%d ",c[i][j]);  
}  
printf("\n");  
}  
return 0;  
}  


 ####  19.To find transpose of matrix  

#include<stdio.h>  
int main()  
{  
int a[10][10],b[10][10],m,n,i,j;  
printf("Enter the size of matrix A as mand n:\n");  
scanf("%d%d",&m,&n);  
printf("Enter the elements of matrix A\n");  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
{
scanf("%d",&a[i][j]);  
}  
printf("\n");  
}    
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
{  
b[i][j]=a[j][i];  
}  
}  
printf("Transpose of matrix is :\n");  
for(i=0;i<n;i++)  
{  
for(j=0;j<m;j++)  
{  
printf("%d ",b[i][j]);  
}
printf("\n");  
}  
return 0;  
}   


#### 20. To find sum of digits of a number  

#include<stdio.h>  
int main()  
{  
int sum=0,digit;  
int n,temp;  
printf("Enter the number to cal. the sum of digits");   
scanf("%d",&n);  
temp=n;  
while(temp>0)  
{  
digit=temp%10;   
temp/=10;   
sum+=digit;  
}  
printf("\n Sum of digits of %d = %d \n",n,sum);  
return 0;  
}  


 #### 21. To check whether a number is palindrome or not  

#include<stdio.h>  
int main()  
{  
int sum=0,digit;  
int temp,n;  
printf("Enter any number");  
scanf("%d",&n);  
temp=n;  
while(temp>0)  
{  
digit=temp%10;  
temp/=10;  
sum=sum*10+digit;  
}  
if(n==sum)  
printf("\n%d is a palindrome\n",n);  
else  
printf("\n%d is not a palindrome\n",n);  
return 0;  
}  

 #### 22.To swap two numbers using call by value method    

#include<stdio.h>  
void swap(int a,int b);      //Function declaration  

void main()  
{  
int x,y;  
printf("\n Enter value for x: ");  
scanf("%d",&x);  
printf("\n Enter value for y: ");  
scanf("%d",&y);  

printf("\n Before calling swap function\n");  
printf("\n Value of x = %d, value of y = %d\n",x,y);  

swap(x,y);    //Function call, with only values of x & y  

printf("\n After returning from swap function");  
printf("\n Value of x = %d, value of y = %d\n",x,y);      
}  

void swap(int a,int b)  
{    
int temp;  
printf("\n Inside the function\n");  
printf("\n Value of a = %d, value of b = %d before swap\n",a,b);  
temp = a;  
a = b;  
b = temp;  
printf("\n Value of a = %d, value of b = %d after swap\n",a,b);  
}    



 ####  23. To swap two numbers using call by reference  

#include<stdio.h>  
void swap( int * , int * );    //Function declaration  

void main()  
{  
int x,y;  
printf("\nEnter value for x: ");  
scanf("%d",&x);  
printf("\nEnter value for y: ");  
scanf("%d",&y);  
printf("\nBefore calling swap function\n");  
printf("\nValue of x=%d, value of y=%d\n",x,y);  
  
swap(&x,&y);    //Function call, with addresses of x & y  

printf("\nAfter returning from swap function\n");  
printf("\nValue of x=%d, value of y=%d\n",x,y);      
}  
void swap( int * a , int * b )      
{    //Function definition  
int temp;  
printf("\nInside the function\n");  
printf("\nValue of *a=%d, value of *b=%d before swap\n",*a,*b);  
temp = *a;  
*a = *b;  
*b = temp;  
printf("\nValue of *a=%d, value of *b=%d after swap\n",*a,*b);  
}  


#### 24. To enter details of employee using structure  

#include<stdio.h>  
#include<string.h>  
struct employee  
{  
int code;  
char name[25],department[15];  
float salary;  
};  
void main()  
{  
struct employee aemployee;  
printf("Enter employee code \n");  
scanf("%d",&aemployee.code);  
printf("Enter employee's name \n");  
scanf("%s",&aemployee.name);  
printf("Enter employee's department \n");  
scanf("%s",&aemployee.department);  
printf("Enter employee salary \n");  
scanf("%f",&aemployee.salary);  
printf("Particulars of employee are :\n");  
printf("\n Employee's code   %d",aemployee.code);  
printf("\n Employee's name  %s",aemployee.name);  
printf("\n Employee's department  %s",aemployee.department);                
printf("\n Employee salary  %2f \n ",aemployee.salary);  
}  



####  25.To print product of two fraction using structures  

#include<stdio.h>  

struct fr    
{  
float num;  
float denom;  
};  

int main()  
{  
struct fr f1,f2,res;  

printf("Enter numerator,denominator of 1st fraction: ");  
scanf("%f/%f",&f1.num,&f1.denom);  
printf("Enter numerator,denominator of 2nd fraction: ");  
scanf("%f/%f",&f2.num,&f2.denom);  

res.num=f1.num * f2.num;  
res.denom=f1.denom * f2.denom;  

printf("The resultant product fraction is %.2f/%.2f.\n",res.num,res.denom);  

return 0;  
}  




####  By Rahul Kumar
