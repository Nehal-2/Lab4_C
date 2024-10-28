#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
        int iHeight = 10;
	int iWidth = 10; // 2D array with size 10x10
	int RGB = 256;
	float grayscale_image[iHeight][iWidth];
	int RGB_image[iHeight][iWidth][3];

	srand(time(0));

	for (int i = 0; i < iHeight; i++) {
		for (int j = 0; j < iWidth; j++) {
			RGB_image[i][j][0] = rand() % RGB; // Red
			RGB_image[i][j][1] = rand() % RGB; // Green
			RGB_image[i][j][2] = rand() % RGB; // Blue

			grayscale_image[i][j] = 0.299*RGB_image[i][j][0] + 0.587*RGB_image[i][j][1] + 0.114*RGB_image[i][j][2];
		}
	}
	printf("Original RGB values and grayscale values: \n");
	for (int i = 0; i < iHeight; i++) {
		for (int j = 0; j < iWidth; j++) {
			printf("(%d, %d):	R = %3d, G = %3d, B = %3d,	Grayscale = %.2f\n",
					i, j, RGB_image[i][j][0], RGB_image[i][j][1], RGB_image[i][j][2], grayscale_image[i][j]);
		}
	}
	return 0;
}
