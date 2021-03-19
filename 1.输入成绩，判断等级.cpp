#include <stdio.h>
int main()
{
	float grade;
	printf("\n请输入期末成绩：");
	scanf_s("%f", &grade);
	if (grade >= 90)
		printf("\n优秀");
	else if ((grade >= 80) && (grade < 90))
		printf("\n良");
	else if ((grade >= 60) && (grade < 80))
		printf("\n中");
	else
		printf("\n差");
	printf("\n");
}