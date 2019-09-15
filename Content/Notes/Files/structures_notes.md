# Structures in C

## What is a Structutre?

- A structure is a user defined data type in C. A structure creates a data type that can be used to group items of possibly different types into a single type.

## Array Vs Structure

- An array is a collection of variables of **same data type** whereas a structure is a collection of variables of **different data type**.

## Defining a Structure

To define a structure, you must use the struct statement. The struct statement defines a new data type, with more than one member. The format of the struct statement is as follows:

	struct [structure_name] {
	
	   member definition;
	   member definition;
	   ...
	   member definition;
	} [one or more structure variables];

Example of defining a structure:

	struct Books {
	   char  title[50];
	   char  author[50];
	   char  subject[100];
	   int   book_id;
	} book;

## Accessing Structure Members

To access any member of a structure, we use the member access operator (.). You would use the keyword struct to define variables of structure type. The following example shows how to use a structure in a program:

	#include <stdio.h>
	 
	struct Student {
	   char  Name[50];
	   char  Class[50];
	   int   RollNo;
	   int   Age;
	   float Height;
	};
	 
	int main( ) {
	
	   struct Student St1;        /* Declare St1 of type Student */
	
	   /* Student1 data entry */
	   printf("Enter Student data: \n");
	   printf("Name: ");
 	   scanf("%s", St1.Name); 
	   printf("Class: ");
 	   scanf("%s", St1.Class); 
	   printf("Roll No: ");
 	   scanf("%d", &St1.RollNo); 
	   printf("Age: ");
 	   scanf("%d", &St1.Age); 
	   printf("Height (in cm): ");
 	   scanf("%f", &St1.Height); 
 	
	   /* print Student1 info */
 	   printf( "Student 1 Name : %s\n", St1.Name);
 	   printf( "Student 1 Class : %s\n", St1.Class);
 	   printf( "Student 1 Roll No : %d\n", St1.RollNo);
 	   printf( "Student 1 Age : %d\n", St1.Age);
 	   printf( "Student 1 Height : %f\n", St1.Height);
 	return 0;
 	}
 

Example 2, adding complex numbers using structures:

	#include<stdio.h>
	struct comp{
	    float real;
	    float imag;
	};
	struct comp comp1,comp2;
	int main(){
	    struct comp result;
	    printf("Enter Complex Number 1: ");
	    scanf("%f%f",&comp1.real, &comp1.imag);
	    printf("Enter Complex Number 2: ");
	    scanf("%f%f",&comp2.real,&comp2.imag);
	    result.real = comp1.real + comp2.real;
	    result.imag = comp1.imag + comp2.imag;
	    printf("The sum is %.2f + i%.2f\n", result.real,result.imag);
	    return 0;
	}

## Array of Structures

An array of structres in C can be defined as the collection of multiple structures variables where each variable contains information about different entities. The array of structures in C are used to store information about multiple entities of different data types. The array of structures is also known as the collection of structures.

Example:

	    #include<stdio.h>  
	    struct student{    
	    	int rollno;    
	    	char name[10];    
	    };    
	    int main()
	    {    
	    	int i;    
	    	struct student st[5];    
	    	printf("Enter Records of 5 students");    
	    	for(i=0;i<5;i++)
		{    
	    		printf("\nEnter Rollno: ");    
	    		scanf("%d",&st[i].rollno);    
	    		printf("\nEnter Name: ");    
	    		scanf("%s",&st[i].name);    
		}	    
	    	printf("\nStudent Information List:");    
	    	for(i=0;i<5;i++)
		{    
	    		printf("\nRollno:%d, Name:%s \n",st[i].rollno,st[i].name);    
	    	}    
	        return 0;    
	    }
