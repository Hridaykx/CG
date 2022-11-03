#include<conio.h>
#include<graphics.h>
#include<dos.h>
void lin()
{      int i,j;
   for(i=0;i<=600;i=i+80)
{   for(j=290;j<=400;j=j+30)
{
line(i,j,50+i,j);
}
}
}
int main()
{
int gd=DETECT,gm;
int i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

for(j=0;j<2;j++)
{
for(i=0;i<=640;i=i+8)
{
setcolor(RED);
line(0,292,640,292);
setcolor(LIGHTGRAY);
line(180+i,176,180+i,215);
setcolor(YELLOW);
line(90+i,170,270+i,170);
line(90+i,170,75+i,210);
line(270+i,170,285+i,210);
setcolor(DARKGRAY);
line(100+i,176,260+i,176);
setcolor(BROWN);
line(88+i,215,272+i,215);
setcolor(LIGHTMAGENTA);
line(100+i,176,88+i,215);
line(260+i,176,272+i,215);
setcolor(BLUE);
line(75+i,210,12+i,210);
line(285+i,210,348+i,210);
setcolor(LIGHTRED);
line(12+i,210,0+i,260);
line(348+i,210,360+i,260);
setcolor(GREEN);
line(116+i,260,240+i,260);
line(0+i,260,60+i,260);
line(360+i,260,296+i,260);
setcolor(CYAN);
ellipse(88+i,260,0,180,28,28);
ellipse(268+i,260,0,180,28,28);
setcolor(MAGENTA);
circle(88+i,260,22);
circle(268+i,260,22);
delay(100);
cleardevice();
line(0,292,640,292);
}
}
getch();
closegraph();
return 0;

}