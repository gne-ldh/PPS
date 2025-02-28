
# PROGRAMMING FOR PROBLEM SOLVING.

## Name :- Hemangi Jain
## Branch & Class-group :- B-TECH CSE C-C1
## College Roll number :- 1915319
## University Roll number :- 1905792

## Submitted to:
### - Ms Goldendeep Kaur

## 1. To Print your name using puts():

```C
#include<stdio.h>
int main(){
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    puts("My Name is Hemangi Jain\n");
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    return 0;
}
```
![](/images/img1.JPG)
---
## 2. Program to Print College Address in muliple lines:

```C
#include<stdio.h>
int main(){
    printf("Guru Nanak Dev Engineering College,\n");
    printf("Gill Road,\n");
    printf("Ludhiana, Punjab\n");
    return 0;
}
```
![](/images/2.jpg)
---
## 3. Addition of two numbers input by user:

```C
#include<stdio.h>
int main(){
    int n1,n2,sum;
    printf("Enter 1st number :- ");
    scanf("%d",&n1);
    printf("Enter 2nd number :- ");
    scanf("%d",&n2);
    sum=n1+n2;
    printf("Their Sum is %d\n",sum);
    return 0;
}
```
![](/images/3.jpg)
---
## 4. Program to compute quotient and remainder:

```C
#include<stdio.h>
int main(){
    int d1,d2,q1,r1;
    printf("enter dividend :- ");
    scanf("%d",&d1);
    printf("enter divisor :- ");
    scanf("%d",&d2);
    r1=d1%d2;
    q1=d1/d2;
    printf("Quotient is %d\n",q1);
    printf("Remainder is %d",r1);
    return 0;
}
```
![](/images/4.jpg)
---
## 5. Program to swap two numbers without third variable:

```C
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number ('a') :- ");
    scanf("%d",&a);
    printf("Enter 2nd number ('b') :- ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d,b = %d",a,b);
    return 0;
}
```
![](/images/5.jpg)
---
## 6. Program to check if a input number is even or odd:

```C
#include<stdio.h>
int main(){
    int n1;
    printf("Enter number :- ");
    scanf("%d",&n1);
    if(n1%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    return 0;
}
```
![](/images/6.jpg)
---
## 7. Program to find greatest of two numbers:

```C
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number ('a') :- ");
    scanf("%d",&a);
    printf("Enter 2nd number ('b') :- ");
    scanf("%d",&b);
    if(a>b){
        printf("A is greater");
    }
    else if(b>a){
        printf("B is greater");
    }
    else{
        printf("A and B are equal");
    }
    return 0;
}
```
![](/images/7.jpg)
---
## 8. Program to find greatest of three entered numbers:

```C
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number ('a') :- ");
    scanf("%d",&a);
    printf("Enter 2nd number ('b') :- ");
    scanf("%d",&b);
    printf("Enter 3rd number ('c') :- ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("A is greatest");
    }
    else if(b>c){
        printf("B is greatest");
    }
    else{
        printf("C is greatest");
    }
    return 0;
}
```
![](/images/8.jpg)
---
## 9. To print grade of a student by entering marks:

