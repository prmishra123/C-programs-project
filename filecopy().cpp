//PROGRAM TO COPY ONE FILE TO OTHER USING FILE HANDLING 
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
char c;
FILE *f1,*f2;
clrscr();
f1=fopen("abc.txt","r");
f2=fopen("xyz.txt","w");
if((f1==NULL)&&(f2==NULL))
 {
 printf("error occured");
 }
 while((c=fgetc(f1))!=EOF)
 fputc(c,f2);
 printf("\nfiles are copied successfully");
 fclose(f2);
 fclose(f1);
 getch();
