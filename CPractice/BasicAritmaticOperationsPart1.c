#define _CRT_SECURE_NO_WARNINGS
//this line is here to have the visual studio advanced compiler mimic the original clang as close as possible however it makes it lesss secure
#include <stdio.h>
const float PI = 3.14;
float num3 = 7.3;
int main() {
	float num1, num2, result;
	printf("Plesae enter a value for num 1\n");
	scanf("%f", &num1);
	printf("Plesae enter a value for num 2\n");
	scanf("%f", &num2);
	result = num1 + num2;
	printf("Result = %.1f\n", result);
	printf("Plesae enter a new value for num 1\n");
	scanf("%f", &num1);
	printf("Plesae enter a new value for num 2\n");
	scanf("%f", &num2);
	result = num2 - num1;
	printf("%.1f", result);
	printf("%.2f", num3);
	num3 = result;
	printf("%.2f\t%.2f", num3, result);
	result = 2 * PI * num3;
	// result is unused in this state meaning this is redundant but ok i follow instructions.
	printf("%.2f", num3);
		return 0;
}