#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm,"C:/TURBOC3/BGI");
	
	int ttx,tty;
	int x,x1,x2,y,y1,y2;
	int tx,tx1,tx2,ty,ty1,ty2;
	
	printf("Enter the 1st Corrdinate of (x,y) trinagle: ");
	scanf("%d %d",&x,&y);
	
	printf("Enter the 2nd Corrdinate of (x1,y1) trinagle: ");
	scanf("%d %d",&x1,&y1);
	
	printf("Enter the 3rd Corrdinate of (x2,y2) trinagle: ");
	scanf("%d %d",&x2,&y2);
	
	printf("Enter the Translation Corrdinate of(x,y) trinagle: ");
	scanf("%d %d",&ttx,&tty);
	settextstyle(3,0,2);
	setcolor(9);
	outtextxy(x,y-20,"Before Translation");
	line(x,y,x1,y1);
	line(x,y,x2,y2);
	line(x1,y1,x2,y2);

	tx = x + ttx;
	tx1 = x1 + ttx;
	tx2 = x2 + ttx;
	ty = y + tty;
	ty1 = y1 +tty;
	ty2 = y2 + tty;
	
	settextstyle(3,0,2);
	setcolor(LIGHTRED);
	outtextxy(tx,ty-20,"After Translation");
	line(tx,ty,tx1,ty1);
	line(tx,ty,tx2,ty2);
	line(tx1,ty1,tx2,ty2);
	
	
	getch();
	closegraph();
	return 0;
}
