#include<stdio.h>
#include<conio.h>
#include<graphics.h>


int main() {
	
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:/TURBOC3/BGI");
   
   //flowerpot


   setcolor(9);

   line(500,575,750,575);
   
   line(500,575,500,625);
   line(750,575,750,625);
   
   line(500,625,535,625);
   line(750,625,715,625);
   
   line(535,625,535,675);
   line(715,625,715,675);
   
   line(535,675,570,675);
   line(715,675,680,675);
   
   line(570,675,570,710);
   line(680,675,680,710);
   
   line(570,710,680,710);
  
   
   
   
   // 1st leaf
    setcolor(10);
   
    line(613,575,613,475); 
    line(638,575,638,525);
    
    
    line(488,475,613,475);//4 up
    line(638,525,463,525);//middle colum 6m
    line(613,500,463,500);//4
    
    
    line(588,525,588,450);
    
    line(513,450,588,450);
    
    line(563,550,463,550); //leaf bottom line
    
	line(563,450,563,550);
    line(538,550,538,450);//leaf middle 4row
    line(513,550,513,450);
    
    
    line(488,575,488,475);
    
    line(463,575,463,500); //last line of leaf
    line(463,575,488,575);//near to pot line -
    
    
    
    //2nd leaf..........
    
    line(638,500,638,450);
    line(663,500,663,400);
    line(638,500,663,500);
    
    
    //middle coloum 
    line(688,375,763,375);
    line(663,400,788,400);
    line(638,450,813,450);
    line(713,475,813,475);
    
    line(665,425,813,425);
    line(788,500,813,500);
    
    
    //Row
    line(688,450,688,375);
    line(763,375,763,475);
    line(713,375,713,475);
    line(738,375,738,475);
    line(788,400,788,500);
    line(813,500,813,425);

    //3rd leaf
    line(613,425,613,375); 
    line(638,425,638,375);
    line(613,425,638,425);
    line(613,375,638,375);
    
    //flower
    setcolor(YELLOW);
    rectangle(613,350,663,275);//bottom
    rectangle(663,0,613,75);//up
    rectangle(813,150,738,200);//right
    rectangle(463,150,538,200);//left
    //setfillstyle(SOLID_FILL,YELLOW);
  
    //left
    rectangle(588,275,538,325);//bottom_left_down
    line(588,250,588,275);
    line(588,250,563,250);
    rectangle(488,225,538,275);//bootom_left_up
    line(563,225,563,250);
    line(563,225,538,225);
    
    
    rectangle(538,75,488,125);//up_left_down
    line(563,100,563,125);
    line(563,125,538,125);
    rectangle(538,75,588,25);//up_left_up
    line(588,75,588,100);
    line(588,100,563,100);
    //right
    
    rectangle(688,325,738,275);//bottom_right_down
    line(688,275,688,250);
    line(688,250,713,250);
    rectangle(738,275,788,225);//bootom_right_up
	line(713,225,713,250);
	line(713,225,738,225);
    
    rectangle(788,75,738,125);//up_right_down
    line(713,125,738,125);
    line(713,100,713,125);
    rectangle(688,75,738,25);//up_right_up
    line(713,100,688,100);
    line(688,100,688,75);
    
    //middle
    
    circle(638,175,89);
    
    settextstyle(3,0,2);
	setcolor(LIGHTRED);  
	outtextxy(800,550,"Created By:- ");
	
    settextstyle(3,0,2);
	setcolor(11);  
	outtextxy(800,575,"Shahnawaz Akhtar");
	
	settextstyle(3,0,2);
	setcolor(LIGHTRED);  
	outtextxy(800,600,"Submitted to:- ");
	
    settextstyle(3,0,2);
	setcolor(11);  
	outtextxy(800,625,"Dr. Mohd Sadiq");
   getch();
   closegraph();
   return 0;

}
