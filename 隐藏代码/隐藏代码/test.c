#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "add.h"


//函数的定义
int Add(int x, int y)
{
	return (x + y);
}

int main()
{
	int n, count = 0;
	for (n = 1; n <= 100; n++)
	{
		if (n % 10 == 9)
		{
			count++;
		}
		if (n / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}