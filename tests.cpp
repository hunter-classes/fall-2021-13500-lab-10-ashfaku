#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("minutesSinceMidnight test cases")
{
	CHECK(minutesSinceMidnight({0, 10}) == 10);
	CHECK(minutesSinceMidnight({10, 10}) == 610);
	CHECK(minutesSinceMidnight({5, 43}) == 343);
	CHECK(minutesSinceMidnight({12, 0}) == 720);
	CHECK(minutesSinceMidnight({23, 59}) == 1439);
	CHECK(minutesSinceMidnight({24, 0}) == 0);
	CHECK(minutesSinceMidnight({25, 10}) == 70);
	CHECK(minutesSinceMidnight({48, 10}) == 10);

}
TEST_CASE("minutesUntil test cases")
{
	CHECK(minutesUntil({10, 30}, {13, 40}) == 190);
	CHECK(minutesUntil({10, 30}, {10, 40}) == 10);
	CHECK(minutesUntil({0, 0}, {1, 0}) == 60);
	CHECK(minutesUntil({0, 1}, {12, 0}) == 719);
	CHECK(minutesUntil({0, 0}, {24, 0}) == 0);
	CHECK(minutesUntil({10, 1}, {10, 60}) == 59);
}
TEST_CASE("addMinutes test cases")
{
	Time i = addMinutes({8, 10}, 75);
	CHECK(i.h == 9);
	CHECK(i.m == 25);
	i = addMinutes({0, 0}, 60);
	CHECK(i.h == 1);
	CHECK(i.m == 0);
	i = addMinutes({10, 2}, 40);
	CHECK(i.h == 10);
	CHECK(i.m == 42);
	i = addMinutes({10, 10}, 0);
	CHECK(i.h == 10);
	CHECK(i.m == 10);
	i = addMinutes({20, 40}, 19);
	CHECK(i.h == 20);
	CHECK(i.m == 59);
}
