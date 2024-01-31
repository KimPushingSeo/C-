//BMI = w/t**2
//체중(kg,실수)과 키(m,실수)를 입력받아서 체질량 지수를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	float w,t;

	printf("체중을 입력해 주세요 (kg) :");
	scanf("%f", &w);
	printf("키를 입력해 주세요 (m) :");
	scanf("%f", &t);
	double bmi = w / (t * t);
	printf("BMI : %f ", bmi);

}