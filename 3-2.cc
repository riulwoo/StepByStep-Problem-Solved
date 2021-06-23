#include<stdio.h>
/*1
int main() {
	int a,i;
	scanf("%d", &a);
	for (i = 1; i < 10;i++) {
		printf("%d * %d = %d \n", a, i, a * i);

	}
}
*/
int main() {
	int a=0, b=0, c=0, i=0;
	scanf("%d", &a);
	if (a > 0 && b < 10) {
		for (i = 1; i <= a; i++) {
			scanf("%d %d", &b, &c);
			printf("%d\n", b + c);
		}
	}
	return 0;
}