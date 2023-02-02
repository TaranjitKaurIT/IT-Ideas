#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd= DETECT,gm,i;
int hutpt1[]={100,50 ,50,100 ,50,150 ,150,150 ,150,100,100,50};
int hutpt2[]={100,50,260,50,300,100,50,100,150,100};
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
arc(300,10,0,360,10);
setcolor(15);
drawpoly(6,hutpt1);
setfillstyle(SOLID_FILL, 7);
fillpoly(6,hutpt1);
setfillstyle(6,2);
bar(150,150,300,100);
rectangle(150,150,300,100);
drawpoly(6,hutpt2);
setfillstyle(6, 12);
fillpoly(6,hutpt2);
setcolor(6);
setfillstyle(SOLID_FILL,6);
bar(60,150,140,110);
rectangle(60,150,140,110);
setcolor(3);
setfillstyle(SOLID_FILL,1);
bar(180,110,250,140);
rectangle(180,110,250,140);
setcolor(2);
line(0,150,350,150);
line(0,160,350,160);
for(i=1;i<=200;i+=2)
{setlinestyle(4,1111,2);
line(0,170+i,350,170+i);}
getch();
}
