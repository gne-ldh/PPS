//PROGRAM TO FIND PRODUCT OF TWO MATRICES
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
