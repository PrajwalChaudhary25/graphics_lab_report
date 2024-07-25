#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

//Bressenham's line drawing algorithm
void drawline(float x1,float y1,float x2,float y2)
 {
 	float dx,dy;
	float p,Xinc,Yinc;
	
	dx=fabs(x2-x1);
	dy=fabs(y2-y1);
	
	if (x2>x1)
		Xinc=1;
	else
		Xinc=-1;
	
	if (y2>y1)
		Yinc=1;
	else
		Yinc=-1;

	putpixel(x1,y1,WHITE);
	if(dx>dy)
	{
		p=2*dy-dx;
		while(x1!=x2)
		{
//			delay(100);
			if (p<0)
			{
				x1=x1+Xinc;
				y1=y1;
				p=p+2*dy;
			}
			else
			{
				x1=x1+Xinc;
				y1=y1+Yinc;
				p=p+2*dy-2*dx;
			}
			putpixel(x1,y1,WHITE);
		}
	
	}
	else
	{
		p=2*dx-dy;
		while(y1!=y2)
		{
//			delay(100);
			if (p<0)
			{
				x1=x1;
				y1=y1+Yinc;
				p=p+2*dx;
			}
			else
			{
				x1=x1+Xinc;
				y1=y1+Yinc;
				p=p+2*dx-2*dy;
			}
			putpixel(x1,y1,WHITE);	
		}
	}
	putpixel(x1,y1,WHITE);	
	
}

int main(){
    
	float x1,x2,y1,y2;
	
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	cout<<"Enter (x1,y1):\n";
	cin>>x1>>y1;
	cout<<"Enter (x2,y2):\n";
	cin>>x2>>y2;
	
    drawline(x1,y1,x2,y2);
    
    delay(50000);
	closegraph();
	return 0;
		
}

