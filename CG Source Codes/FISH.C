#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
    
    
    int gd = DETECT, gm;
    int i;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setbkcolor(GREEN);
    
    for(i=0; i<=400; i=i+10)
    {
        
        //left most triangle
        line(100+i,150,70+i,110);
        line(70+i,110,70+i,170);
        line(70+i,170,100+i,150);
        
        //body of the fish with 2 eyes
        ellipse(180+i,150,0,360,80,20);
        ellipse(230+i,155,0,360,3,4);
        ellipse(230+i,140,0,360,3,4);
        
        //upper triangle
        line(150+i,130,170+i,90);
        line(170+i,90,190+i,130);
        
        //lower triangle
        line(150+i,170,175+i,210);
        line(175+i,210,190+i,170);
        delay(100);
        cleardevice();
    }
    getch();
    closegraph();
}    