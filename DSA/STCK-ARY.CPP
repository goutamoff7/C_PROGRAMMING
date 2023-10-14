#include<stdio.h>
#include<conio.h>
#include<process.h>
int ar[50],p=-1,n=40;
void push();
void pop();
void disp();
void main()
{
  int a,c;
  clrscr();
  do
  {
    printf("1.Push, 2.Pop, 3.Display, 4.Exit:");
    scanf("%d",&a);
    switch(a)
    {
      case 1:	push();
		break;
      case 2:	pop();
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
void push()
{
  if(p<n)
  {
    printf("Enter Data: ");
    scanf("%d",&ar[++p]);
  }
  else
    printf("Stack is full");
}
void pop()
{
  if(p==-1)
    printf("The stack is empty");
  else
    p--;
}
void disp()
{
  int i;
  if(p==-1)
    printf("The stack is empty");
  else
  {
    for(i=0;i<=p;i++)
      printf("%d-",ar[i]);
  }
}

