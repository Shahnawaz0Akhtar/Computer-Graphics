#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm,"C:/TURBOC3/BGI");
	

	int x,x1,x2,y,y1,y2;
	int rx,rx1,rx2,ry,ry1,ry2;
	double r,s,c; 
	
	printf("Enter the 1st Corrdinate of (x,y) triangle: ");
	scanf("%d %d",&x,&y);
	
	printf("Enter the 2nd Corrdinate of (x1,y1) triangle: ");
	scanf("%d %d",&x1,&y1);
	
	printf("Enter the 3rd Corrdinate of (x2,y2) triangle: ");
	scanf("%d %d",&x2,&y2);
	

	printf("Enter the Rotation Angle : ");
	scanf("%lf",&r);
	
	settextstyle(3,0,2);
	setcolor(9);
	outtextxy(x,y-20,"Before Rotation");
	
    line(x,y,x1,y1);  
    line(x1,y1, x2,y2);  
    line(x2, y2, x, y);
	
	
	c = cos(M_PI * r /180);  
    s = sin(M_PI * r /180);
    
    rx = floor(x * c - y * s);
	rx1 = floor(x1 * c - y1 * s);
	rx2 = floor(x2 * c - y2 * s);
	
	ry = floor(x * s + y * c);
	ry1 = floor(x1 * s + y1 * c);
	ry2 = floor(x2 * s + y2 * c);     
	      
	  
	
	settextstyle(3,0,2);
	setcolor(LIGHTRED);
	outtextxy(rx,ry-20,"After Rotation");
	
	
	line(rx,ry,rx1,ry1);  
    line(rx1,ry1, rx2,ry2);  
    line(rx2, ry2, rx, ry);
	
	getch();
	closegraph();
	return 0;
}
