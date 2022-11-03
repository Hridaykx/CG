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



for(i=0;i<=640;i=i+20)
{
line(50+i,350-i,100+i,300-i);
line(50+i,350-i,100+i,400-i);
line(100+i,300-i,150+i,350-i);
line(100+i,400-i,150+i,350-i);
line(100+i,300-i,100+i,400-i);
line(50+i,350-i,150+i,350-i);
ellipse(74+i,380-i,170,300,50,20);

delay(300);
cleardevice();
}

getch();
closegraph();
return 0;

}