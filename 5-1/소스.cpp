#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a = 0;
	int b = 0;
	int max, min;

	printf("�μ��� �Է��Ͻÿ�:");
	scanf_s("%d %d", &a, &b);

	max = (a > b) ? a : b;
	min = (a > b) ? b : a;

	printf("ū���� ���� ���� ���� �� %d\n", max / min);
	printf("ū���� ���� ���� ���� ������ %d\n", max % min);

}