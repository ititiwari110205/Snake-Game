#include <graphics.h>
int main()
{
	int width = GetSystemMetrics(SM_CXSCREEN);
	int height = GetSystemMetrics(SM_CYSCREEN);
	initwindow(width,height,"",-3,-3);
	setbkcolor(CYAN);
	cleardevice();
	delay(1500);
	setbkcolor(BLUE);
	cleardevice();
	delay(1500);
	setbkcolor(GREEN);
	cleardevice();
	int x=100, y=100;
	while(1)
	{
		setcolor(RED);
			circle(x,y,40);
			readimagefile("snake.jpg",x,y,40);
			if(GetAsyncKeyState(VK_RIGHT))
			x+=10;
		setcolor(YELLOW);
			circle(x,y,40);
			readimagefile("snake.jpg",x,y,40);
			if(GetAsyncKeyState(VK_LEFT))
			x-=10;
			else if(GetAsyncKeyState(VK_UP))
			y-=10;
			else if(GetAsyncKeyState(VK_DOWN))
			y+=10;
				if(GetAsyncKeyState(VK_RETURN))
				break;
				delay(5);
	}
}
