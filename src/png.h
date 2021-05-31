#ifndef PNG_H
#define PNG_H

#include <stdio.h>

typedef struct {
	unsigned char r, g, b, a;
} rgba_t;

#define RED {255, 0, 0, 255};
#define GREEN {0, 255, 0, 255};
#define BLUE {0, 0, 255, 255};
#define YELLOW {255, 255, 0, 255};
#define CYAN {0, 255, 255, 255};
#define MAGENTA {255, 0, 255, 255};
#define WHITE {255, 255, 255, 255};
#define BLACK {0, 0, 0, 255};

typedef struct {
	unsigned int width;
	unsigned int height;
	rgba_t *pixels;

	FILE *file;
	unsigned int crc;
	unsigned int s1;
	unsigned int s2;
} image_t;

typedef rgba_t palette_t[256];

typedef enum {
	MODE_TRUECOLOUR_WITH_ALPHA = 6,
	MODE_GREYSCALE_WITH_ALPHA = 4,
	MODE_TRUECOLOUR = 2,
	MODE_GREYSCALE = 0,
	MODE_INDEXED = 3
} image_mode_t;

#endif
