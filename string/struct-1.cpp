#include<stdio.h>
#include<string.h>
struct student
{
  char name[50];
  float avg;
};

int main()
{
  student ar[20];
  int i,n,pos;
  float a=0;
  printf("Enter No of Student: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	fflush(stdin);
    printf("\nEnter the name of student %d: ",i+1);
    gets(ar[i].name);
    printf("Enter the average of student %d: ",i+1);
    scanf("%f",&ar[i].avg);
    if(a<ar[i].avg)
    {
      a=ar[i].avg;
      pos=i;
    }
  }
  printf("\n%s gets the highest Average Marks = %f",ar[pos].name,ar[pos].avg);
  return 0;
}


