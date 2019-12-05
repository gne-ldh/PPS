//PROGRAM TO FIND SUM OF TWO MATRICES
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3], sum[3][3],i,j;
printf("\nEnter elements of the first 3X3 matrix::");
for(i=0;i<=2;i++)
{ 
printf("\n Enter elements of row %d :: ", i+1);
 for(j=0;j<=2;j++)
 {
   scanf("%d",&a[i][j]);
 }
}
printf("\nEnter elements of the second 3X3 matrix::");
for(i=0;i<=2;i++)
{
printf("\n Enter elements of row %d :: ", i+1);
 for(j=0;j<=2;j++)
 {
   scanf("%d",&b[i][j]);
 }
}
printf("\nThe first 3X3 matrix is::\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
 {
   printf("%d ",a[i][j]);
 }
printf("\n");
}

printf("\nThe second 3X3 matrix is::\n");
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
 {
   printf("%d ",b[i][j]);
 }
