#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
getdivisor(int num)
{
	int cnt = 1;
	int ptr = 0;
	while (num > cnt * 10) {
		cnt *= 10;
		ptr++;
	}
	return ptr;
}

int
isPalindrome(int num)
{
	int div, mod;
	char result[256] = {};
	char *start, *end;
	sprintf(result, "%d", num);
	start = result;
	end = result + strlen(result)-1;
	while (*start && *end) {
		if (*start == *end) {
			start++;
			end--;
		} else {
			return -1;
		}
	}
	return (0);
}

int find(int start, int end)
{
	int max = 0;
	while (start < end) {
		if (isPalindrome(start*end) == 0) {
			if ((start * end) > max) {
				max = (start * end);
			}
		} 
		end--;
	}
	return max;
}


int
main()
{
	int start = 999;
	int save = start;
	int end = 999;
	int cnt = 0;
	int max = 0;
	int i;
	for (i = 1; i <= end; i++) {
		cnt = find(i, end);
		if (cnt > max) {
			max = cnt;
		}
	}
	printf("max %d\n", max);
}
