#include <stdio.h>

int
main()
{
	int tcnt = 4000000;
	int cnt = 2;
	unsigned long tsum = 0;	
	int next = 1;
	int prev = 1;
	int old;
	while (tsum < tcnt) {
		if ((next % 2) == 0) {
			tsum += next;	
		}
		old = next;
		next = prev + next;
		prev = old;
		cnt++;
	}
	printf("%ld\n", tsum);
}
