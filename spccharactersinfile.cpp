//PROGRAM TO COUNT THE UPPERCASE, LOWERCASE  AND SPECIAL CHARACTERS PRESENT IN THE CONTENTS OF THE FILE

#include<stdio.h>
#include<conio.h>
int main()
{
 char text[100];
 int i;
 clrscr();
 int countL,countU,countS;
 printf("enter any string:");
 gets(text);
 printf("\nentered string is:%s\n",text);
 countL=countU=countS=0;
 for(i=0;text[i]!='\0';i++)
 {
  if((text[i]>='A'&& text[i]<='Z')||(text[i]>='a'&&text[i]<='z'))
  {
   if((text[i]>='A'&& text[i]<='Z'))
   {
   countU++;
   }
   else
   {
   countL++;
   }
  }
  else
  {
    countS++;
  }
 }
 printf("\n upper case characters:[%d]\n",countU);
 printf("\n lower case characters:[%d]\n",countL);
 printf("\n special characters: [%d]\n",countS);
 return 0;
}
