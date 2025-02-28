## **PROGRAMMING FOR PPS SOLVING**
### **NAME: PRIYANSHI TANGRI**
### **CRN: 1915340**
### **BRANCH: CSE C1**
### **SUBMITTED TO: MS GOLDENDEEP MAM**
___
 
 ### 1. TO PRINT NAME USING PUTS
 
    #include<stdio.h> 
    int main() 
           { 
    puts("My Name is Priyanshi Tangri\n");
    return 0; 
     }

![](https://i.imgur.com/2ELqDID.jpg)





### 2. TO PRINT COLLEGE NAME
      #include<stdio.h> 
    int main() 
     { 
    puts("Guru Nanak Dev Engineering College,\n");
    puts("Gill Road,\n");
    puts("Ludhiana,Punjab,\n");
    return 0;
    }
![](https://i.imgur.com/8NDJAs8.jpg)



### 3. TO ADD TWO NUMBERS

     #include <stdio.h>
     int main() {
    
     int a,b;

    printf("\nEnter the numbers....");

    printf("\nA:");
    scanf("%d",&a);

     printf("\nB:");
         scanf("%d",&b);

     a=a+b;

    printf("\n Sum of the number is %d/n ",a);

    return 0;

     }

![](https://i.imgur.com/8bgsWYf.jpg)




### 4. TO FIND QUOTIENT AND REMAINDER


     #include <stdio.h>
      int main(){
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
![](https://i.imgur.com/i50Awxh.jpg)
     
### 5.SWAP TWO VARIABLES WITHOUT THIRD VARIABLE

     #include<stdio.h>  
      int main()    
       {    
     int a=30, b=20;      
    printf("Before swap a=%d b=%d\n",a,b);      
    a=a+b;//a=50 (30+20)    
    b=a-b;//b=30 (50-20)    
    a=a-b;//a=20 (50-30)    
    printf("After swap a=%d b=%d\n",a,b);    
    return 0;  
    }    
![](https://i.imgur.com/cGafDH9.jpg)
              
### 6. TO FIND IF NUMBER IS EVEN OR ODD

     #include <stdio.h>
     int main()
    {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);
    return 0;
     }
![](https://i.imgur.com/MfsZkYq.jpg)

### 7. FINDING GREATEST OF TWO NUMBERS



     #include<stdio.h>

      int main() {
    int a,b;
    printf("Enter any two number(A and B): ");
    scanf("%d%d", &a, &b);
    
    if(a>b)
     printf("\nA is largest.....\n");
    else
        printf("\nB is largest.....\n");
    
    return 0;
    }
![](https://i.imgur.com/HW8y0ag.jpg)

### 8. LARGEST OF THREE  NUMBER

     #include <stdio.h>
     int main()
      {
    double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number.\n", n1);
    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.\n", n2);
    if( n3>=n1 && n3>=n2 )
        printf("%.2f is the largest number.\n", n3);
    return 0;
     }
![](https://i.imgur.com/SoHaLpP.jpg)
     
     
     
### 9. FIND GRADES OF STUDENT

    #include<stdio.h>
    void main()
    {
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<50)
    {
        printf("Grade F \n");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade D \n");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Grade C \n");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Grade B \n");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade A \n");
    }
    else
    {
        printf("Grade A+ \n");
    }
    

![](https://i.imgur.com/mnST198.jpg)
### 10. TO PRINT TABLE OF FIVE 

    #include<stdio.h>

     main() { int res;

    for(int i=1;i<=10;i++) {

    res=5*i;
    
       printf("\n5*%d=%d",i,res);
      }

       return 0;
     }
![](https://i.imgur.com/99dtuHh.jpg)
###  11. TO MAKE SIMPLE CALCULATOR USING SWITCH CASE

     #include <stdio.h>
     int main() {
    char operator;
    double firstNumber,secondNumber;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf \n",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
     
     }
     
![](https://i.imgur.com/poos0oT.jpg)
     
     
     
     
### 12.  TO CALCULATE REVERSE OF A NUMBER


     #include <stdio.h>
 
     int main()
     {
      int n, reverse = 0;
 
     printf("Enter a number to reverse\n");
     scanf("%d", &n);
 
      while (n != 0)
      {
    reverse = reverse * 10;
    reverse = reverse + n%10;
    n = n/10;
     }
  
     printf("Reverse of entered number is = %d\n", reverse);
 
     return 0;
     }
![](https://i.imgur.com/AfMkJgA.jpg)
     
     
### 13. TO CHEAK WHETHER NUMBER IS PALINDROME OR NOT


     #include <stdio.h>
 
     int main()
     {
      int n, r = 0, t;
 
     printf("Enter a number to check if it is a palindrome or not\n");
     scanf("%d", &n);
 
     t = n;
 
     while (t != 0)
     {
    r = r * 10;
    r = r + t%10;
    t = t/10;
     }
 
     if (n == r)
    printf("%d is a palindrome number.\n", n);
     else
               printf("%d isn't a palindrome number.\n", n);
 
      return 0 ;
           }
![](https://i.imgur.com/Y65SB8z.jpg)


### 14. TO CHEAK NUMBER IS PRIME OR NOT



     #include <stdio.h>
       int main()
     {
        int i, num, p = 0;
      printf("Please enter a number: \n");
      scanf("%d", &num);
      for(i=1; i<=num; i++)
     {
      if(num%i==0)
      {
         p++;
      }
      }
     if(p==2)
      {
      printf("Entered number is %d "\
             "and it is a prime number.",num);
      }
      else
      {
      printf("Entered number is %d "\
             "and it is not a prime number.",num);
     } 
     return 0;
     }
![](https://i.imgur.com/LSTe3Pu.jpg)

### 15. PRIME NUMBERS BETWEEN 1-100

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

![](https://i.imgur.com/2AIwERo.jpg)


### 16. TO CHEAK WHETHER A NUMBER IS ARMSTRONG OR NOT 

     #include<stdio.h>  
     int main()    
    {    
    int n,r,sum=0,temp;    
    printf("enter the number=");    
     scanf("%d",&n);    
     temp=n;    
     while(n>0)    
     {    
     r=n%10;    
     sum=sum+(r*r*r);    
     n=n/10;    
     }    
     if(temp==sum)    
      printf("armstrong  number\n");    
    else    
    printf("not armstrong number\n");    
    return 0;  
    }
![](https://i.imgur.com/Q5skgsj.jpg)
  ### 17. TO PRINT DIFFRENT PATTERN
  
      #include <stdio.h>
     int main()
     {
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
     }
     
![](https://i.imgur.com/FZXbzr1.jpg)
### 18. PATTERN PRINTING

     #include <stdio.h>
 
     int main()
     {
      int n, i,  c, a = 1;
 
      printf("Enter the number of rows:");
     scanf("%d", &n);
 
      for (i = 1; i <= n; i++)
      {
    for (c = 1; c <= i; c++)
    {
      printf("%d ",a);
      a++;
    }
    printf("\n");
      }
 
     return 0;
    }
     
![](https://i.imgur.com/ZFDelrZ.jpg)
     
### 19.  PATTERN PRINTING


     #include <stdio.h>
     int main()
    {
    int i, space, rows, k=0, count = 0, count1 = 0;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(space=1; space <= rows-i; ++space)
        {
            printf("  ");
            ++count;
        }
        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                printf("%d ", i+k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
    }
    return 0;
     }
     
![](https://i.imgur.com/EcQXiNK.jpg)
     
### 20. TO FIND LARGEST FROM ONE DIMENSTIONAL ARRAY

     #include <stdio.h>
 
     int main()
     {
 
        int array[50], size, i, largest;
 
        printf("Enter the size of the array: ");
	scanf("%d", &size);
 
        printf("Enter %d elements of  the array: ", size);
 
        for (i = 0; i < size; i++)
		scanf("%d", &array[i]);
 
        largest = array[0];
 
        for (i = 1; i < size; i++) 
        {
		if (largest < array[i])
			largest = array[i];
	}
 
        printf("Largest element present in the given array is : %d\n", largest);
 
        return 0;
 
      }
![](https://i.imgur.com/v11LdF4.jpg)


### 21. TO FIND SUM OF N NATURAL NUMBERS 



     #include <stdio.h>
     int main()
    {
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=1; i <= n; ++i)
    {
        sum += i;   
    }
    printf("Sum = %d\n",sum);
    return 0;
     }
![](https://i.imgur.com/120XzeI.jpg)
 ### 22. ADDITION OF TWO MATRICES 
 
      #include <stdio.h>
 
     int main()
     {
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
![](https://i.imgur.com/sQA1fGN.jpg)


### 23. TO CHEAK WHETHER STRING IS PALINDROME OR NOT 



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
![](https://i.imgur.com/h1u6lRp.jpg)


### 24. PROGRAMS TO SWAP TWO NUMBERS BY  CALL BY VALUE

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
    *a = temp;
    }
    
![](https://i.imgur.com/94tE8Ay.jpg)
### 24. SWAP TWO NUMBERS B CALL BY REFERENCE

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
![](https://i.imgur.com/GI6wChh.jpg)
### 25. FACTORIAL WITH RECURSION 

     #include <stdio.h>
    long int multi(int n);
     int main()
     {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, multi(n));
    return 0;
      }
     long int multi(int n)
         {
    if (n >= 1)
       
       }
![](https://i.imgur.com/dXqnzzk.jpg)
 
 
 ### 26.FACTORIAL WITHOUT RECURSION 
 
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

[](https://)https://i.imgur.com/wMEOv0Y.jpg

### 27. TO FIND FIBONACCI SERIES WITH RECURSION 


     #include<stdio.h>
 
     int Fibonacci(int);
 
    int main()
    {
     int n, i = 0, c;
    printf("Enter Number till you want the series:\n");
     scanf("%d",&n);
 
     printf("Fibonacci series\n");
 
     for ( c = 1 ; c <= n ; c++ )
     {
       printf("%d\n", Fibonacci(i));
      i++; 
     }
 
     return 0;
     }
 
     int Fibonacci(int n)
     {
      if ( n == 0 )
      return 0;
     else if ( n == 1 )
       return 1;
     else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
     }
![](https://i.imgur.com/PIjGj8S.jpg)
     
     
     
### 28. TO FIND FIBONACCI SERIES WITHOUT RECURSION 


      #include<stdio.h>    
     int main()    
    {    
      int n1=0,n2=1,n3,i,number;    
     printf("Enter the number of elements:");    
    scanf("%d",&number);    
     printf("\n%d %d",n1,n2); 
    for(i=2;i<number;++i );
      {    
     n3=n1+n2;    
     printf(" %d",n3);    
     n1=n2;    
     n2=n3;    
     }  
    return 0;  
    }
    
![](https://i.imgur.com/HDEIps8.jpg)
    
### 29. TO FIND AVERAGE OF  FIVE NUMBERS USING FUNCTION 

      #include <stdio.h>
     float average(int a, int b, int c, int d, int e){
    return (float)(a+b+c+d+e)/5;
     }
    int main()
     {
    int num1, num2, num3, num4, num5;
    float avg;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     printf("Enter third number: ");
    scanf("%d",&num3);
    printf("Enter fourth number: ");
    scanf("%d",&num4);
     printf("Enter fifth number: ");
    scanf("%d",&num5);
    

    
    avg = average(num1, num2, num3, num4, num5);

                                                                               
    printf("Average of 5 numbers is: %.2f\n",avg);
    return 0;
    }
![](https://i.imgur.com/Q3nvbeK.jpg)

### PROGRAMING TO IMPLEMENT LINEAR SEARCH 

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
![](https://i.imgur.com/G0VioUI.jpg)

### 31. TO IMPLEMENT BINARY SEARCH

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
    
![](https://i.imgur.com/AVqCmwN.jpg)
    
    
###  32. TO SORT LIST USING BUBBLE SORT

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
![](https://i.imgur.com/AxC1w4O.jpg)

### 33. DISPLAYING STUDENT INFORMATION USING ARRAY

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
![](https://i.imgur.com/PP6QAp7.jpg)


### 34. TO FIND TRANSPOSE OF A MATRIX


     #include <stdio.h>
     int main()
     {
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
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
![](https://i.imgur.com/C3mrtPc.jpg)
### 35. PRINT THE ADDRESS OF VARIABLE USING POINTER 

     #include <stdio.h>
     int main() {
     int b;
     int *pt;

     b = 10;
     pt = &b;

     printf("\n[&a ]:Address of B = %p\n", &b);
     return 0;
     } 
     
![](https://i.imgur.com/SxrQvCN.jpg)
     
 ### 36. TO  ACCESS ARRAY USING POINTER
 
 
 
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
 ![](https://i.imgur.com/wdqZRu6.jpg)
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   





















































































     
     
     
     
     
     
     
     
     
     


























    


























