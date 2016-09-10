#include <stdio.h>

unsigned long result = 0;

int
lcm(int begin, int end)
{
        int start = begin;
        if (result == 0) {
                result = end;
        }
        for (; start <= end; start++) {
                if ((result % start) == 0) {
                        continue;
                }
                result += end;
				return (0);
        }
        return 1;
}

int
main()
{
        int n = 100000;
        int start = 2;
        int end = 20;
        int i;
        for (i = start; i <= end; i++) {
                if (lcm(i, end) == 0) {
					i = start;
				}
        }
        printf("%ld \n", result);
}

