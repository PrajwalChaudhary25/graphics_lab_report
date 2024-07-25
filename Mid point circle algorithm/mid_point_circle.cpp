#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;

//Midpoint circle drawing algorithm
void drawcircle(float xc,float yc,float r){
	float x,y,p;

	//starting point
	x=0;
	y=r;
	
	//initial decision parameter
	p=1-r;
	
	do{
	//drawing pixels
	putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	
	putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc-x,WHITE);
	
	if (p<0)
	{
		p=p+2*x+3;
		x=x+1;
	}
	else //p>=0
	{
	    p=p+2*x-2*y+5;
	    x=x+1;
	    y=y-1;
	}
    }while(x<=y);
	
}

int main()
{
	//initializing graphics
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	//Declaring variables
	int xc,yc,r;
	//taking inputs
    cout<<"Input center of circle(xc,yc):\n";
    cin>>xc>>yc;
    cout<<"Enter radius of circle:\n";
    cin>>r;
    //calling above function
	drawcircle(xc,yc,r);
    outtextxy(xc-50,yc,"THA078BCT028");
    
    //terminating program
	delay(10000);
	closegraph();
	return 0;		
}
