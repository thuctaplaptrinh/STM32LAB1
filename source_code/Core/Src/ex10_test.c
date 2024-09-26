#include "ex10_test.h"
#include "ex9_test.h"
#include "ex8_test.h"
void displayClock(int hour, int minute, int second)
{
	while(1)
	{
		if(second >= 60){
			second = 0;
			minute++;
		}
		if(minute >= 60){
			hour++;
			minute = 0;
		}
		if(hour >= 12){
			hour = 0;
		}
		if(second%5 == 0)
			setNumberOnClock(second/5);
		else
			clearNumberOnClock(second/5);
		if(minute%5 == 0)
			setNumberOnClock(minute/5);
		else
			clearNumberOnClock(minute/5);
		setNumberOnClock(hour);

		HAL_Delay(1000);
		clearNumberOnClock(second%12);
		second++;
	}
}
