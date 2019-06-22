//PROGRAM TO FIND STRING LENGTH, DO REVERSE AND COPY A STRING(WITHOUT USING STRING FUNCTIONS)
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();

 int len=0,j=0,i=0;
 char name[50],s2[50],s1[50];
 printf("enter your name:");
 gets(name);
 for(i=0;name[i]!='\0';i++)
 {
  len++;
 }
 printf("the string length is: %d\n",len);
 for(j=0;name[j]!='\0';j++)
 {
 s2[len-1-j]=name[j];
 }
 s2[j]='\0';
 printf("reverse of the name is: %s\n",s2);
 for(i=0; s2[i]!='\0';i++)
 {
 s1[i]=s2[i];
 }
 s1[i]= '\0';
 printf("string copied is: %s",s1);
 getch(); 
}
