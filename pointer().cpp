//Program to access elementsv of array using pointer.
#include<stdio.h>
#include<conio.h>
 void main()
 {
 clrscr();
 int a[50],i;
 int *ptr;
 ptr=a;
 printf("\nenter array elements\n");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);
 for(i=0;i<10;i++)
 {
 printf("the entered element is:%d\n",*ptr);
 ptr++;
 }
 getch();
 }
