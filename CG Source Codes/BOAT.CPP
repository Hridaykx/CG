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
for(i=0;i<=600;i=i+80)
{   for(j=290;j<=400;j=j+30)
{
line(i,j,50+i,j);
}
}

for(j=0;j<2;j++)
{
for(i=0;i<=640;i=i+8)
{
lin();
line(0+i,200,300+i,200);
line(60+i,280,240+i,280);
line(0+i,200,60+i,280);
line(300+i,200,240+i,280);
line(42+i,200,60+i,150);
line(78+i,200,60+i,150);
delay(100);
cleardevice();
lin();
}
}
getch();
closegraph();
return 0;

}