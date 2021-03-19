#include <stdio.h>
int main()
{
	int year;
	printf("请输入年份：");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
		printf("%d为闰年", year);
	else
		printf("%d不为闰年", year);
}
