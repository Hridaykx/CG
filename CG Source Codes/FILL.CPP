#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
void circ(int xc,int yc,int r,int pix)
{
int x,y,p,i=0;

  x=0;
  y=r;
  p=5/4-r;
  while(y>=x)
  {
  putpixel(xc+x,yc+y,pix);
  putpixel(xc-x,yc+y,pix);
  putpixel(xc+x,yc-y,pix);
  putpixel(xc-x,yc-y,pix);
  putpixel(xc-y,yc-x,pix);
  putpixel(xc-y,yc+x,pix);
  putpixel(xc+y,yc-x,pix);
  putpixel(xc+y,yc+x,pix);
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
void emoj()
{
 setfillstyle(SOLID_FILL,BLACK);
   circ(156,160,10,5);
   floodfill(160,150,5);
   circ(244,160,10,5);
   floodfill(240,150,5);
   setfillstyle(SOLID_FILL,YELLOW);
   circ(200,200,100,5);
   floodfill(200,200,5);
}
void smile()
{   setcolor(BLUE);
    int i=0;
    for(i=38;i>0;i=i-2)
    {
    emoj();
    ellipse(200,260-0.4*i,20,160,60,i);
    delay(60);
    cleardevice();
    }
    emoj();
    ellipse(200,260,20,160,60,38);
    for(i=0;i<42;i=i+2)
   {
   emoj();
    ellipse(200,220+0.1*i,205,335,60,i);
    delay(60);
    cleardevice();
   }
   emoj();
   ellipse(200,220,205,335,60,42);
}
int main()
{
   int gd=DETECT,gm;
   clrscr();
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   emoj();
   smile();
    getch();
   closegraph();
   return 0;
}




