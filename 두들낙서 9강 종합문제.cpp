//두 숫자를 입력 받아서 그 숫자들의 합을 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	printf("더할 숫자 두 개를 입력해주세요 : ");
	scanf("%d %d", &a, &b);
	int sum = a + b;
	printf("%d\n", a, b, sum);
}