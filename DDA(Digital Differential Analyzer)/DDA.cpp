#include <iostream>
#include <math.h>
#include <graphics.h>
using namespace std;

//DDA line drawing algorithm
int main(){
    //initializing graphics
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
		
	float x1,x2,y1,y2;
	float slope;
	int count;
	cout<<"Enter values of (x1,y1):\n";
	cin>>x1>>y1;
	cout<<"Enter values of (x2,y2):\n";
	cin>>x2>>y2;
	slope=(y2-y1)/(x2-x1);
	
	while(x1!=x2 && y1!=y2){
    if (slope>1){
    	x1=x1+(1/slope);
		y1=y1+1;
	}
 	else if(slope<1){
    	x1=x1+1;
		y1=y1+slope;
	}
	else{
		x1=x1+1;
		y1=y1+1;
	}
		putpixel(x1,y1,WHITE);
}
    outtextxy(400,100, "078BCT028");
	delay(50000);
	closegraph();
	return 0;

}
