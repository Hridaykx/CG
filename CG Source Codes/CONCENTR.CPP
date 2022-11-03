#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void cir(int xc,int yc,int r,int i)
{
  int x,y,p;
  int k;
  p=5/4-r;
  x=0;
  y=r;
  while(y>=x)
  {
  putpixel(xc+x,yc+y,i);
  putpixel(xc+y,yc+x,i);
  putpixel(xc-x,yc+y,i);
  putpixel(xc-y,yc+x,i);
  putpixel(xc+x,yc-y,i);
  putpixel(xc+y,yc-x,i);
  putpixel(xc-x,yc-y,i);
  putpixel(xc-y,yc-x,i);
  if(p>=0)
  {
    y=y-1;
    p=p+2*x-2*y+5;
  }
  else
  {
    y=y;
    p=p+2*x+3;
  }
  x++;
  }
}

int main()
{
  int gd=DETECT,gm;
  clrscr();
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  cir(200,200,100,1);
  cir(200,200,80,2);
  cir(200,200,60,3);
  cir(200,200,40,4);
  cir(200,200,20,5);
  setfillstyle(XHATCH_FILL,BLACK);
  cir(370,100,10,5);
  cir(440,100,10,5);
  ellipse(405,180,180,360,60,32);
  ellipse(405,180,170,350,60,8);
  floodfill(350,100,5);
  floodfill(420,100,5);
//  floodfill(405,200,7);
  setfillstyle(XHATCH_FILL,YELLOW);
  cir(405,160,100,5);
  floodfill(405,180,5);

  getch();
  closegraph();
  return 0;
}