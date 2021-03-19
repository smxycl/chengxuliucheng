#include <stdio.h>
int main()
{
	int number = 5, guess;
	printf("请输入一个介于1-10的数字\n");
	do
	{
		printf("请输入一个猜测的数字:");
			scanf_s("%d", &guess);
		if (guess > number)
			printf("太大\n");
		if (guess < number)
			printf("太小\n");
	} while (guess != number);
	printf("你猜中了！答案为%d\n", guess);
	
}