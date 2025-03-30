#          **PROGRAMMING FOR PROGRAM SOLVING ESC-18105** 
##         **Upneet Kaur**
##         **IT B2** 
##         **1921109**
#          **GURU NANAK DEV ENGINEERING COLLEGE, LUDHIANA**
![LOGO](https://raw.githubusercontent.com/01eyon/1914100/master/Capture.PNG)

**1. To Store the of marks scored by students**
       
     #include<stdio.h>
     int main()
     {
       int i,n,marks;
       char name[30];
       printf("Enter the number of students:");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
        {
           printf("Enter the name:",name);
           scanf("%s",name);
           printf("Enter marks:",marks);
           scanf("%d",&marks);
        }
        return 0;
     }

    Output:-
    Enter the number of students:4
    Enter the name:Sarvansh
    Enter the marks:6
    Enter the name:Sahil
    Enter the marks:7
    Enter the name:Ritik
    Enter the marks:8
    Enter the name:Manthan
    Enter the marks:9
**2. Program to add 2 numbers:-**

    #include<stdio.h>
    int main()
    {
       int a,b,c;
       printf("Enter the value of a:");
       scanf("%d",&a);
       printf("Enter the value of b:");
       scanf("%d",&b);
       printf("The sum of a and b is %d",c=a+b);
       return 0;
    }

    Output:-
     Enter the value of a:33
     Enter the value of b:56
     The sum of a and b is 89
**3. Program to print any table:-**

    #include<stdio.h>
    int main()
    {
       int x, y, z;
       printf("Enter the table you want to print:");
       scanf("%d",&x);
       for(y=1;y<=10;y++)
         {
           printf("\n%d x %d =%d\n",x,y,z=x*y);
         }
       return 0;
    }

    Output:-
     Enter the table you want to print:89
     89 x 1=89
     89 x 2=178
     89 x 3=267
     89 x 4=356
     89 x 5=445
     89 x 6=534
     89 x 7=623
     89 x 8=712
     89 x 9=801
     89 x 10=890
**4. Program to print hello world**

    #include<stdio.h>
    int main()
    {
       puts("_____________");
       puts("|Hello World"|);
       puts("_____________");
    }

    Output:-
    _____________
    |Hello World|
    _____________
**5. To print PPS Using puts:-**

    #include<stdio.h>
    int main()
    {
       puts("PPPPP    PPPPP      SSSS  ");
       puts("P    P   P    P    S      ");
       puts("P     P  P     P  S       ");
       puts("P    P   P    P    S      ");
       puts("PPPPP    PPPPP      SSS   ");
       puts("P        P             S  ");
       puts("P        P              S ");
       puts("P        P             S  ");
       puts("P        P         SSSS   ");
    } 
    Output:-
    PPPPP    PPPPP     SSSS
    P    P   P    P   S
    P     p  P     P S
    P    p   P    P   S
    PPPPP    PPPPP     SSS
    P        P            S
    P        P             S
    P        P            S
    P        P        SSSS
**6. Program to print a calcuator:-**

    #include<stdio.h>
    int main()
    {
        puts("\n\
             _______________\n\
            | 1 | 2 | 3 |   |\n\
            |___|___|___|   |\n\
            | 4 | 5 | 6 | + |\n\
            |___|___|___|___|\n\
            | 7 | 8 | 9 | - |\n\
            |___|___|___|___|\n\
            |     0     | * |\n\
            |___________|___|\n");
    }
    Output:-
     _______________
    | 1 | 2 | 3 |   |
    |___|___|___|   |
    | 4 | 5 | 6 | + |
    |___|___|___|___|
    | 7 | 8 | 9 | - |
    |___|___|___|___|
    |     0     | * |
    |___________|___|
**7. To print a face using puts:-**

    #include<stdio.h>
    int main()
    {
        puts("         OOOOOOOO        ");
        puts("        O ^   ^  O       ");
        puts("       O  -   -   O      ");
        puts("      O            O     ");
        puts("     O      ^       O    ");
        puts("      O            O     ");
        puts("       O  -----   O      ");
        puts("        O        O       ");
        puts("         OOOOOOOO        ");
    }
    Output:-
         OOOOOOOO     
        O ^   ^  O
       O  -   -   O
      O            O
     O      ^       O
      O            O
       O  -----   O
        O        O 
         OOOOOOOO
         
**8. To Identify prime numbers:-**

    #include<stdio.h>
    int main()
    {
        int i, n, count=0;
        printf("Enter the Number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
           if(n%i==0)
            {
               count ++;
            }
        }
        if(count==2)
           printf("Its a Prime Number");
        else
           printf("Its not a prime Number");
    }
    Output:-
    Enter the number:23
    Its a Prime Number
**9. Program of Multiplication of 2x2 Matrix**
  
    #include<stdio.h>
    int main()
    {
       float a,b,c,d,e,f,g,h,i,j,k,l;

       printf("\nSample of Ist matrix: | a=1      b=2 |\n                      | c=3      d=4 |\n\n\
       Sample of 2nd matrix: | e=5      f=6 |\n                      | f=7      h=8 |\n\n");

       printf("Enter The Valve of a: ");
       scanf("%f",&a);
       printf("Enter The Valve of b: ");
       scanf("%f",&b);
       printf("Enter The Valve of c: ");
       scanf("%f",&c);
       printf("Enter The Valve of d: ");
       scanf("%f",&d);
       printf("Enter The Valve of e: ");
       scanf("%f",&e);
       printf("Enter The Valve of f: ");
       scanf("%f",&f);
       printf("Enter The Valve of g: ");
       scanf("%f",&g);
       printf("Enter The Valve of h: ");
       scanf("%f",&h); 

       i=(a*e)+(b*g);
       j=(a*f)+(b*h);
       k=(c*e)+(d*g);
       l=(c*f)+(d*h);

       printf("\nMultiplication of A,B is: | %.2f     %.2f |\n                          | %.2f     %.2f |",i,j,k,l);

       return 0;
    }

    Output:-
    Sample of Ist matrix: | a=1      b=2 |
                          | c=3      d=4 |

    Sample of 2nd matrix: | e=5      f=6 |
                          | f=7      h=8 |

    Enter The Valve of a: 5 
    Enter The Valve of b: 6
    Enter The Valve of c: 7
    Enter The Valve of d: 3
    Enter The Valve of e: 2
    Enter The Valve of f: 3
    Enter The Valve of g: 3
    Enter The Valve of h: 5

    Multiplication of A,B is: | 28.00     45.00 |
                              | 23.00     36.00 |
**10. Program to multily 2 numbers using Function:-**

    #include<stdio.h>
    float guna(float a, float b);
    int main()
    {
        float a, b, multi;
        printf("Enter the 1st Value:");
        scanf("%f",&a);
        printf("Enter the 2nd Value:");
        scanf("%f",&b);
        multi=guna(a,b);
        printf("Multiplication of a and b is%.3f", multi);
        return 0;
    }
    float guna(float a, float b)
       {
          return a*b;
       }

    Output:-
    Enter the 1st Value:5
    Enter the 2nd Value:4
    Multiplication of a and b is 20.000

**11. Program to find Area of the Circle:-**
    
    #include<stdio.h>
    int main()
    {
        float r, A;
        float pi = 22/7;
        printf("Enter the Radius of Circle:");
        scanf("%f",&r);
        A = pi*r*r;
        printf("Area of Circle is %.3f",A);
        return 0;
    }
    Output:-
    Enter the Radius of Circle:4
    Area of Circle is 48.000

**12. Program to Find Average of Three numbers:-**

    #include<stdio.h>
    int main()
    {
        float a, b, c, d;
        printf("Enter the value of a:");
        scanf("%f",&a);
        printf("Enter the value of b:");
        scanf("%f",&b);
        printf("Enter the value of c:");
        scanf("%f",&c);
        printf("The average of a, b and c is %.2f",d=(a+b+c)/3);
        return 0;
    }
    Output:-
    Enter the value of a:6
    Enter the value of b:9    
    Enter the value of c:19
    The average of a, b and c is 11.33

**13. Program which can find the maximum among 2 numbers:-**

    #include<stdio.h>
    int main()
    {
        float a, b;
        printf("Enter the 1st number:",a);
        scanf("%f",&a);
        printf("Enter the 2nd number:",b);
        scanf("%f",&b);
        if(a>b)
        {
            printf("%.2f is greater than %.2f",a, b);
        }
        else
        {
            printf("%.2f is greater than %.2f",b, a);
        }
        return 0;
    }
    Output:-
    Enter the 1st number:45.32
    Enter the 2nd number:45.48
    45.48 is greater than 45.32
