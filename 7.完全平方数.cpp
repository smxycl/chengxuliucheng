
#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, k;
	for (k = 0; k <= 1000; k++)
	{
		i = sqrt(k + 100);
		j = sqrt(k + 268);
		if (i*i == k + 100 && j*j == k + 268)
			printf("%d\n", k);
	}
}