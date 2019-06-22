//PROGRAM TO DO ADD. , SUB. , MUL. , TRANSPOSE OF 2 MATRICES IN C (USING SWITCH)
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i,j,a[10][10],b[10][10],c[10][10],sum[100][100],x,y;
 printf("input rows and columns of matrices:\n");
 scanf("%d%d",&i,&j);
 printf("input first matrix:\n");
 for(x=0;x<i;x++)
 {
  for(y=0;y<j;y++)
  {
   scanf("%d",&a[x][y]);
  }
 }
 printf("input second matrix:\n");
 for(x=0;x<i;x++)
 {
  for(y=0;y<j;y++)
  {
   scanf("%d",&b[x][y]);
  }
 }
 printf("enter the number 1-> addition,2->subtraction,3->transpose & 4->multiplication of the two matrix\n");
 scanf("%d",&n);
 switch(n)
 {
  case 1:
  for(x=0;x<i;x++)
   {
    for(y=0;y<j;y++)
     {
      c[x][y]=a[x][y]+b[x][y];
     }
   }
   printf("the resultant matrix is:\n");
  for(x=0;x<i;x++)
    {
     for(y=0;y<j;y++)
     {
     printf("%d\t",c[x][y]);
     }
     printf("\n");
    }
     break;
  case 2:
   for(x=0;x<i;x++)
    {
     for(y=0;y<j;y++)
     {
     c[x][y]=a[x][y]-b[x][y];
     }
    }
    printf("the resultant matrix is:\n");
   for(x=0;x<i;x++)
    {
     for(y=0;y<j;y++)
     {
     printf("%d\t",c[x][y]);
     }
    }
     break;
  case 3:
     printf("enter which matrix to transpose:\n");
     int k;
     scanf("%d",&k);
     printf("the transpose of the matrix is:\n");
     if(k==1)
      {
      for(x=0;x<j;x++)
       {
	for(y=0;y<i;y++)
	{
	printf("%d\t",a[y][x]);
	}
	printf("\n");
       }
     }
     else
     for(x=0;x<j;x++)
      {
      for(y=0;y<i;y++)
       {
	printf("%d\t",b[y][x]);
       }
       printf("\n");
      }
    break;
  case 4:
    printf("the resultant matrices is:\n");
    int z;
    for(x=0;x<i;x++)
     {
      for(y=0;y<i;y++)
      { sum[x][y]=0;
      for(z=0;z<i;z++)
       {
       sum[x][y]+=a[x][z]*b[z][y];
       }
       printf("%d\t",sum[x][y]);
      }
      printf("\n");
     }
   break;
  }
 getch();
}

