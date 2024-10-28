#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
        int M, N;
	int t = 0;

	printf("Please enter the desired number of samples (M): ");
	scanf("%d", &M);
	if (M <= 0) {
		printf("Invalid input. Please enter a positive integer.\n");
		return 1;
	}
	// Generate a 1D array to represent the noisy signal:
        srand(time(0));
	int iNoisySignal[M];
	int iMaxValue = 1000;
	for (int t = 0; t < M; t++) {
		iNoisySignal[t] = rand() % iMaxValue;
	}
	printf("Please enter the number of samples to be averaged (N): ");
	scanf("%d", &N);
	if (N <= 0) {
                printf("Invalid input. Please enter a positive integer.\n");
                return 1;
        }
	// Calculate the moving average:
	float iAveragedSignal[M];
	for (int t = 0; t < M; t++) {
		float sum = 0;
		int count = 0;
		for (int i = t; i >= 0 && count < N; i--, count++) {
			sum += iNoisySignal[i];
		}
		iAveragedSignal[t] = sum/count;
	}
	// Print the output:
	printf("Original Signal: \n");
	for (int t = 0; t < M; t++) {
		printf("%d ", iNoisySignal[t]);
	}
	printf("\nFiltered Signal: \n");
	for (int t = 0; t < M; t++) {
		printf("%.2f ", iAveragedSignal[t]);
	}
	printf("\n");
	return 0;
}
