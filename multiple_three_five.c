#include <stdio.h>

int
main()
{
	int start = 3;
	int total = 1000;
	int i = 0;
	int tsum = 0;
	int fsum = 0;
	for (i = start; i < total; i++) {
		if ((i % 3) == 0) {
			tsum += i;
		} else if ((i% 5) == 0) {
			fsum += i;
		}
	}
	printf("%d ", tsum + fsum);
}
