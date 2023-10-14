/*Enter employees name and salary multiple times
and fetch the information using Employee Code*/
#include<stdio.h>
#include<conio.h>
struct emp
 {
   int code;
   int sal;
   char name[20];
 };
 void main()
 {
   struct emp e[10];
   int i,n,f;
   clrscr();
   printf("\nNo of Record :");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     e[i].code=i+1;
     printf("\nEnter Details for Employee %d",e[i].code);
     printf("\nEnter Employee Name : ");
     scanf("%s",&e[i].name);
     printf("Enter the Salary :");
     scanf("%d",&e[i].sal);
   }
   printf("\nEnter Employee Code to fetch Details:");
   scanf("%d",&f);
   for(i=0;i<n-1;i++);
     if(f<=n)
     {
       printf("\nEmployee Code : %d",e[i].code);
       printf("\nEmployee Name %s",e[i].name);
       printf("\nEmployee Salary : %d",e[i].sal);
     }
     else
       printf("Wrong Employee Code");
   getch();
 }

