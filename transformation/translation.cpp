#include<iostream>
#include<conio.h>
#include<math.h>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int x1,y1,x2,y2,tx,ty;
	
	cout<<"Enter top left co-ordinates of Rectangle\n";
	cin>>x1>>y1;
	cout<<"Enter bottom right co-ordinates of Rectangle\n";
	cin>>x2>>y2;
	cout<<"Enter translation factors tx and ty:\n";
	cin>>tx>>ty;
	cleardevice();
	rectangle(x1,y1,x2,y2);
	
	//translating
	x1=x1+tx;
	x2=x2+tx;
	y1=y1+ty;
	y2=y2+ty;
	
	setcolor(YELLOW);
	rectangle(x1,y1,x2,y2);
	
	delay(10000);
	closegraph();
	return 0;
}




