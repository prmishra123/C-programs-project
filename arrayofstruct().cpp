//PROGRAM ON ARRAY OF STRUCTURES TO PRINT RECORD OF STUDENTS

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 5
 struct std
 {
  char name[20];
  int roll_no;
  int marks;
  };
 void  main()
 {
 struct std arr_std[max];
 int i;
 for(i=0;i<max;i++)
 {
  printf("\nEnter details of student %d\n",i+1);
  printf("enter name:");
  scanf("%s",&arr_std[i].name);
  printf("enter roll no:");
  scanf("%d",&arr_std[i].roll_no);
  printf("enter marks:");
  scanf("%d",&arr_std[i].marks);
  }
  printf("\n");
  printf("Name\tRoll no\tMarks\n");
  for(i=0;i<max;i++)
  {
   printf("%s\t%d\t%d\n",arr_std[i].name,arr_std[i].roll_no,arr_std[i].marks);
  }
  getch();
}