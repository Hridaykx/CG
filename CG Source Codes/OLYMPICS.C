#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void circ(int xc,int yc,int r)
{
int x,y,p,i=0;

  x=0;
  y=r;
  p=5/4-r;
  while(y>=x)
  {
  putpixel(xc+x,yc+y,5);
  putpixel(xc-x,yc+y,5);
  putpixel(xc+x,yc-y,5);
  putpixel(xc-x,yc-y,5);
  putpixel(xc-y,yc-x,5);
  putpixel(xc-y,yc+x,5);
  putpixel(xc+y,yc-x,5);
  putpixel(xc+y,yc+x,5);
  if(p>=0)
  {
  p=p+2*x-2*y+5;
  y=y-1;
  }
  else
  {
  p=p+2*x+3;
  y=y;
  }
  x++;
  i++;
  }
}
int main()
{
  int gd=DETECT,gm;
  int x,y,p,xc,yc,r;
  clrscr();
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  circ(100,200,50);
  circ(210,200,50);
  circ(320,200,50);
  circ(155,270,50);
  circ(265,270,50);

  getch();
  closegraph();
  return 0;
}
