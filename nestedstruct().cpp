//PROGRAM ON NESTED STRUCTURE TO PRINT DETAILS OF STUDENT
#include<stdio.h>
#include<conio.h>
struct person
 {
  char name[20];
  int age;
  char dob[10];
 };
 struct student
 {
 struct person info;
 int roll_no;
 int marks;
 };
 void main()
 {
 clrscr();
 struct student s1;
 printf("details of student:\n\n");
 printf("enter name:");
 scanf("%s",s1.info.name);
 printf("enter age:");
 scanf("%d",&s1.info.age);
 printf("enter DOB:");
 scanf("%s",s1.info.dob);
 printf("enter roll no:");
 scanf("%d",&s1.roll_no);
 printf("enter marks:");
 scanf("%d",&s1.marks);
 printf("\n**************************\n\n");
 printf("name: %s\n",s1.info.name);
 printf("age: %d\n",s1.info.age);
 printf("DOB: %s\n",s1.info.dob);
 printf("roll no: %d\n",s1.roll_no);
 printf("marks: %d\n",s1.marks);
 getch();
 }



 


