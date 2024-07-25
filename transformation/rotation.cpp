#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int xc,yc,r,theta;
	
	cout<<"Enter center of circle(xc,yc)\n";
	cin>>xc>>yc;
	cout<<"Enter radius of circle\n";
	cin>>r;
	cout<<"Enter rotation angle:\n";
	cin>>theta;
	cleardevice();
	circle(xc,yc,r);
	
	//translating
	xc=xc*cos(theta)-yc*sin(theta);
	yc=xc*sin(theta)+yc*cos(theta);
	
	setcolor(YELLOW);
	circle(xc,yc,r);
	
	getch();
	delay(10000);
	closegraph();
	return 0;
}