```C
#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks of Student out of 100 :- ");
    scanf("%d",&marks);
    if(marks>=95){
        printf("O grade");
    }
    else if(marks<95 && marks>=90){
        printf("A Grade");
    }
    else if(marks<90 && marks>=80){
        printf("B Grade");
    }
    else if(marks<80 && marks>=70){
        printf("C Grade");
    }
    else if(marks<70 && marks>=60){
        printf("D Grade");
    }
    else if(marks<60 && marks>=50){
        printf("E Grade");
    }
    else if(marks<50 && marks>=40){
        printf("E- Grade");
    }
    else{
        printf("F Grade");
    }
    return 0;
}
```
![](/images/9.jpg)
---
## 10. Program To find roots of entered quadratic equation:
```C
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,z;
    float r1,r2;
    printf("Quadratic equation is in the form of [ ax^2 + bx + c ]\n");
    printf("Enter value of a :- ");
    scanf("%d",&a);
    printf("Enter value of b :- ");
    scanf("%d",&b);
    printf("Enter value of c :- ");
    scanf("%d",&c);
    d = (b * b) - 4*a*c;
    z = pow(d,0.5);
    if(a==0){
        printf("equation is not quadratic equation");
    }
    else if(d>=0){
        r1 = (-b+z)/2*a;
        r2 = (-b-z)/2*a;
        printf("Value of roots are %f and %f",r1,r2);
    }
    else{
        printf("roots are imaginary");
    }
    return 0;
}
```
![](/images/10.jpg)
---
## 11. Program to check whether entered year is leap year:
```C
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
            // year is divisible by 400, hence the year is a leap year         
            if ( year%400 == 0)                      
                printf("%d is a leap year.", year);       
            else            
                printf("%d is not a leap year.", year);       
        }      
        else             
            printf("%d is a leap year.", year );        
    }        
    else             
        printf("%d is not a leap year.", year);      
    return 0;         
}               

```
![](/images/11.JPEG)
---
## 12. Program to generate table of 5:-
```C
#include<stdio.h>
int main(){
    int x;
    for(x=0;x<=10;x++){
        printf("5 X %d = %d \n",x,5*x);
    }
    return 0;
}
```
![](/images/12.jpg)
---
## 13. To make simple calculator using switch statements:
```C
#include <stdio.h>
int main() {
	char Operator[1];
	float num1, num2, result;	
	printf("Enter the Values of first number:- ");
	scanf("%f", &num1);	
	printf("Enter an Operator:- ");
	scanf("%s", Operator);
	printf("Enter the Values of second number:- ");
	scanf("%f", &num2);
	switch(Operator[0]){
  			case '+':
  				result = num1 + num2;
           			printf("Result is %.1f",result);
  				break;
  			case '-':
  				result = num1 - num2;
                		printf("Result is %.1f",result);
  				break;  			
  			case '*':
  				result = num1 * num2;
                		printf("Result is %.1f",result);
  				break;
  			case '/':
  				result = num1 / num2;
                		printf("Result is %.1f",result);
  				break;
			default:
				printf("You have entered an Invalid Operator ");				    			
			}
return 0;
}
```
![](/images/13.jpg)
---
## 14. Program to calculate reverse of a number:
```C
#include <stdio.h>
int main(){
    int n, rn, rem,n1;
    rn=0;
    printf("Enter a number:- ");
    scanf("%d", &n);
    n1=n;
    while(n != 0){
        rem = n%10;
        rn = rn*10 + rem;
        n /= 10;
    }
    printf("Reversed Number = %d",rn);
    return 0;
}
```
![](/images/14.jpg)
---
## 15. To check whether a number is palindrome or not:
```C
#include <stdio.h>
int main(){
    int n, rn, rem,n1;
    rn = 0;
    printf("Enter a number :- ");
    scanf("%d", &n);
    n1 = n;
    while(n != 0){
        rem = n%10;
        rn = rn*10 + rem;
        n /= 10;
    }
    if(rn == n1){
        printf("Number is Palindromic");
    }
    else{
        printf("Number is not Palindromic");
    }
    return 0;
}
```
![](/images/15.jpg)
---
## 16. To check whether a number is prime or not:
```C
#include<stdio.h>
int main(){
    int a,i,x;
    printf("Enter number :- ");
    scanf("%d",&x);
    a=0;
    for(i=1;i<=x;i++){
        if (x%i==0){
            a=a+1;
        }            
    }
    if(a==2){
        printf("%d is a prime number",x);
    }
    else{
        printf("%d is not a prime number",x);
    }
    return 0;
}
```
![](/images/16(i).jpg)
![](/images/16(ii).jpg)
---
## 17. Program to print all prime numbers between 1 to 100:
```C
#include<stdio.h>
int main(){
    int a,x,i;
    for(x=1;x<=100;x++){  
        a=0;
        for(i=1;i<=x;i++){
            if (x%i==0){
                a=a+1;
            }
        }
        if(a==2){
            printf("%d\n",x);
        }
    }
    return 0;
}
```
![](/images/17.jpg)
---
## 18. To check whether a number is armstrong or not
```C
#include<stdio.h>
int main(){
    int n,i,a,num=0;
    printf("Enter Number :-\n");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        i=n%10;
        num=num+(i*i*i);
        n/=10;
    }
    if(a==num){
        printf("Entered number is an armstrong number");
    }
    else{
        printf("Entered number is not an armstrong number");
    }
    return 0;
}
```
![](/images/18.jpg)
---
## 19. A program to generate given patterns
```C
#include<stdio.h>
int main(){
    // ALL 3 PATTERNS ARE IN THIS FILE

/**********************************************************
**********************************************************/ 
    printf("\n");
    printf("FIRST\n");
    printf("\n");

    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j==1){
                printf("1 ");
            }
            else if(j==2 && (i==2 || i==3 || i==4)){
                printf("2 ");
            }
            else if(j==3 && (i==3 || i==4)){
                printf("3 ");
            }
            else if(j==4 && i==4){
                printf("4 ");
            }
        }
        printf("\n");
    }
/**********************************************************
**********************************************************/
    printf("\n");
    printf("SECOND\n");
    printf("\n");

    int a,b;
    for(a=1;a<=4;a++){
        for(b=1;b<=4;b++){
            if(a==1 && b==1){
                printf("1 ");
            }
            else if(a==2){
                if(b==1){
                    printf("2 ");
                }
                else if(b==2){
                    printf("3 ");
                }
            }
            else if(a==3){
                if(b==1){
                    printf("4 ");
                }
                else if(b==2){
                    printf("5 ");
                }
                else if(b==3){
                    printf("6 ");
                }
            }
            else if(a==4){
                if(b==1){
                    printf("7 ");
                }
                else if(b==2){
                    printf("8 ");
                }
                else if(b==3){
                    printf("9 ");
                }
                else if(b==4){
                    printf("10 ");
                }
            }
        }
        printf("\n");
    }

/************************************************************
************************************************************/
    printf("\n");
    printf("THIRD\n");
    printf("\n");

    int x,y;
    for(x=1;x<=4;x++){
        for(y=1;y<=7;y++){
            if(x==1){
                if(y==4){
                    printf("1 ");
                }
                else{
                    printf("  ");
                }
            }
            else if(x==2){
                if(y==3 || y==4 || y==5){
                    if(y==3 || y==5){
                        printf("1 ");
                    }
                    else if(y==4){
                        printf("2 ");
                    }
                }
                else if(y==1 || y==2 || y==6 || y==7){
                    printf("  ");
                }
            }
            else if(x==3){
                if(y==4){
                    printf("3 ");
                }
                else if(y==3 || y==5){
                    printf("2 ");
                }
                else if(y==2 || y==6){
                    printf("1 ");
                }
                else if(y==1 || y==7){
                    printf("  ");
                }
            }
            else if(x==4){
                if(y==4){
                    printf("4 ");
                }
                else if(y==3 || y==5){
                    printf("3 ");
                }
                else if(y==2 || y==6){
                    printf("2 ");
                }
                else if(y==1 || y==7){
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
```
![](/images/19.jpg)
---
## 20. To find largest number in 1 dimentional array
```C
#include<stdio.h>
int main(){
    int x,n,a;
    int arr1[10];
    for(x=0;x<10;x++){
        printf("Enter number for %d place in array :- ",x+1);
        scanf("%d",&n);
        arr1[x] = n;
    }
    for(int i=0;i<10;i++){
        a=0;
        for(int j=0;j<10;j++){
            if(arr1[i]>=arr1[j]){
                a=a+1;
            }
        }
        if(a==10){
            printf("%d is largest number in array",arr1[i]);
        }
    }
    return 0;
}
```
![](/images/20.jpg)
---
## 21. To find sum of 'n' natural numbers in an array
```C
#include<stdio.h>
int main(){
        int n1,sum=0;
        printf("Enter natural number till which you want sum of the numbers:- ");
        scanf("%d",&n1);
        int arr1[n1];
        for(int x=1;x<=n1;x++){
                arr1[x-1]=x;
        }
        for(int y=1;y<=n1;y++){
                sum=sum+arr1[y-1];
        }
        printf("Sum of %d natural numbers is %d \n",n1,sum);
        return 0;
}
```
![](/images/21.jpg)
---
## 22. Program to add two matrices
```C
#include <stdio.h>
int main() {
        int m, n, c, d, first[10][10], second[10][10], sum[10][10];
        printf("Enter the number of rows and columns of matrix\n");
        scanf("%d%d",&m ,&n);
        printf("Enter the elements of first matrix\n"); 
        for(c=0;c<m;c++){
                for(d=0;d<n;d++){
                        scanf("%d",&first[c][d]);
                }
        }
        printf("Enter the elements of second matrix:- \n");
        for(c=0;c<m;c++){
                for(d=0;d<n;d++){
                        scanf("%d",&second[c][d]);
                }
        }
        printf("Sum of entered matrices:-\n");
        for(c=0;c<m;c++) {
                for(d=0;d<n;d++) {
                        sum[c][d] = first[c][d] + second[c][d];
                        printf("%d\t",sum[c][d]);
                }
                printf("\n");
        }
        return 0;
}
```
![](/images/22.jpg)
---
## 23. Program to multiply two matrices
```C
#include <stdio.h>
int main(){
        int m, n, p, q, c, d, k, sum = 0;
        int first[10][10], second[10][10],   multiply[10][10];
        printf("Enter number of rows and columns of first matrix\n");
        scanf("%d%d", &m, &n);
        printf("Enter elements of first matrix\n");
        for (c=0;c<m;c++){
                for (d=0;d<n;d++){
                        scanf("%d", &first[c][d]);
                }
        }
        printf("Enter number of rows and columns of second matrix\n");
        scanf("%d%d", &p, &q);
        if (n != p){
                printf("The matrices can't be multiplied with each other\n");
        }
        else{
                printf("Enter elements of second matrix\n");
        
                for (c=0;c<p;c++){
                        for (d=0;d<q;d++){
                                scanf("%d", &second[c][d]);
                        }
                }
                for(c=0;c<m;c++){
                        for (d=0;d<q;d++){
                                for (k=0;k<p;k++){
                                        sum = sum + first[c][k]*second[k][d];
                                }
                                multiply[c][d] = sum;
                                sum = 0;
                        }
                }
                printf("Product of the matrices:\n");
                for (c=0;c<m;c++) {
                        for (d=0;d<q;d++){
                                printf("%d\t", multiply[c][d]);
                        }
                        printf("\n");
                }
        }
        return 0;
}
```
![](/images/23.jpg)
---
## 24. Program to check whether  a string is palindrome or not
```C
#include<stdio.h>
#include <string.h>
int main() {
        char string[100];
        int i,n,c=0;
        printf("Enter  the string:- ");
        scanf("%s",string);
        n=strlen(string);
        for(i=0;i<n/2;i++){
                if(string[i]==string[n-i-1]){
                        c++;
                }
        }
        if(c==i){
                printf("string is palindrome");
        }
        else{
                printf("string is not palindrome");
        }
        return 0;
}
```
![](/images/24.jpg)
---
## 25. Program to perform basic operations like lenghth of string ,string concat, string copy ,string compare and string reverse
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
        string1[i] = '\0';
}

