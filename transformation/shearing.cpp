#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int x1,y1,x2,y2,x3,y3,shx,shy;
	
	cout<<"Enter co-ordinates of triangle (x1,y1),(x2,y2),(x3,y3)\n";
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	cout<<"Enter shearing factors shx and shy:\n";
	cin>>shx>>shy;
	cleardevice();
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	
	//translating
	x1=(x1+shx*y1);
	y1=y1+shy*x1;
	
	x2=x2;
	y2=y2;
	
	x3=x3;
	y3=y3;
	
	setcolor(YELLOW);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	
	getch();
	delay(10000);
	closegraph();
	return 0;
}




