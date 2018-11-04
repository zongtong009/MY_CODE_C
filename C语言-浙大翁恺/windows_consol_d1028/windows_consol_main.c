#include <stdio.h>
#include <stdlib.h>
#include "acllib.h"
 
#define M_Width 12
#define M_Height 16
 
#define Pixel_length 40
 
#define Window_width 800
#define Window_height 800
 
#define HAT_COLOR      RGB(235, 61, 0)
#define HAIR_COLOR     RGB(112, 54, 42)
#define SKIN_COLOR     RGB(245, 195, 124)
#define EYE_COLOR      RGB(28, 32, 33)
#define SHIRT_COLOR        RGB(235, 61, 0)
#define PANTS_COLOR        RGB(33, 54, 133)
#define SHOE_COLOR     RGB(141, 75, 41)
 
typedef struct operatingBasicPoint{
    int x;
    int y;
}oBP;
 
oBP * basicPoint = NULL;
 
inline void drawPixels(ACL_Color color, int num_x, int num_y);
void drawPixels(ACL_Color color, int num_x, int num_y) {
    setBrushColor(color);
    setPenColor(color);
     
    int x = basicPoint->x;
    int y = basicPoint->y;
     
    int i, j;
    for(i = 0; i < num_y; i++) {
        for(j = 0; j < num_x; j++) {
            rectangle(x, y, x + Pixel_length, y + Pixel_length);
            x += Pixel_length;
        }
        y += Pixel_length;
        x = basicPoint->x;
    }
     
    return;
}
 
inline void moveBasicPoint(int x, int y);
void moveBasicPoint(int x, int y) {
    basicPoint->x += Pixel_length * x;
    basicPoint->y += Pixel_length * y;
    return;
}
 
int Setup()
{
    initWindow("Mario", DEFAULT, DEFAULT, Window_width, Window_height);
    beginPaint();
     
    //calculate the basic point's position
    int p_x = Window_width - Pixel_length * M_Width;
    p_x /= 2;
     
    int p_y = Window_width - Pixel_length * M_Height;
    p_y /= 2;
     
    oBP StartPoint = {p_x, p_y};
    basicPoint = &StartPoint;
     
    //move the basic point to the prepare for drawing hat
    moveBasicPoint(3, 0);
     
    //draw the hat for mairo
    drawPixels(HAT_COLOR, 5, 1);
    moveBasicPoint(-1, 1);
    drawPixels(HAT_COLOR, 9, 1);
     
    //draw the head of mario
    moveBasicPoint(0, 1);
    drawPixels(SKIN_COLOR, 10, 5);
    drawPixels(HAIR_COLOR, 3, 4);
    moveBasicPoint(-1, 0);
    drawPixels(WHITE, 1,1);
    moveBasicPoint(0, 1);
    drawPixels(HAIR_COLOR, 1, 3);
    moveBasicPoint(1, 0);
    drawPixels(SKIN_COLOR, 1,2);
    moveBasicPoint(2, 0);
    drawPixels(SKIN_COLOR, 1, 1);
    moveBasicPoint(-1, 2);
    drawPixels(SKIN_COLOR, 2, 1);
    moveBasicPoint(4, -3);
    drawPixels(EYE_COLOR, 1, 2);
    moveBasicPoint(2, 0);
    drawPixels(WHITE, 3, 1);
    moveBasicPoint(2, 1);
    drawPixels(WHITE, 1, 1);
    moveBasicPoint(0, 2);
    drawPixels(WHITE, 1, 2);
    moveBasicPoint(-1, 1);
    drawPixels(WHITE, 1, 1);
    moveBasicPoint(-2, -2);
    drawPixels(HAIR_COLOR, 1, 1);
    moveBasicPoint(-1, 1);
    drawPixels(HAIR_COLOR, 4, 1);
    moveBasicPoint(-5, 1);
    drawPixels(WHITE, 1, 1);
     
    //draw mario's body
    moveBasicPoint(0, 1);
    drawPixels(PANTS_COLOR, 8, 7);
    drawPixels(SHIRT_COLOR, 2, 4);
    moveBasicPoint(-2, 1);
    drawPixels(SHIRT_COLOR, 2, 2);
    drawPixels(WHITE, 1, 1);
    moveBasicPoint(0, 2);
    drawPixels(SKIN_COLOR, 2, 3);
    moveBasicPoint(2, 1);
    drawPixels(SKIN_COLOR, 1, 1);
    moveBasicPoint(1, -1);
    drawPixels(SKIN_COLOR, 1, 1);
    moveBasicPoint(1, 0);
    drawPixels(SHIRT_COLOR, 1, 1);
    moveBasicPoint(1, -3);
    drawPixels(SHIRT_COLOR, 3, 2);
    moveBasicPoint(2, 1);
    drawPixels(PANTS_COLOR, 1, 1);
    moveBasicPoint(1, -1);
    drawPixels(SHIRT_COLOR, 4, 3);
    drawPixels(WHITE, 4, 1);
    moveBasicPoint(3, 1);
    drawPixels(WHITE, 1, 1);
    moveBasicPoint(-4, 2);
    drawPixels(SHIRT_COLOR, 1, 1);
    moveBasicPoint(1, 0);
    drawPixels(SKIN_COLOR, 1, 1);
    moveBasicPoint(1, 0);
    drawPixels(SKIN_COLOR, 3, 3);
    drawPixels(SHIRT_COLOR, 1, 1);
    moveBasicPoint(0, 2);
    drawPixels(PANTS_COLOR, 1, 1);
     
    //draw mario's shoes
    moveBasicPoint(-1, 2);
    drawPixels(SHOE_COLOR, 4, 2);
    moveBasicPoint(3, 0);
    drawPixels(WHITE, 1, 1);
    moveBasicPoint(-11, 0);
    drawPixels(SHOE_COLOR, 4, 2);
    drawPixels(WHITE, 1, 1);
     
    endPaint();
    return 0;
}
