#include <stdio.h>
#include <unistd.h>

int main() {
        int N, min, sec;

        printf("Enter the desired number of minutes: ");
        scanf("%d", &N);
        
	if (N <= 0) {
		printf("Invalid input. Please enter a positive integer.\n");
		return 1;
	}
	printf("Counting up to %d minute(s):\n", N);
	for (min = 0; min <= N; min++) { // repeats after 60 seconds
		for (sec = 0; sec < 60; sec++) { // counts the seconds and prints the output
			printf("%02d : %02d\n", min, sec);
			sleep(1); // wait 1 second

			if (min == N && sec == 0)
				break;
		}
	}
        return 0;
}
