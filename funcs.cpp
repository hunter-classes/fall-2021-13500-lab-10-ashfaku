#include "time.h"
int minutesSinceMidnight(Time time)
{

	int r = 0;
	time.h %= 24;
	time.h += (time.m / 60);
	r += time.h * 60;
	r += time.m;
	return r;
}
int minutesUntil(Time earlier, Time later)
{
	int bh = earlier.h, bm = earlier.m, lh = later.h, lm = later.m;
	int m = lm - bm, h = (lh - bh) % 24 + m/60;
	return h * 60 + (m % 60);
}
Time addMinutes(Time time0, int min)
{
	int m = min % 60, h = min / 60;
	return {time0.h + h, time0.m + m};
}
