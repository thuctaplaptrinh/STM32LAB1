#include "ex10_test.h"
#include "ex9_test.h"
#include "ex8_test.h"
void displayClock(int hour, int minute, int second)
{
	while(1)
	{

//		if(second%5 == 0)
//			setNumberOnClock(second/5);
//		else
//			clearNumberOnClock(second/5);
//		if(minute%5 == 0)
//			setNumberOnClock(minute/5);
//		else
//			clearNumberOnClock(second/5);
//		setNumberOnClock(hour);
//		if(second >= 60)
//		{
//			second = 0;
//			minute++;
//			setNumberOnClock(second);
//			if(minute%5 == 0)
//				setNumberOnClock(minute/5);
//			else
//				clearNumberOnClock(second/5);
//		}
//		if(minute >= 60)
//		{
//			minute = 0;
//			hour++;
//			setNumberOnClock(minute);
//			setNumberOnClock(hour%12);
//		}
//		if(hour >= 12)
//		{
//			hour = 0;
//		}
//		second++;
//		HAL_Delay(1000);

		if(second >= 60){
			second = 0;
			clearNumberOnClock(minute/5);
			minute++;
		}
		if(minute >= 60){
			clearNumberOnClock(hour/5);
			hour++;
			minute = 0;
		}
		if(hour >= 12){
			hour = 0;
		}
		if(second%5 == 0)
			setNumberOnClock(second/5);
		if(minute%5 == 0)
			setNumberOnClock(minute/5);
		setNumberOnClock(hour);

		HAL_Delay(100);
		clearNumberOnClock(second%12);
		second++;
	}
}
