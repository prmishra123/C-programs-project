// PROGRAM TO CONVERT LOWER TO UPPER CASE & VICE VERSA in c (WITHOUT USING STRING - FUNCTIONS)
#include<stdio.h>
#include<conio.h>
void main()
{

	char str1[20],str2[20];
	int i=0;
	clrscr();
	printf("enter the string in lower case:");
	gets(str1);
	while(str1[i]!='\0')
	{
		if(str1[i]>='a' && str1[i]<='z')

		str1[i]=str1[i]-32;
		i++;
	}
	printf("the modified string in upper case is: %s\n",str1);
	printf("enter the string in upper case:");
	gets(str2);
	while(str2[i]!='\0')
	{
		if(str2[i]>='A' && str2[i]<='Z')
		str2[i]=str2[i]+32;
		i++;
	}
	str2[i]='\0';
	printf("the modified string in lower case:%s\n",str2);

	getch();
}

