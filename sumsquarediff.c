#include <stdio.h>

int
main()
{
	int sumsq = 0;
	int sqsum = 0;
	int num = 100;
	int start = 1;
	while (start <= num) {
		sumsq += start*start;
		sqsum += start;
		start++;
	}
	printf("%d \n", (sqsum*sqsum)-sumsq);
}
