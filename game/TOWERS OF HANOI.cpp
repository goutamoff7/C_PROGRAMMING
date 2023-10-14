#include<stdio.h>
void tower(int,char,char,char);
int main()
{
  int n;
  printf("Enter No. of Disc: ");
  scanf("%d",&n);
  printf("Tower of Hanoi for %d Disc: ",n);
  tower(n,'A','B','C');
  return 0;
}

void tower(int n,char A,char B,char C)
{
  if(n==1)
    printf("\nMove Disk from %c to %c",A,C);
  else
  {
    tower(n-1,A,C,B);
    tower(1,A,B,C);
    tower(n-1,B,A,C);
  }
}

