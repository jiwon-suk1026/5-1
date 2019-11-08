#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a = 0;
	int b = 0;
	int max, min;

	printf("두수를 입력하시오:");
	scanf_s("%d %d", &a, &b);

	max = (a > b) ? a : b;
	min = (a > b) ? b : a;

	printf("큰수를 작은 수로 나눈 몫 %d\n", max / min);
	printf("큰수를 작은 수로 나눈 나머지 %d\n", max % min);

}