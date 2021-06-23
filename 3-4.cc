#include <stdio.h>

int main() {
	int t,a, b;
	scanf("%d", &t);
	if (t <= 1000000 && t>0) {
		for (int i = 0; i < t; i++)
		{
			scanf("%d %d", &a, &b);
			if (a >= 1 && b >= 1) {
				if (a <= 1000 && b <= 1000)
					printf("%d\n", a + b);
			}
		}
	}
}