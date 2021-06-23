#include<stdio.h>
int main()
{
	int year;
	scanf("%d", &year);
	//윤년은 연도가 4의 배수이면서(and), 100의 배수가 아닐때 / 400의 배수일 때이다.
	//if year % 4 == 0 && year % 100 != 0
	//if year % 400 == 0
	if (year % 4 == 0 && year % 100 != 0)
		printf("1");
	else if (year % 400 == 0)
		printf("1");
	else
		printf("0");
	return 0;
}