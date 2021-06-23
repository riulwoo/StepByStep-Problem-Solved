#include<stdio.h>
int main()
{
	int hour, minute, h;
	scanf("%d %d", &hour, &minute);
	if (hour <= 23 && hour >= 0)
	{
		if (minute <= 59 && minute >= 0) {
			if (hour == 0) {
				hour = 24;
				if (minute >= 45)
					hour = 0;
			}
			h = hour * 60 + minute - 45;
			printf("%d %d", h / 60, h % 60);
		}
	}
	return 0;
}