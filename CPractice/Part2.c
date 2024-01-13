#define _CRT_SECURE_NO_WARNINGS
//this line is here to have the visual studio advanced compiler mimic the original clang as close as possible however it makes it lesss secure
#include <stdio.h>

int main() {
	char name[10];
	char month[3];
	char day[3];
	char year[3];
	float balance;
	printf("Please enter your first name\n");
	scanf("%s", name);
	printf("Please enter the number of the day\n");
	scanf("%s",day);
	printf("Please enter the number of the month\n");
	scanf("%s", month);
	printf("Please enter the year in two digit format\n");
	scanf("%s", year);
	printf("Please enter the current balance\n");
	scanf("%f", &balance);
	printf("Name\tDOB\tBalance\n");
	printf("%s\t %s/%s/%s\t %.2f\n", name, month, day, year, balance);
	//repeat 2 
	printf("Please enter your first name\n");
	scanf("%s", name);
	printf("Please enter the number of the day\n");
	scanf("%s", day);
	printf("Please enter the number of the month\n");
	scanf("%s", month);
	printf("Please enter the year in two digit format\n");
	scanf("%s", year);
	printf("Please enter the current balance\n");
	scanf("%f", &balance);
	printf("Name\tDOB\tBalance\n");
	printf("%s\t %s/%s/%s\t %.2f\n", name, month, day, year, balance);
	//repeat 3
	printf("Please enter your first name\n");
	scanf("%s", name);
	printf("Please enter the number of the day\n");
	scanf("%s", day);
	printf("Please enter the number of the month\n");
	scanf("%s", month);
	printf("Please enter the year in two digit format\n");
	scanf("%s", year);
	printf("Please enter the current balance\n");
	scanf("%f", &balance);
	printf("Name\tDOB\tBalance\n");
	printf("%s\t %s/%s/%s\t %.2f", name, month, day, year, balance);



	return 0;
}
