#include<stdio.h>

int main() {
	int a, b, c, temp, i;
	int cnt = 0;
		scanf("%d", &i); // i = 26
		temp = i;
		if (i >= 0 && i <= 99) {
			while (1) { //temp = 26
				a = i / 10; //a = 2
				b = i % 10; //b = 6
				c = a + b; //c = 8
				i = b * 10 + c % 10; //i = 68
				cnt = cnt + 1;
				if (temp == i) {
					printf("%d\n", cnt);
					break;
				}
			}
		}
	}