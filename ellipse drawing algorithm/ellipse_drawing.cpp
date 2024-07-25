#include<iostream>
#include<math.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

void draw_ellipse(float xc,float yc,float a,float b)
{
	//declaring variables
	float p,q;
	float x,y;
	float b2=b*b;
	float a2=a*a;
	
	//calculating initial decision parameter
	p=b2-a2*b+a2/4;
	
	//settimg initial point
	x=0; y=b;
	
	//Drawing region 1
	do
	{
		putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        
        if (p<0)
        {
        	x=x+1;
        	y=y;
        	p=p+(2*b2*x)+b2;
		}
	    else
		{
			x=x+1;
	    	y=y-1;
	    	p=p+(2*b2*x)-(2*a2*y)+b2;
		}
	}while(b2*x<a2*y);
	
	
	q=b2*pow((x+0.5),2)+a2*pow((y-1),2)-a2*b2;
	//Drawing region 2 
	do
	{
		putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        
        if (q<=0)
        {
        	x=x+1;
        	y=y-1;
        	q=q+(2*b2*x)-(2*a2*y)+a2;
		}
	    else
		{
			x=x;
	    	y=y-1;
	    	q=q-2*a2*y+a2;
		}
	}while(y>=0);
	
	
}

int main()
{
	//Initializing graphics
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	float xc,yc,a,b;
	
	//Taking inputs
	cout<<"Enter center (xc,yc):\n";
	cin>>xc>>yc;
	
	cout<<"Enter value of major axis(a):\n";
	cin>>a;
	
	cout<<"Enter value of minor axis(b):\n";
	cin>>b;
	
	//Drawing ellipse
	draw_ellipse(xc,yc,a,b);
	//Printing text
	outtextxy(230,250,"THA078BCT028");
	
	//Terminating program
	getch();
	delay(10000);
	closegraph();
	return 0;
}
