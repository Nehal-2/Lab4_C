#include <stdio.h>

int main() {
        int N;

        printf("Enter the desired number of rows: ");
	scanf("%d", &N);
	// First group of nested loops to print the right-aligned pyramid
	for (int i = 0; i < N; i++) { // Specifies the number of rows
		for (int j = 0; j < 2*(N - i) - 1; j++) { // Prints the spaces
			printf(" ");
		}

		for (int k = 0; k <= i; k++) { // Prints the astrisks
			printf("* ");
		}
		printf("\n");
	}
	// Second group of nested loops to print the centred triangle
	for (int i = 0; i < N; i++) { // Specifies the number of rows
		for (int j = 0; j < 2*(N - i) - 1; j++) { // Prints the spaces
			printf(" ");
		}

		for (int k = 0; k < 2*i + 1; k++) { // Prints the astrisks
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
