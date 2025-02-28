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
