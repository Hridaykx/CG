#include<conio.h>
#include<graphics.h>
#include<dos.h>
void star(int i,int j)
  {
  line(50+i,50+j,65+i,50+j);
  line(50+i,50+j,63+i,58+j);
  line(65+i,50+j,70+i,36+j);
  line(70+i,36+j,75+i,50+j);
  line(75+i,50+j,88+i,50+j);
  line(88+i,50+j,75+i,58+j);
  line(75+i,58+j,82+i,70+j);
  line(82+i,70+j,69+i,62+j);
  line(69+i,62+j,58+i,70+j);
  line(58+i,70+j,63+i,58+j);
  }
  void blinkstr()
  {
   line(0,100,120,120);
  line(120,120,240,100);
  line(240,100,360,120);
  line(360,120,480,100);
  line(480,100,560,120);
  line(560,120,640,100);
  star(0,0);
  star(100,-10);
  star(200,20);
  star(290,10);
  star(370,0);
  star(480,30);
  star(550,25);
  setfillstyle(SOLID_FILL,LIGHTRED);
  floodfill(158,44,WHITE);
  delay(1000);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(158,44,WHITE);
  setfillstyle(SOLID_FILL,LIGHTRED);
  floodfill(258,74,WHITE);
  delay(1000);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(258,74,WHITE);
  setfillstyle(SOLID_FILL,LIGHTRED);
  floodfill(348,64,WHITE);
  delay(1000);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(348,64,WHITE);
  setfillstyle(SOLID_FILL,LIGHTRED);
  floodfill(538,84,WHITE);
  delay(1000);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(538,84,WHITE);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(608,79,WHITE);
  setfillstyle(SOLID_FILL,LIGHTRED);
  floodfill(58,54,WHITE);
  delay(1000);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(58,54,WHITE);
  setfillstyle(SOLID_FILL,LIGHTRED);
  floodfill(428,54,WHITE);
  }
int main()
{
  int gd=DETECT,gm;
  int i=0,j;
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  blinkstr();
  line(100,200,80,230);
  line(100,200,120,230);
  getch();
  closegraph();
  return 0;
}

