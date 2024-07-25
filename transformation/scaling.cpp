#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int x1,y1,x2,y2,sx,sy;
	
	cout<<"Enter top left co-ordinates of Rectangle\n";
	cin>>x1>>y1;
	cout<<"Enter bottom right co-ordinates of Rectangle\n";
	cin>>x2>>y2;
	cout<<"Enter scaling factors sx and sy:\n";
	cin>>sx>>sy;
	cleardevice();
	rectangle(x1,y1,x2,y2);
	
	//translating
	x1=x1*sx;
	x2=x2*sx;
	y1=y1*sy;
	y2=y2*sy;
	
	setcolor(YELLOW);
	rectangle(x1,y1,x2,y2);
	
	delay(10000);
	closegraph();
	getch();
	return 0;
}




