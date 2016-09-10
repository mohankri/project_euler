#include <stdio.h>

int
main()
{
	unsigned long num = 600851475143;
	//unsigned long num = 13195;
	//unsigned long num = 144;
	int i = 2;
	while (i <= num) {
		if ((num % i) == 0) {
			num /= i;
		} else {
			i++;
		}
	}
	printf("Largest Prime Factor %d\n", i);
}
