//Program to implement linear search and Binary search */

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
