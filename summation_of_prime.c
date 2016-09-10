#include <stdio.h>
#include <pthread.h>

int
isPrime(int num)
{
	int i;
	for (i = 2; i < num; i++) {
		if ((num%i) == 0) {
			return 0;
		}
	}
	return num;
}

static void *
start(void *arg)
{
	int i = 2;
	unsigned long sum = i;
	unsigned long *start = (unsigned long *)arg;
	for (i = 3; i < *start; i++) {
		sum += isPrime(i);	
	}
	printf("sum = %ld \n", sum);
}

int
main()
{
	int i = 2;
	int total = 2000000;
	//int total = 10;
	pthread_t	tid[8];
	unsigned long sum = i;
	unsigned long each = 0;
	int numthr = 1;
	for (i = 0; i < numthr; i++) {
		//each += (total/numthr);
		each = total;
		pthread_create(&tid[i], NULL, start, &each);
		sleep(1);
	}
	for (i = 0; i <numthr; i++)
		pthread_join(tid[i], NULL);
	//printf("%ld\n", sum);
}
