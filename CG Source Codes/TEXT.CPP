#include <graphics.h>
#include <conio.h>
#include <dos.h>

void main()
{
clrscr();

int d;
int m;
int y;


d=DETECT; // for autodetection
initgraph(&d,&m,"C:\\TURBOC3\\bgi");

for(int x=10; x<550; x++)
{
cleardevice();
setcolor(x);
settextstyle(8,0,5);
outtextxy(x,200,"(: (: Dev :)  :)");
delay(5);
}


for(x=550; x>5; x--)
{

cleardevice();
setcolor(x);
outtextxy(x,200,"......EASY......");
delay(5);
}

for(x=10; x<550; x++)
{
cleardevice();
setcolor(x);
outtextxy(x,200,"........PEASE........");
delay(5);
}


for(x=550; x>5; x--)
{
cleardevice();
setcolor(x);
outtextxy(x,200,".......CG......");
delay(5);
}

getch();
closegraph();

}