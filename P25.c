// To perform basic string operations

#include<stdio.h>
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
