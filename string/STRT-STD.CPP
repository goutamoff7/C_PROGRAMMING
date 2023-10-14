#include<stdio.h>
#include<conio.h>
struct student
{
  char name[20];
  float avg;
};
void main()
{
  struct student ar[20];
  int i,n,pos,max=0;
  clrscr();
  printf("Enter No of Student: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nEnter the name of student %d: ",i+1);
    scanf("%[^\n]s",ar[i].name);
    printf("Enter the average of student %d: ",i+1);
    scanf("%f",&ar[i].avg);
   /* if(max<ar[i].avg)
    {
      max=ar[i].avg;
      pos=i;
    }*/
    fflush(stdin);
  }
  printf("\n%s gets the highest average marks = %f",ar[pos].name,ar[pos].avg);
  getch();
}