#include<conio.h>
#include<graphics.h>
#include<dos.h>
void man()
{
    setfillstyle(SOLID_FILL,BLACK);
  circle(125,75,10);
  circle(175,75,10);
  floodfill(125,120,WHITE);
  circle(150,100,60);
  line(150,75,150,110);
  ellipse(150,115,180,360,35
  ,20);
  line(150,160,150,300);

  line(150,200,100,235);
  line(150,200,200,235);


  line(150,300,100,335);
  line(150,300,200,335);
}
int main()
{
  int gd=DETECT,gm;
  int i,j,k;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  man();
//  for

  for(i=0;i<=35;i=i+2)
  {
  man();
  line(200,235,200+i,200+i);
  delay(80);
  cleardevice();
  man();
  }
  for(i=0;i<=35;i=i+2)
  {
   man();
   line(200,235,235-i,235-i);
   delay(80);
   cleardevice();
   man();
  }
  line(200,235,200,200);
  getch();
  closegraph();
  return 0;
}
