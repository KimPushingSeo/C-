//알파벳을 입력 받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a; //a는 문자야
	printf("알파벳을 입력해주세요 : ");
	scanf("%c", &a); //입력된 문자를 a에 저장해
	int b = (int)a + 1;//a를 잠깐 정수로 생각하고 1더한건 정수 b야
	printf("%c 다음 알파벳은 %c입니다", a, b); //b를 문자로 출력해
}