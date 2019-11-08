#include "drawing.h"

#include <unistd.h>
#include <stdio.h>

//
// Example 1 - Hello World
//
// Draws a single pixel to the middle of the screen.
//
// Exercises:
// 1. Change the color of the pixel (find the list in drawing.h)
// 2. Draw another pixel, three spaces to the right
// 3. Draw a mouth for your smiley face (4-6 more pixels), just below the eyes
//

    int x = 50;
    int y = 50;

void userFunction(void)
{
//	Clear();
	//UseAntiAliasing(true);
//    DrawPixel(80, 60, Yellow);
    
    
//    DrawCircle(50, 50, 20, Green, true);
//    DrawLine(10, 10, 25, 25, 1, Blue);
//    DrawRectangle(70, 10, 30, 40, Red, true);
    
//    for(int i = 0; i < 10; i++) {
//    	Clear();
//    	DrawCircle(10 + 10*i, 80, 10, White, true);
//    	UpdateScreen();
//    	Wait(100);
//	}
    
	DrawCircle(x, y, 10, Black, true);	// remove circle
    char c = LastKey();
    if (c == Esc) {
    	CloseWindow();
	} 
	if (c == Up) {
		y -= 10;
	}
	if (c == Down) {
		y += 10;
	}
	if (c == Left) {
		x -= 10;
	}
	if (c == Right) {
		x += 10;
	}
	DrawCircle(x, y, 10, Green, true);
	
	int kx = MouseX();
	int ky = MouseY();
	if (LeftMousePressed()) {
		DrawPixel(kx, ky, LightBlue);
	}
	
    UpdateScreen();
    Wait(100);
    
}