int compare_strings(char string1[], char string2[]) {
        int len1, len2, i, count = 0;
        len1 = find_length(string1);
        len2 = find_length(string2);
        if (len1 != len2){
                return 1;
        }
        for (i = 0; i < len1; i++) {
                if (string1[i] == string2[i]){
                        count++;
                }
        }
        if (count == len1){
                return 0;
        }
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
                                if (compare_strings(string1, string2) == 0){
                                printf("They are equal");
                                }
                                else{
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
                        default:
                                exit(0);
                }
        }
        return 0;
}
```
![](/images/25.jpg)
---
## 26. Programs to swap two numbers using call by value and call by refernce
```C
// Call by refernce
#include <stdio.h>
void swap(int*, int*);
int main(){
        int a,b; 
        printf("Enter the value of a:- ");
        scanf("%d",&a);
        printf("Enter the value of b:- ");
        scanf("%d",&b);
        printf("a = %d\n", a);
        printf("b = %d\n", b);
        swap(&a, &b); 
        printf("Swapped values\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
        return 0;
}
void swap(int *x, int *y){
        int temp;
        temp = *y;
        *y = *x;
        *x = temp;
}

// Call by value
#include<stdio.h>
int swap(int x,int y){
        int temp=x;
        x=y;
        y=temp;
        printf("a = %d,b = %d\n",x,y);
}
int main(){
        int a,b;
        printf("Enter 1st number ('a') :- ");
        scanf("%d",&a);
        printf("Enter 2nd number ('b') :- ");
        scanf("%d",&b);
        printf("a = %d,b = %d\n",a,b);
        printf("Swapped values :- \n");
        swap(a,b);
        return 0;
}
```
![](/images/26i.jpg)
![](/images/26ii.jpg)
---
## 27. To calculate factorial of entered number
```C
#include<stdio.h>
int main(){
    int n1,n0,sum;
    sum=1;
    printf("Enter Number :- ");
    scanf("%d",&n1);
    for(int x=n1;x>1;x--){
        sum=sum*x;
        printf("%d * ",x);
        n1=n1-1;
    }
    printf("1");
    printf("\n");
    printf("%d",sum);
    return 0;
}
```
![](/images/27.jpg)
---
## 28. Program to print febonacci series
```C
#include<stdio.h>
int main(){
    int y,n1,n2,fn;
    printf("Enter length of fibonacci series :- ");
    scanf("%d",&y);
    n1=0;
    n2=1;
    printf("0, 1, ");
    for(int x=0;x<=y;x++){
        fn=n1+n2;
        printf("%d, ",fn);
        n1=n2;
        n2=fn;
    }
    return 0;
}
```
![](/images/28.jpg)
---
## 29. Program to calculate average of 5 numbers using function
```C
#include<stdio.h>
int avg(int a1,int a2,int a3,int a4,int a5){
        int result; 
        result=(a1+a2+a3+a4+a5)/5;
        return result;
}
int main(){
        int n1,n2,n3,n4,n5,average;
        printf("Enter 5 numbers:-\n");
        scanf("%d",&n1);
        scanf("%d",&n2);
        scanf("%d",&n3);
        scanf("%d",&n4);
        scanf("%d",&n5);
        average=avg(n1,n2,n3,n4,n5);
        printf("Average of the numbers is :-  %d",average);
        return 0; 
}
```
![](/images/29.jpg)
---
## 30. Program to implement linear serach and binary search
```C
#include <stdio.h>
#include <stdlib.h>
void linear_search(int search_key,int array[100],int n){
        int i,location;
        for(i=1;i<=n;i++){
                if(search_key == array[i]){
                        location = i;
                        printf("______________________________________\n");
                        printf("The location of Search = %d is %d\n",search_key,location);
                        printf("______________________________________\n");
                }
        }
}
void binary_search(int search_key,int array[100],int n){
        int mid,i,low,high;
        low = 1;
        high = n;
        mid = (low + high)/2;
        i=1;
        while(search_key != array[mid]){
                if(search_key <= array[mid]){
                        low = 1;
                        high = mid+1;
                        mid = (low+high)/2;
                }
                else{
                        low = mid+1;
                        high = n;
                        mid = (low+high)/2;
                }
        }
        printf("__________________________________\n");
        printf("location=%d\t",mid);
        printf("Search=%d Found!\n",search_key);
        printf("__________________________________\n");
}
int main(){
        int array[100],search_key,i,j,n,low,high,location,choice;
        void linear_search(int search_key,int array[100],int n);
        void binary_search(int search_key,int array[100],int n);
        system("cls");
        printf("ENTER THE SIZE OF THE ARRAY:-");
        scanf("%d",&n);
        printf("ENTER THE ELEMENTS OF THE ARRAY:-\n");
        for(i=1;i<=n;i++){
                scanf("%d",&array[i]);
        }
        printf("ENTER THE SEARCH:-");
        scanf("%d",&search_key);
        printf("___________________\n");
        printf("1.LINEAR SEARCH\n");
        printf("2.BINARY SEARCH\n");
        printf("___________________\n");
        printf("ENTER YOUR CHOICE:-");
        scanf("%d",&choice);
        switch(choice){
                case 1:
                        linear_search(search_key,array,n);
                        break;
                case 2:
                        binary_search(search_key,array,n);
                        break;
                default:
                        exit(0);
        }
        return 0;
}
```
![](/images/30i.jpg)
![](/images/30ii.jpg)
---
## 31. Program to implement bubble sort
```C
#include <stdio.h>
int main(){
        int array[50], n, c, d, swap;
        printf("Enter number of elements:- ");
        scanf("%d", &n);
        printf("Enter %d integers:- \n", n);
        for (c = 0; c < n; c++){
                scanf("%d", &array[c]);
        }
        for (c = 0 ; c < n - 1; c++){
                for (d = 0 ; d < n - c - 1; d++){
                        if (array[d] > array[d+1]){
                                swap = array[d];
                                array[d] = array[d+1];
                                array[d+1] = swap;
                        }
                }
        }
        printf("Sorted in ascending order:-\n");
        for (c = 0; c < n; c++){
                printf("%d, ", array[c]);
        }
        return 0;
}
```
![](/images/31.jpg)
---
## 32. Program to store information of students using array of structures
```C
#include<stdio.h>
struct student{                                                                 
  char name[15],address[30];                                                    
  int roll,grade;                                                               
};                                                                              
int main(){                                                                     
        int n1,i;                                                               
        printf("Enter number of students:- ");                                  
        scanf("%d",&n1);                                                        
        struct student s[n1];                                                   
        for(i=0;i<n1;i++){                                                      
                printf("\n");                                                   
                printf("Enter records for student[%d]\n",i+1);                  
                printf("Enter name:- ");                                        
                scanf("%s",s[i].name);                                          
                printf("Enter address:- ");                                     
                scanf("%s",s[i].address);                                       
                printf("Enter Class 'in numbers':- ");                          
                scanf("%d",&s[i].grade);                                        
                printf("roll number:- ");                                       
                scanf("%d",&s[i].roll);                                         
        }                                                                       
        printf("\n");                                                           
        printf("Records of the students are here \n");                          
        for(i=0;i<n1;i++){                                                      
                printf("Student %d\n",i+1);                                     
                printf("Name:- %s\n",s[i].name);                                
                printf("Address:- %s\n",s[i].address);                          
                printf("Class :- %d\n",s[i].grade);                             
                printf("Roll No.:- %d\n",s[i].roll);                            
                printf("\n");                                                   
        }                                                                       
        return 0;                                                               
}
```
![](/images/32.jpg)
---
## 33. Programs to find transpose of a matrix
```C
#include<stdio.h>                                                               
int main()                                                                      
{                                                                               
        int a[10][10], t[10][10], r, c, i, j;                                   
        printf("Enter rows and columns of matrix:- ");                          
        scanf("%d %d", &r, &c);                                                 
        printf("Enter elements of matrix:-\n");                                 
        for(i=0; i<r; ++i){                                                     
                for(j=0; j<c; ++j){                                             
                        printf("Enter element a %d %d:- ",i+1, j+1);            
                        scanf("%d", &a[i][j]);                                  
                }                                                               
        }                                                                       
        printf("Entered Matrix:-\n");                                           
        for(i=0; i<r; ++i){                                                     
                for(j=0; j<c; ++j){                                             
                        printf("%d ", a[i][j]);                                 
                        if (j == c-1){                                          
                                printf("\n");                                   
                        }                                                       
                }                                                               
        }                                                                       
        for(i=0; i<r; ++i){                                                     
                for(j=0; j<c; ++j){                                             
                        t[j][i] = a[i][j];                                      
                }                                                               
        }                                                                       
        printf("Transpose of Matrix:-\n");                                      
        for(i=0; i<c; ++i){                                                     
                for(j=0; j<r; ++j){                                             
                        printf("%d ",t[i][j]);                                  
                        if(j==r-1){                                             
                                printf("\n");                                   
                        }                                                       
                }                                                               
        }                   
    return 0;      
}
```
![](/images/33.jpg)
---
## 34. Program to print the address of variable using pointer
```C
#include <stdio.h>
int main() {
  int variable;
  int *pointer;
  variable = 99;
  pointer = &variable;
  printf("Address of variable = %p", &pointer);
  return 0;
}
```
![](/images/34.jpg)
---
## 35. Program to access array using pointer
```C
#include <stdio.h>
int main(){
        int data[5],i;
        printf("Enter 5 elements:- \n");
        for(i = 0; i < 5; ++i){
                scanf("%d", data + i);
        }
        printf("5 Elements you entered:- \n");
        for(i = 0; i < 5; ++i){
                printf("%d\n", *(data + i));
        }
        return 0;
}
```
![](/images/35.jpg)
---
