#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int iGridSize = 10; // 2D grid with size 10x10 
	
       //srand(time(0));	

	// Keep the random coordinates within the grid boundaries
	int xt = srand(time(0)) % iGridSize;
	int yt = srand(time(0)) % iGridSize;

	// Search the grid using loops
	for (int x = 0; x < iGridSize; x++) {
		for (int y = 0; y <iGridSize; y++) {
			if (x == xt && y == yt) {
				printf("Hurrah!, I have found the hidden treasure at (%d, %d)\n", x, y);
				return 0; // Exit the program if the treasure is found
				}
		}
	}
        return 0;
}
