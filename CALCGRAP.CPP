#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT, gm;
float a,b,c;
char op;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//put the path of bgi folder in ur respective application folder
//area=(0,0,450,320);
outtextxy(200,1,"calculator");
outtextxy(0,10,"press (+)for addition,(-)for subtraction");
outtextxy(0,20,"(*)for multiplication,(/)for divison");
setcolor(2);
rectangle(0,0,450,40);
rectangle(450,320,0,100);
rectangle(0,100,116,320);
rectangle(116,320,232,100);
rectangle(232,100,348,320);
line(0,150,450,150);
line(0,210,450,210);
line(0,270,450,270);
outtextxy(58,120,"1");outtextxy(58,175,"5");outtextxy(58,235,"+");outtextxy(58,290,"ctrl");
outtextxy(174,120,"2");outtextxy(174,175,"6");outtextxy(174,235,"9");outtextxy(174,290,"9");
outtextxy(286,120,"3");outtextxy(286,175,"7");outtextxy(286,235,"0");outtextxy(286,290,"0");
outtextxy(399,120,"4");outtextxy(399,175,"8");outtextxy(399,235,"-");outtextxy(399,290,"=");
printf("\n\n\nenter the numbers and operators in the form of a operator b");
scanf("%f %c %f",&a,&op,&b);
//printf("numbrs entered %f and %f",a,b);
switch(op){
case '+':
printf("%.1f", a + b);
break;
case '-':
printf("%.1f", a - b);
break;
case '*':
printf("%.1f", a * b);
break;
case '/':
printf("%.1f", a / b);
break;
default:
printf("wrong input");
break;	   }
getch();
}