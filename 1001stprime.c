#include <stdio.h>

int
isPrime(int number)
{
	int i;
	for (i = 2; i < number; i++) {
		if ((number % i) == 0) {
			return 1;
		}
	}
	return 0;
}


int
main()
{
	int cnt = 1;
	int start = 2;
	int numprime = 10001;
	//int numprime = 6;
	while (cnt < numprime) {
next:
		start++;
		if (isPrime(start) != 0) {
			goto next;
		} 
		cnt++;
	}
	printf("%d \n", start);
}
