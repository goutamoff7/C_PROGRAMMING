#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
void A(int n);
void B(int n);
void C(int n);
void D(int n);
void E(int n);
void F(int n);
void G(int n);
void H(int n);
void I(int n);
void J(int n);
void K(int n);
void L(int n);
void M(int n);
void N(int n);
void O(int n);
void P(int n);
void Q(int n);
void R(int n);
void S(int n);
void T(int n);
void U(int n);
void V(int n);
void W(int n);
void X(int n);
void Y(int n);
void Z(int n);

void main()
{
  char str[50];
  int n,i=0,ch;
  clrscr();
  printf("Enter the Word: ");
  gets(str);
  while(str[i]!=NULL)
    {
    if(str[i]!=' '&& str[i]>='a'&& str[i]<='z')
       str[i]=str[i]-32;
       i++;
    }
  i=0;
  printf("Enter Font size: ");
  scanf("%d",&n);
  while(str[i]!=NULL)
  {
    if(str[i]!=' ' || str[i]!=NULL)
      ch=str[i]-64;
    switch(ch)
    {
	case 1 :	A(n);
			break;
	case 2 :	B(n);
			break;
	case 3 :	C(n);
			break;
	case 4 :	D(n);
			break;
	case 5 :	E(n);
			break;
	case 6 :	F(n);
			break;
	case 7 :	G(n);
			break;
	case 8 :	H(n);
			break;
	case 9 :	I(n);
			break;
	case 10 :	J(n);
			break;
	case 11 :	K(n);
			break;
	case 12 :	L(n);
			break;
	case 13 :	M(n);
			break;
	case 14 :	N(n);
			break;
	case 15 :	O(n);
			break;
	case 16 :	P(n);
			break;
	case 17 :	Q(n);
			break;
	case 18 :	R(n);
			break;
	case 19 :	S(n);
			break;
	case 20 :	T(n);
			break;
	case 21 :	U(n);
			break;
	case 22 :	V(n);
			break;
	case 23 :	W(n);
			break;
	case 24 :	X(n);
			break;
	case 25 :	Y(n);
			break;
	case 26 :	Z(n);
			break;
    }
  printf("\n\n");
  i++;
 }
 getch();
}

void A(int n)
{
  int i,j,k;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
      printf(" ");
    for(k=1;k<=i*2-1;k++)
    {
      if(k==1 || k==i*2-1 || i==n/2+1)
	printf("*");
      else
	printf(" ");
    }
    printf("\n");
  }
}

void B(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+1;j++)
    {
      if(i==1 && j==n/2+1  || i==n/2+1 && j==n/2+1 || i==n && j==n/2+1)
	printf(" ");
      else if(j==1 || j==n/2+1 || i==1 || i==n/2+1 || i==n)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void C(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j<=2 || i==n && j<=2)
	printf(" ");
      else if(j==1 || i==1 || i==n || i<=3 && j==n/2+2 ||  i>=n-2 && j==n/2+2)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void D(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j==n/2+2  || i==n && j==n/2+2)
	printf(" ");
      else if(j==1 || i==1 || i==n || j==n/2+2)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void E(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==n/2+1 && j>n/2)
	printf(" ");
      else if(j==1 || i==1 || i==n || i==n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void F(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==n/2+1 && j>n/2)
	printf(" ");
      else if(j==1 || i==1 || i==n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void G(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j<=2 || i==n && j<=2)
	printf(" ");
      else if(j==1 || i==1 || i==n || i<=3 && j==n/2+2 || i>=n/2+2 && j==n/2+2 || i==n/2+2 && j>=n/2)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void H(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(j==1 || i==n/2+1 || j==n/2+2)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void I(int n)
{
  int i,j,p;
  p=n/2+2;
  if(p%2==0)
    p++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=p;j++)
    {
      if(i==1 || i==n || j==p/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

void J(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==n && j<=2)
	printf(" ");
      else if(i==n || j==n/2+2 ||  i>=n-2 && j==n/2+2 || j==1 && i>n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void K(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j==1 || i+j==n+1 || i>n/2 && i==j)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

void L(int n)
{
  int i,j;
  for(i=1;i<n;i++)
  {
    printf("* ");
    printf("\n");
  }
  for(j=1;j<=n/2+2;j++)
    printf("* ");

}

void M(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j==1 || j==n || i<=n/2+1 && j+i==n+1 || i<=n/2 && i==j)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void N(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j==1 || j==n || i==j)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void O(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j<=2 || i==n && j<=2)
	printf(" ");
      else if(j==1 || i==1 || j==n/2+2 || i==n)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void P(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j==n/2+2 || i==n/2+1 && j==n/2+2)
	printf(" ");
      else if(j==1 || i<n/2+1 && j==n/2+2 || i==1 || i==n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void Q(int n)
{
  int i,j;
  for(i=1;i<=n+1;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1 && j<=2 || i==n && j<=2)
	printf(" ");
      else if(j==1 && i<=n || i==1 || j==n || i==n || i>n/2+2 && i==j+1 )
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void R(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j==n/2+2 || i==n/2+1 && j==n/2+2)
	printf(" ");
      else if(j==1 || i<n/2+1 && j==n/2+2 || i==1 || i==n/2+1 || i>=n/2+1 && i-j==n/2)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void S(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j==1 || i==n/2+1 && j==1 || i==n && j==n/2+2)
	printf(" ");
      else if(i<n/2+1 && j==1 || i==1 || i>n/2+1 && j==n/2+2 || i==n || i==n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void T(int n)
{
  int i,j,p;
  p=n/2+2;
  if(p%2==0)
    p++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=p;j++)
    {
      if(i==1 || j==p/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void U(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==n && j<=2)
	printf(" ");
      else if(j==1 || j==n/2+2 || i==n)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void V(int n)
{
  int i,j,k;
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
      printf(" ");
    for(k=1;k<=i*2-1;k++)
    {
      if(k==1 || k==i*2-1)
	printf("*");
      else
	printf(" ");
    }
    printf("\n");
  }
}


void W(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j==1 || j==n || i>n/2 && j+i==n+1 || i>n/2 && i==j)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void X(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==j || i+j==n+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void Y(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i<=n/2+1 && i==j || i<=n/2+1 && i+j==n+1 || i>n/2+1 && j==n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


void Z(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1 || i==n || i+j==n+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}





























