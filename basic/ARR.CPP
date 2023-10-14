#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[10],l,i,no,c=0;
  clrscr();
  printf("Enter the size of the array: ");
  scanf("%d",&no);
  printf("Enter the value: ");
  for(i=0;i<no;i++)
  scanf("%d",&ar[i]);
  l=0;
  for(i=0;i<no;i++)
  {
    if(ar[i]%2==0)
    {
      c+=1;
      if(l<ar[i])
	l=ar[i];
    }
  }
  printf("The even number present in the array is %d",c);
  printf("\nThe largest Number is %d",l);
  getch();
}

