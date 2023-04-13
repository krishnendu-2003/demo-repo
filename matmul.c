#include<stdio.h>
int main()
{
int r1,c1,r2,c2, a[100][100],b[100][100],m[100][100];
int i,j,k;
//printf("Enter the size of the array:\n");
//scanf("%d",&N);

printf("First array:\n");
printf("enter the no of elements of the row\n");
scanf("%d",&r1);
printf("enter the no of elements of the column\n");
scanf("%d",&c1);
printf("Enter the elements of the first array:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d", &a[i][j]);
}
}

printf(" 2nd array:\n");
printf("enter the no of elements of the row\n");
scanf("%d",&r2);
printf("enter the no of elements of the column\n");
scanf("%d",&c2);
printf("Enter the elements of the 2nd array:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d", &b[i][j]);                       
}
}

printf("Matrix multiplication:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
m[i][j]=0;
for(k=0;k<c1;k++)
{
m[i][j]=m[i][j]+ a[i][k]*b[k][j];
}
}
}

printf("The soln-- \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d \n",m[i][j]);
}
printf("\n");
}
return 0;
}