
#include<stdio.h>
#include<graphics.h>
void main()
{
    
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    //1st shape
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(100,100,250,350);
    floodfill(175,250,WHITE);
    //2nd shape
    setfillstyle(SOLID_FILL,RED);
    ellipse(175,75,0,360,75,25);
    floodfill(175,75,WHITE);
    //3rd shape
    setfillstyle(SOLID_FILL,BLUE);
    line(10,250,50,250);
    line(0,200,65,200);
    line(50,250,65,200);
    line(0,200,10,250);
    floodfill(30,240,WHITE);
    getch();
    closegraph();
}