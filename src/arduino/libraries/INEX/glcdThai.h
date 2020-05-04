#include "dw_font.h"
unsigned int pixelColor=GLCD_RED;
extern dw_font_info_t font_th_sarabun_new_regular20;
dw_font_t myfont;
void draw_pixel(int16_t x, int16_t y){
    glcdPixel(x,y,pixelColor);
}
void clear_pixel(int16_t x, int16_t y){
  glcdPixel(x,y,GLCD_BLACK);
}
void initThai(){
  dw_font_init(&myfont,160,128,draw_pixel,clear_pixel);
  dw_font_setfont(&myfont, &font_th_sarabun_new_regular20);	
}
void glcdThai(int x,int y,char* text,unsigned int Colors){
  pixelColor=Colors;
  dw_font_goto(&myfont,x,y);
  dw_font_print(&myfont,text);
}
