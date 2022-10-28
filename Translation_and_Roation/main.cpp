#include<stdio.h>
#include<conio.h> 
#include<graphics.h> 
int main()
{ 
int x,y,x1,y1,x2,y2; 

int t_y,t_x;
int tt_x,tt_y,tt_x1,tt_y1,tt_x2,tt_y2;

int s_x,s_y; 
int ts_x,ts_y,ts_x1,ts_y1,ts_x2,ts_y2;

int gd=DETECT,gm; 

initgraph(&gd,&gm,"C:\\TURBOC3\\BGI"); 


printf("Please enter first coordinate of Triangle = "); 
scanf("%d %d",&x,&y); 
printf("\nPlease enter second coordinate of Triangle = "); 
scanf("%d %d",&x1,&y1); 
printf("\nPlease enter third coordinate of Triangle = "); 
scanf("%d %d",&x2,&y2);

settextstyle(3,0,2);  
setcolor(WHITE);  
outtextxy(x,y-25,"After Scaling & Translation"); 
line(x,y,x1,y1); 
line(x1,y1,x2,y2); 
line(x2,y2,x,y); 



printf("\nNow Enter Scaling factor x and y = "); 
scanf("%d %d",&s_x,&s_y);
 
printf("\nNow Enter Translation factor x and y =");
scanf("%d %d",&t_x,&t_y);

ts_x = x * s_x; 
ts_x1 = x1 * s_x; 
ts_x2 = x2 * s_x; 
ts_y = y * s_y; 
ts_y1 = y1 * s_y; 
ts_y2= y2 * s_y ; 

settextstyle(3,0,2);  
setcolor(LIGHTRED);  
outtextxy(ts_x,ts_y-25,"Before Scaling");

line(ts_x,ts_y,ts_x1,ts_y1); 
line(ts_x1,ts_y1,ts_x2,ts_y2); 
line(ts_x2,ts_y2,ts_x,ts_y); 

//translation 



//operation
tt_x = x + t_x; 
tt_x1 = x1 + t_x; 
tt_x2 = x2 + t_x; 
tt_y = y + t_y; 
tt_y1 = y1 + t_y; 
tt_y2= y2 + t_y ; 

settextstyle(3,0,2);  
setcolor(14);  
outtextxy(tt_x,tt_y-25,"Before Translation");

line(tt_x,tt_y,tt_x1,tt_y1); 
line(tt_x1,tt_y1,tt_x2,tt_y2); 
line(tt_x2,tt_y2,tt_x,tt_y); 


getch(); 
closegraph(); 
return 0; 
} 
