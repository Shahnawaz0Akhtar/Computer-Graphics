#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm,"C:/TURBOC3/BGI");
	
	int ssx,ssy;
	int x,x1,x2,y,y1,y2;
	int sx,sx1,sx2,sy,sy1,sy2;
	
	printf("Enter the 1st Corrdinate of (x,y) triangle: ");
	scanf("%d %d",&x,&y);
	
	printf("Enter the 2nd Corrdinate of (x1,y1) triangle: ");
	scanf("%d %d",&x1,&y1);
	
	printf("Enter the 3rd Corrdinate of (x2,y2) triangle: ");
	scanf("%d %d",&x2,&y2);
	
	printf("Enter the Scaling Corrdinate of(x,y) triangle: ");
	scanf("%d %d",&ssx,&ssy);
	settextstyle(3,0,2);
	setcolor(9);
	outtextxy(x,y-20,"Before Scaling");
	line(x,y,x1,y1);
	line(x,y,x2,y2);
	line(x1,y1,x2,y2);

	sx = x * ssx;
	sx1 = x1 * ssx;
	sx2 = x2 * ssx;
	sy = y * ssy;
	sy1 = y1 * ssy;
	sy2 = y2 * ssy;
	
	settextstyle(3,0,2);
	setcolor(LIGHTRED);
	outtextxy(sx,sy-20,"After Scaling");
	line(sx,sy,sx1,sy1);
	line(sx,sy,sx2,sy2);
	line(sx1,sy1,sx2,sy2);
	
	
	getch();
	closegraph();
	return 0;
}
