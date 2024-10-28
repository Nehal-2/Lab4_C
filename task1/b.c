#include <stdio.h>

int main() {
        int N;

        printf("Enter the desired number of rows: ");
        scanf("%d", &N);
        // First group of nested loops to print the right-aligned pyramid
        int i = 0;
	while (i < N) { // Specifies the number of rows
		int j = 0;
		while (j < 2*(N - i) - 1) {
			printf(" "); // Prints the spaces
			j++;
		}
		int k = 0;
		while (k <= i) { // Prints the astrisks
			printf("* ");
			k++;
		}
		printf("\n");
		i++;
	}

        // Second group of nested loops to print the centred triangle
	i = 0;
	while (i < N) { // Specifies the number of rows
		int j = 0;
		while (j < 2*(N - i) - 1) { // Prints the spaces
			printf(" ");
			j++;
		}

		int k = 0;
		while (k < 2*i + 1) { // Prints the astrisks
			printf("* ");
			k++;
		}
		printf("\n");
		i++;
	}
        return 0;
}
