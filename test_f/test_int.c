#include <stdio.h>

#include <limits.h>

int main(void)
{
	int i = INT_MAX + 1;
	int k = INT_MIN - 1;
	int j = INT_MAX;
	int m = INT_MIN;

	_printf("INT_MAX + 1: %d, INT_MIN - 1: %d, INT_MAX: %d, INT_MIN %d", i, k, j, m);
	return(1);
}
