#include <stdio.h>
int main()
{
	long ge, shi, qian, wan, x;
	printf("请输入一个数");
	scanf_s("%ld", &x);
	wan = x / 10000;
	qian = x % 10000 / 1000;
	shi = x % 100 / 10;
	ge = x % 10;
	if (ge == wan && shi==qian)
		printf("回文数");
	else printf("不是回文数");

}