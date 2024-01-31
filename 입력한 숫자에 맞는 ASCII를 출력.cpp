#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int	main() {
	int a;

	printf("숫자를 입력해주세요 : ");
	scanf("%d",&a);
	printf("입력하신 숫자 %d에 해당하는 ASCII는 %c 입니다.\n",a, a);
}