#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
typedef struct node
{
  int da;
  struct node *ne;
  struct node *prev;
}nd;
nd *made();
void crt();
void disp();
void frnsrt();
void apinsrt();
void prntlrg();
void rmvhnd();
void rmvlnd();
void rmvpnd(int);
void rmvapnd();
void srt();
/*void odlst();   */
void pinsrt(int);
void rvrs();
void srtinsrt();
nd *hd='\0',*pre='\0';
void main()
{
  int ch,c;
  clrscr();
  do
  {
    printf("\n1.Insert 2.Display 3.Positional Insert 4.Print Largest No. 5.Remove Positional Node 6.Sorting 7.Revers Print 8. Sorting Insert 9.Exit");
    printf("\nEnter your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:  crt();
	       break;
      case 2:  disp();
	       break;
      case 3:  apinsrt();
	       break;
      case 4:  prntlrg();
	       break;
      case 5:  rmvapnd();
	       break;
      case 6:  srt();
	       break;
      case 7:  rvrs();
	       break;
      case 8:  srtinsrt();
	       break;
      case 9:  exit(0);
      default: printf("\nYou have Entered Wrong Choice Please Enter Correct Choice");
    }
    printf("\n Enter 1 to Continue the program: ");
    scanf("%d",&c);
  }while(c==1);
  getch();
}
nd *made()
{
  int da;
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  printf("Enter Data for Linked List: ");
  scanf("%d",&da);
  nw->da=da;
  nw->ne='\0';
  nw->prev='\0';
  pre->ne=nw;
  nw->prev=pre;
  return nw;
}
void crt()
{
  if(hd==NULL)
    hd=pre=made();
  else
     pre=pre->ne=made();
}
void disp()
{
  nd *p;
  if(hd==NULL)
    printf("No Data");
  else
  {
    for(p=hd;p!='\0';p=p->ne)
      printf("%d-->",p->da);
  }
}
void frnsrt()
{
  int da;
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  printf("Enter Data in Front: ");
  scanf("%d",&da);
  nw->da=da;
  nw->ne=hd;
  nw->prev=NULL;
  hd->prev=nw;
  hd=nw;
}
void prntlrg()
{
  int lrg=0;
  nd *p;
  if(hd!=NULL)
  {
    for(p=hd;p!=NULL;p=p->ne)
    {
      if(p->da>lrg)
	lrg=p->da;
    }
    printf("The Largest Value = %d",lrg);
  }
  else
    printf("No Data");
}
void rmvpnd(int rmv)
{
  int c=1;
  nd *p;
    for(p=hd;p!=NULL;p=p->ne)
  {
    if(c==rmv-1)
    {
      p->ne=p->ne->ne;
      p->ne->prev=p;
      break;
    }
    c++;
  }
}
void rmvhnd()
{
  if(hd!=NULL)
  {
    hd=hd->ne;
    hd->prev=NULL;
  }
  else
    printf("No Data");
}
void rmvlnd()
{
  nd *p;
  if(hd->ne!=NULL)
  {
    for(p=hd;p->ne->ne!=NULL;p=p->ne);
    p->ne=NULL;
    pre=p;
  }
}
void srt()
{
  nd *i,*j;
  int swap;
  for(i=hd;i!=NULL;i=i->ne)
  {
    for(j=hd;j->ne!=NULL;j=j->ne)
    {
      if(j->da>j->ne->da)
      {
	swap=j->da;
	j->da=j->ne->da;
	j->ne->da=swap;
      }
    }
  }
}
/*void odlst()
{
  nd *nw,*p,*hd2=NULL,*pre2=NULL;
  for(p=hd;p!=NULL;p=p->ne)
  {
    if(p->da%2!=0)
    {
      if(hd2==NULL)
      {
	nw=(nd*)malloc(sizeof(nd));
	nw->da=p->da;
	nw->ne=NULL;
	hd2=pre2=nw;
      }
      else
      {
	nw=(nd*)malloc(sizeof(nd));
	nw->da=p->da;
	nw->ne=NULL;
	pre2=pre2->ne=nw;
      }
    }
  }
  printf("New Odd Number List: ");
  for(p=hd2;p!=NULL;p=p->ne)
    printf("%d-->",p->da);
}      */
void pinsrt(int pos)
{
  nd *p,*nw;
  int da,c=1;
  nw=(nd*)malloc(sizeof(nd));
  printf("Enter the data: ");
  scanf("%d",&da);
  nw->da=da;
  for(p=hd;p!=NULL;p=p->ne)
  {
    if(c==pos-1)
    {
      nw->ne=p->ne;
      nw->prev=p;
      p->ne->prev=nw;
      p->ne=nw;
      break;
    }
    c++;
  }
}
void rvrs()
{
  nd *p;
  for(p=pre;p!=NULL;p=p->prev)
    printf("%d-->",p->da);
}
void srtinsrt()
{
  srt();
  int da;
  nd *nw,*p;
  nw=(nd*)malloc(sizeof(nd));
  printf("Enter The Data: ");
  scanf("%d",&da);
  nw->da=da;
  nw->prev='\0';
  nw->ne='\0';
  if(da<hd->da)
  {
    nw->ne=hd;
    hd->prev=nw;
    hd=nw;
  }
  else if(pre->da<=da)
  {
    pre->ne=nw;
    nw->prev=pre;
    pre=nw;
  }
  else
  {
    for(p=hd->ne;p!=NULL;p=p->ne)
    {
      if(p->da>da)
      {
	nw->ne=p;
	nw->prev=p->prev;
	p->prev->ne=nw;
	p->prev=nw;
	break;
      }
    }
  }
}
void apinsrt()
{
  int tnd=0,pos;
  nd *p;
  printf("Enter Node Number to Insert Data: ");
  scanf("%d",&pos);
  for(p=hd;p!=NULL;p=p->ne)
  tnd++;
  if(pos==tnd+1)
    crt();
  else if(pos==1)
    frnsrt();
  else if(pos>1 && pos<=tnd)
    pinsrt(pos);
  else
    printf("Node Number not exist \n Last Node Number = %d",tnd);
}
void rmvapnd()
{
  int tnd=0,rmv;
  nd *p;
  printf("Enter Node Number to Delete Data: ");
  scanf("%d",&rmv);
  for(p=hd;p!=NULL;p=p->ne)
  tnd++;
  if(rmv==tnd && tnd>1)
    rmvlnd();
  else if(rmv==1)
    rmvhnd();
  else if(rmv>1 && rmv<tnd)
    rmvpnd(rmv);
  else
    printf("Node Number not exist \n Last Node Number = %d",tnd);
}




















