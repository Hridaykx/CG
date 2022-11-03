#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
   int gd = DETECT,gm;
   int x ,y ,radius=80;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   /* Initialize center of circle with center of screen */
   x = getmaxx()/2;
   y = getmaxy()/2;

   outtextxy(x-100, 50, "CIRCLES Using Graphics in C");
   /* Draw circle on screen */
   circle(x, y, radius);
   circle(x,y,40);


   getch();
   closegraph();
   return 0;
}