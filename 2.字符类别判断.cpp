#include <stdio.h>
int main()
{
	char c;
	printf("请输入一个字符：");
		c = getchar();
	if (c < 32)
		printf("该字符是一个控制字符串。\n");
	else if (c >= '0'&&c <= '9')
		printf("该字符串是一个数字。\n");
	else if (c >= 'A'&&c <= 'Z')
		printf("该字符是一个大写字母。\n");
	else if (c >= 'a'&&c <= 'z')
		printf("该字符是一个小写字母。\n");
	else
		printf("该字符是其他字符。\n");

}