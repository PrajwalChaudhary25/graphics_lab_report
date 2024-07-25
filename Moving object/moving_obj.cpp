#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;

void draw_truck(int x,int y){
	int height=80;
	int width_1=150,width_2=50;
	int win_height=20;
	int win_width=20;
	int hgap=20;
	int vgap=20;
	int radius=20;

	//drawing body
	rectangle(x,y,x+width_1,y+height);
	rectangle(x+width_1,y+height/2,x+width_1+width_2,y+height);
	//Drawing window
	rectangle(x+hgap,y+vgap ,x+hgap+win_width,y+vgap+win_height);
	rectangle(x+hgap+40,y+vgap ,x+hgap+win_width+40,y+vgap+win_height);
	rectangle(x+hgap+80,y+vgap ,x+hgap+win_width+80,y+vgap+win_height);
	//drawing wheels
	circle(x+40,y+height,15);
	circle(x+175,y+height,15);
	circle(x+40,y+height,7);
	circle(x+175,y+height,7);
	//drawing road
	line(0,y+height+15,1400,y+height+15);
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
    int startX=10;
    int startY=300;
    int a,b;
	
	cleardevice();
	draw_truck(startX,startY);
	
	a=startX;
	b=startY;
	getch();
	//translating
	while(1)
	{
		cleardevice();
		draw_truck(startX,startY);
	    startX++;
	    
	    //detect endpoint
	    if (startX>=1200)
	    {
	    	startX=a;	
	        cleardevice();
		}
        delay(10);
        if(startX==50||100||150||200)
        {
        	getch();
		}
	}
	
	delay(10000);
	closegraph();
	return 0;
}




