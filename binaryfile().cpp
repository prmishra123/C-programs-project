//A PROGRAM TO STORE RECORD OF A STUDENT TO BINARY FILE
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct student
 {
 int roll_no;
 char *name;
 int m1,m2,m3;
 }s1;
 void main()
{
 FILE *fp;
 clrscr();
 fp=fopen("Record.dat","wb");
 if(fp==NULL)
 {
 printf("file could not open");
 exit (0);
 }
 printf("enter student details\n");
 printf("Roll no:");
 scanf("%d",&s1.roll_no);
 printf("Name:");
 scanf("%s",s1.name);
 printf("marks in three subjects:");
 scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
 fwrite(&s1,sizeof(s1),1,fp);
 printf("\nRecord has been added successfully...!!");
 fclose(fp);
 getch();
}
