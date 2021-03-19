#include <stdio.h>
int main()
{
	int i, j, k;
	
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= i; j++)
		{
			k = i * j;
			printf("%d*%d=%-5d",i, j, k);
		}
		printf("\n");
	}
	return 0;
}
