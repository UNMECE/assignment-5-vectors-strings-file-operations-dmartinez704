#ifndef _PIXEL_H
#define _PIXEL_H

//MYPIXEL
struct my_pixel
{
	float r;
	float g;
	float b;
	int x;
	int y;

};

typedef struct my_pixel Pixel;

//VECTOR
std::vector<Pixel> pixel_list;

//FUNCTIONS
void average_colors(std::vector<Pixel> &pixel_list);
void flip_vertically(std::vector<Pixel> &pixel_list);
#endif
