//PROGRAM TO CHECK WHETHER A STRING IS PALINDROME OR NOT
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 clrscr();
 char string1[20];
 int i,len=0;
 int flag=0;
 printf("enter a string:");
 scanf("%s",string1);
 for(i=0;string1[i]!='\0';i++)
    {
    len++;
    }
 for(i=0;i<len;i++){
 if(string1[i]!=string1[len-i-1]){
  flag=1;
  break;
  } }
 if(flag){
	 printf("%s is not palindrome",string1);
 }
 else {
	 printf("%s is palindrome",string1);
      }
      return 0;
      }
