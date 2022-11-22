#include<graphics.h>
#include<conio.h>
#include<dos.h>
void man(int,int,int); //body of man
void woman(int,int,int); //body of woman
void cloud(int,int,int); //cloud 
int body[8];
int eyeMan=5,mouthMan=5;
int stMan=270,endMan=90;
int eyeWoman=5,mouthWoman=5;
int stWoman=90,endWoman=27;
int moveCloud=600;
int massage1[]={250,220,130,220,130,140,260,140,260,200,290,250,250,220};  //massage box 1
int massage2[]={455,220,590,220,590,140,445,140,445,200,425,250,455,220};. //massage box 2
int electric1[]={320,180,280,230,330,240,290,300}; //electric1 
int electric2[]={360,180,320,230,370,240,330,300}; //electric2 

void main()
{
   int gd=0,gm;
   int i=0;
   int shiftx=100;
   int shiftWoman=400;
   int handA=shiftx,handB=shiftx;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   setbkcolor(3);
   sleep(2);
    while(i<40)                                    //strat walking man
    {
       if(i%4==0)
       man(shiftx ,shiftx+15,shiftx-15);
       else if(i%4==1)
       man(shiftx ,shiftx,shiftx);
       else if(i%4==2)
       man(shiftx ,shiftx-15,shiftx+15);
       else if(i%4==3)
       man(shiftx ,shiftx,shiftx);
       shiftx+=5;
       setfillstyle(1,14);
       fillellipse(300,100,30,30);
       cloud(moveCloud,0,15);
       woman(shiftWoman,shiftWoman+15,shiftWoman-15);
       delay(60);
       cleardevice();
       i+=1;
       if(kbhit())
       goto bye;
    }
				  //end walking man

    setfillstyle(1,14);
    fillellipse(300,100,30,30);
    cloud(moveCloud,0,15);
    
    man(shiftx ,shiftx+15,shiftx-15);      //Start conversation
    woman(shiftWoman,shiftWoman+15,shiftWoman-15);
    setlinestyle(1,0,3);
    settextstyle(0,0,2);
    delay(1000);
    drawpoly(7,massage1);
    setcolor(14);
    outtextxy(145,175,"Hey...!");
    delay(1000);
    cleardevice();
    setfillstyle(1,14);
    fillellipse(300,100,30,30);
    cloud(moveCloud,0,15);
    man(shiftx ,shiftx+15,shiftx-15);
    woman(shiftWoman,shiftWoman+15,shiftWoman-15);
    setlinestyle(1,0,3);
    drawpoly(7,massage2);
    setcolor(14);
    outtextxy(475,175,"Yes !");
    delay(1000);
    cleardevice();
    setfillstyle(1,14);
    fillellipse(300,100,30,30);
    cloud(moveCloud,0,15);
    man(shiftx ,shiftx+15,shiftx-15);
    woman(shiftWoman,shiftWoman+15,shiftWoman-15);
    setlinestyle(1,0,3);
    drawpoly(7,massage1);
    setcolor(14);
    outtextxy(145,160,"I Love");
    outtextxy(135,185,"You(^_^)");
    delay(1000);
    cleardevice();
    setfillstyle(1,14);
    fillellipse(300,100,30,30);
    cloud(moveCloud,0,15);
    man(shiftx ,shiftx+15,shiftx-15);
    woman(shiftWoman,shiftWoman+15,shiftWoman-15);
    setlinestyle(1,0,3);
    drawpoly(7,massage2);
    setcolor(14);
    outtextxy(475,175,"What ?");
    delay(1000);
    cleardevice();
    setfillstyle(1,14);
    fillellipse(300,100,30,30);
    cloud(moveCloud,0,15);
    man(shiftx ,shiftx+15,shiftx-15);
    woman(shiftWoman,shiftWoman+15,shiftWoman-15);
    setlinestyle(1,0,3);
    drawpoly(7,massage1);
    setcolor(14);
    outtextxy(145,160,"I Love");
    outtextxy(135,185,"You(^_^)");
    delay(1000);
    cleardevice();
    setfillstyle(1,14);
    fillellipse(300,100,30,30);
    cloud(moveCloud,0,15);
    man(shiftx ,shiftx+15,shiftx-15);
    woman(shiftWoman,shiftWoman+15,shiftWoman-15);
    setlinestyle(1,0,3);
    drawpoly(7,massage2);
    setcolor(14);
    outtextxy(455,175,"Sorry..!");
    delay(1000);
    cleardevice();
    setfillstyle(1,14);
    fillellipse(300,100,30,30);
    cloud(moveCloud,0,15);
    man(shiftx ,shiftx+15,shiftx-15);
    woman(shiftWoman,shiftWoman+15,shiftWoman-15);
    setlinestyle(1,0,3);
    drawpoly(7,massage2);
    setcolor(14);
    outtextxy(455,155,"I have a");
    outtextxy(455,175,"Boy...");
    outtextxy(455,195,"Friend.");
    sleep(2);
    cleardevice();          //end conversation
    
    setfillstyle(1,14);
    fillellipse(300,100,30,30);
    cloud(moveCloud,0,15);
    eyeWoman=-5;      //shift mouth left to right of woman st
    stWoman=270;
    endWoman=90;
    mouthWoman=-5;   //end

    i=0;
    while(i<50)       //start walking woman
     {
	     if(i%4==0)
	     woman(shiftWoman,shiftWoman,shiftWoman);
	     else if(i%4==1)
	     woman(shiftWoman,shiftWoman-15,shiftWoman+15);
      	else if(i%4==2)
      	woman(shiftWoman,shiftWoman,shiftWoman);
      	else if(i%4==3)
	     woman(shiftWoman,shiftWoman+15,shiftWoman-15);
	     shiftWoman+=5;
	     setfillstyle(1,14);
	     fillellipse(300,100,30,30);
	     cloud(moveCloud,0,15);
	     man(shiftx ,shiftx+10,shiftx-10);
	     delay(50);
      	cleardevice();
	     i+=1;
      	if(kbhit())
      	goto bye;
     }             //end walking woman
     for(i=0;i<=50;i++) //movement of cloud start
      {
	      man(shiftx ,shiftx+15,shiftx-15);
	      cloud(moveCloud,0,15);
	      setfillstyle(1,14);
	      fillellipse(300,100,30,30);
       	delay(100);
       	cleardevice();
	       moveCloud-=5;
	       if(kbhit())
	       goto bye;
      }
      for(i=0;i<=3;i++)   //fall electric on head
      {
	      man(shiftx ,shiftx+15,shiftx-15);
     	  cloud(moveCloud,0,15);
	      setlinestyle(0,0,3);
	      drawpoly(4,electric1);
    	  drawpoly(4,electric2);
    	  setbkcolor(15);
	      delay(50);
	      setbkcolor(3);
	      delay(20);
    	  cleardevice();
      }
     setbkcolor(3);
     man(shiftx +20,shiftx+15,shiftx-15);
     cloud(moveCloud,0,15);
     delay(200);
     eyeMan=-8;mouthMan=-5;
     stMan=90;endMan=270;
     man(shiftx+20 ,shiftx+15,shiftx-15);
     delay(500);
    
     cloud(moveCloud,1,8); //now movment of cloud end

     //man(shiftx+200,shiftx+10,shiftx-10);
    // woman(shiftWoman,shiftWoman+15,shiftWoman-15);
    // cloud(350,0,15);

     bye:
   getch();
   closegraph();
}
void man(int shiftx,int handA,int handB)
{
   setlinestyle(0,0,3);
   setcolor(2);
   line(0,400,getmaxx(),400);
   setcolor(15);
   circle(shiftx,300,20);  //head
   line(shiftx,320,shiftx,375);  //body
   line(shiftx,335,handA,365);  //right_hand
   line(shiftx,335,handB,365);  //left_hand
   line(shiftx,375,handA,400);  //right_leg
   line(shiftx,375,handB,400);  //left_leg
   setlinestyle(0,0,1);
   circle(shiftx+eyeMan,295,3); //eye
   ellipse(shiftx+mouthMan,307,stMan,endMan,6,2); //mouth
}
void woman(int shiftx,int handA,int handB)
{
   setlinestyle(0,0,3);
   setcolor(2);
   line(0,400,getmaxx(),400);
   setcolor(15);
   circle(shiftx,300,20);  //head
   setcolor(14);
   body[0]=shiftx;   //bodyst
   body[1]=320;
   body[2]=shiftx+5;
   body[3]=375;
   body[4]=shiftx-5;
   body[5]=375;
   body[6]=shiftx;
   body[7]=320;
   drawpoly(4,body);  //bodyend
   setcolor(15);
   line(shiftx,335,handA,365);  //right_hand
   line(shiftx,335,handB,365);  //left_hand
   line(shiftx,375,handA,400);  //right_leg
   line(shiftx,375,handB,400);  //left_leg
   setlinestyle(0,0,1);
   circle(shiftx-eyeWoman,295,3); //eye
   ellipse(shiftx-mouthWoman,307,stWoman,endWoman,6,2); //mouth
}
void cloud(int shiftx,int rain,int cloudColor)  //Cloud 
{
   int i;
   setcolor(2);
   line(0,400,getmaxx(),400);
   setcolor(15);
   setfillstyle(9,cloudColor);
   ellipse(shiftx,100,30,150,80,50);
   ellipse(shiftx-60,110,70,290,60,50);
   ellipse(shiftx,120,210,330,80,50);
   ellipse(shiftx+50,110,250,100,70,50);
   floodfill(shiftx,120,15);
   if(rain)
   {
     while(shiftx>-20)
      {
       for(i=0;i<=10;i+=5)
       	{
	        setcolor(2);
	        line(0,400,getmaxx(),400);
	        setcolor(15);
       	 setlinestyle(0,0,1);
       	 setfillstyle(9,cloudColor);
	        ellipse(shiftx,100,30,150,80,50);
       	 ellipse(shiftx-60,110,70,290,60,50);
       	 ellipse(shiftx,120,210,330,80,50);
	        ellipse(shiftx+50,110,250,100,70,50);
       	 floodfill(shiftx,120,15);
	        setlinestyle(0,0,3);
	        settextstyle(0,0,0);
	        outtextxy(shiftx,160+i,"|");
	        outtextxy(shiftx+5,165+i,"|");
	        outtextxy(shiftx-5,165+i,"|");
	        outtextxy(shiftx+15,160+i,"|");
	        outtextxy(shiftx+10,170+i,"|");
       	 outtextxy(shiftx-10,175+i,"|");
       	 outtextxy(shiftx+20,160+i,"|");
	        outtextxy(shiftx+25,165+i,"|");
	        outtextxy(shiftx-25,165+i,"|");
       	 outtextxy(shiftx+35,160+i,"|");
       	 outtextxy(shiftx+40,170+i,"|");
	        outtextxy(shiftx-40,175+i,"|");

	        outtextxy(shiftx,180+i,"|");
	        outtextxy(shiftx+5,185+i,"|");
	        outtextxy(shiftx-5,185+i,"|");
	        outtextxy(shiftx+15,180+i,"|");
       	 outtextxy(shiftx+10,190+i,"|");
	        outtextxy(shiftx-10,195+i,"|");
       	 outtextxy(shiftx+20,180+i,"|");
       	 outtextxy(shiftx+25,185+i,"|");
	        outtextxy(shiftx-25,185+i,"|");
	        outtextxy(shiftx+35,180+i,"|");
	        outtextxy(shiftx+40,190+i,"|");
	        outtextxy(shiftx-40,195+i,"|");

	        outtextxy(shiftx,200+i,"|");
	        outtextxy(shiftx+5,205+i,"|");
	        outtextxy(shiftx-5,205+i,"|");
	 	       outtextxy(shiftx+15,200+i,"|");
	 	       outtextxy(shiftx+10,210+i,"|");
		       outtextxy(shiftx-10,215+i,"|");
	 	       outtextxy(shiftx+20,200+i,"|");
		       outtextxy(shiftx+25,205+i,"|");
		       outtextxy(shiftx-25,205+i,"|");
	 	       outtextxy(shiftx+35,200+i,"|");
	 	       outtextxy(shiftx+40,210+i,"|");
	 	       outtextxy(shiftx-40,215+i,"|");

	 	       outtextxy(shiftx,220+i,"|");
	 	       outtextxy(shiftx+5,225+i,"|");
	 	       outtextxy(shiftx-5,225+i,"|");
		       outtextxy(shiftx+15,220+i,"|");
	 	       outtextxy(shiftx+10,230+i,"|");
	       	 outtextxy(shiftx-10,235+i,"|");
		       outtextxy(shiftx+20,220+i,"|");
	 	       outtextxy(shiftx+25,225+i,"|");
	 	       outtextxy(shiftx-25,225+i,"|");
	 	       outtextxy(shiftx+35,240+i,"|");
	 	       outtextxy(shiftx+40,230+i,"|");
	 	       outtextxy(shiftx-40,235+i,"|");

	       	 outtextxy(shiftx,240+i,"|");
		        outtextxy(shiftx+5,245+i,"|");
		        outtextxy(shiftx-5,245+i,"|");
		        outtextxy(shiftx+15,240+i,"|");
	       	 outtextxy(shiftx+10,250+i,"|");
	       	 outtextxy(shiftx-10,255+i,"|");
	 	        outtextxy(shiftx+20,240+i,"|");
		        outtextxy(shiftx+25,245+i,"|");
		        outtextxy(shiftx-25,245+i,"|");
		        outtextxy(shiftx+35,260+i,"|");
	 	        outtextxy(shiftx+40,250+i,"|");
		        outtextxy(shiftx-40,255+i,"|");

	       	 outtextxy(shiftx,260+i,"|");
	 	       outtextxy(shiftx+5,265+i,"|");
	 	       outtextxy(shiftx-5,265+i,"|");
		        outtextxy(shiftx+15,260+i,"|");
	 	       outtextxy(shiftx+10,270+i,"|");
	 	       outtextxy(shiftx-10,275+i,"|");
	 	       outtextxy(shiftx+20,260+i,"|");
	 	       outtextxy(shiftx+25,265+i,"|");
	 	       outtextxy(shiftx-25,265+i,"|");
	 	       outtextxy(shiftx+35,280+i,"|");
	 	       outtextxy(shiftx+40,270+i,"|");
	 	       outtextxy(shiftx-40,275+i,"|");

		        outtextxy(shiftx,280+i,"|");
	 	       outtextxy(shiftx+5,285+i,"|");
		        outtextxy(shiftx-5,285+i,"|");
	 	       outtextxy(shiftx+15,280+i,"|");
	 	       outtextxy(shiftx+10,290+i,"|");
	       	 outtextxy(shiftx-10,295+i,"|");
		        outtextxy(shiftx+20,280+i,"|");
	 	       outtextxy(shiftx+25,285+i,"|");
		        outtextxy(shiftx-25,285+i,"|");
	       	 outtextxy(shiftx+35,300+i,"|");
	 	       outtextxy(shiftx+40,290+i,"|");
	 	       outtextxy(shiftx-40,295+i,"|");

	 	       if(i%4==0)
        	 man(shiftx ,shiftx+15,shiftx-15);
	         else if(i%4==1)
         	 man(shiftx ,shiftx,shiftx);
	         else if(i%4==2)
         	 man(shiftx ,shiftx-15,shiftx+15);
         	 else if(i%4==3)
	         man(shiftx ,shiftx,shiftx);

 	        delay(100);
	        cleardevice();
       	 shiftx-=5;
       	 if(kbhit())
       	 goto next;
	      }
       if(kbhit())
       goto next;
      }
   }
   next:
}
