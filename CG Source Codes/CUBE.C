#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
    int gd, gm;
    gd = DETECT;
    initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");

    outtextxy(60, 50, "Draw the cube and fill using filling algorithm");

    setfillstyle(SOLID_FILL, RED);
    bar3d(200, 200, 400, 400, 40, 1);

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(410, 300, WHITE);

    setfillstyle(SOLID_FILL, BLUE);
    floodfill(300, 190, WHITE);

    getch();
    closegraph();
    return 0;
}