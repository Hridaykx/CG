#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void traf()
{
circle(120,100,20);
circle(120,150,20);
circle(120,200,20);
rectangle(95,75,145,225);
}
void main(){
int gd=DETECT,gm;
int i,a,b,r;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
traf();
//first
setfillstyle(SOLID_FILL,RED);
floodfill(120,100,WHITE);
delay(2000);
setfillstyle(SOLID_FILL,BLACK);
floodfill(120,100,WHITE);
outtext
//second
setfillstyle(SOLID_FILL,YELLOW);
floodfill(120,150,WHITE);
delay(1000);
setfillstyle(SOLID_FILL,BLACK);
floodfill(120,150,WHITE);
//third
setfillstyle(SOLID_FILL,GREEN);
floodfill(120,200,WHITE);
delay(1000);
setfillstyle(SOLID_FILL,BLACK);
floodfill(120,200,WHITE);
//cleardevice();
getch();
closegraph();
}