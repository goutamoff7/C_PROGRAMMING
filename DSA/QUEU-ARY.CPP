#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ar[4],f=-1,n=4,r=-1;
void insrt();
void dlt();
void disp();
void main()
{
  int a,c;
  clrscr();
  do
  {
    printf("1.Insert, 2.Delete, 3.Display, 4.Exit:");
    scanf("%d",&a);
    switch(a)
    {
      case 1:	insrt();
		break;
      case 2:	dlt();
		break;
      case 3:	disp();
		break;
      case 4:	exit(0);
      default:	printf("\nYou have entered wrong choice ");
    }
    printf("\nEnter 1 to continue: ");
    scanf("%d",&c);
  }while(c==1);
  getch();
}
void insrt()
{
  if(r==n-1)
    printf("The Queue is full");
  else
  {
    printf("Enter Data: ");
    scanf("%d",&ar[++r]);
  }
}
void dlt()
{
  if(r==f)
  {
    printf("The Queue is empty");
    r=f=-1;
  }
  else
  {
    f++;
    printf("Front Data Deleted");
  }
}
void disp()
{
  int i;
  if(r==f)
    printf("The Queue is empty");
  else
  {
    for(i=f+1;i<=r;i++)
      printf("%d-",ar[i]);
  }
}

