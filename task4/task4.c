#include <stdio.h>

int main() {
        int iCities = 10;
        int iMax, iMin;
        float fSum = 0;
        float fMean;

        int iPopulation[iCities];

        for (int i = 0; i < iCities; i++) {
                printf("Enter the population of city %d:\n", i+1);
                scanf("%d", &iPopulation[i]);

                if (i == 0)
                        iMax = iMin = iPopulation[i];
                else {
                        if (iPopulation[i] > iMax)
                                iMax = iPopulation[i];
                        if (iPopulation[i] < iMin)
                                iMin = iPopulation[i];
                }
                fSum += iPopulation[i];
        }
        fMean = fSum/iCities;

        for (int i = iCities; i >= 1; i--) {
		printf("The population in city %d is %d.\n", i, iPopulation[i - 1]);
	}

        printf("Maximum population: %d\n", iMax);
        printf("Minimum population: %d\n", iMin);
	printf("Mean population: %.2f\n", fMean);
        return 0;
}

