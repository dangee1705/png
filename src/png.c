
#include <stdio.h>
#include <stdlib.h>
#include "png.h"

int main(int argc, char *argv[]) {

	image_t *image = image_new(256, 256);
	for(int y = 0; y < image->height; y++)
		for(int x = 0; x < image->width; x++)
			image->pixels[y * image->width + x] = (rgba_t) {.r = x, .g = y, .b = 0, .a = 255};

	image_save(image, "image.png");
	image_free(image);

	return 0;
}
