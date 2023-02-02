//car
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int car[]={100,200,100,150,150,150,200,100,250,100,300,150,350,150,350,200,100,200};
int win1[]={210,110,220,110,220,150,160,150,210,110};
int win2[]={230,110,240,110,290,150,230,150,230,110};
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
drawpoly(9,car);
drawpoly(5,win1);
drawpoly(5,win2);
circle(150,220,20);
circle(300,220,20);
line(225,100,225,200);
getch();
}