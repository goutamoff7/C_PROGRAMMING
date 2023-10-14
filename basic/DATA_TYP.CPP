#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  printf("\nshort int= %d",sizeof(short int));
  printf("\nunsigned short int= %d",sizeof(unsigned short int));
  printf("\nint= %d",sizeof(int));
  printf("\nunsigned int= %d",sizeof(unsigned int));
  printf("\nlong int= %d",sizeof(long int));
  printf("\nunsigned long int= %d",sizeof(unsigned long int));
  printf("\nchar= %d",sizeof(char));
  printf("\nunsigned char= %d",sizeof(unsigned char));
  printf("\nfloat= %d",sizeof(float));
  printf("\ndouble= %d",sizeof(double));
  printf("\nlong double= %d",sizeof(long double));

  getch();
}
