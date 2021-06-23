#include <stdio.h>

int main()
{
	int a, b, s1,s2,s3;
	scanf("%d %d", &a, &b);
	s1 = b % 10;
	s3 = b / 100;
	s2 = (b - s1 - s3*100) / 10;
	printf("%d \n", a * s1);
	printf("%d \n", a * s2);
	printf("%d \n", a * s3);
	printf("%d", a * b);
	return 0;
}