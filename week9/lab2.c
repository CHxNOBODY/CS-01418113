#include <stdio.h>

typedef enum {MON, TUE, WED, THU, FRI, SAT, SUN} DayOfWeek;  

DayOfWeek findDayOfWeek(int day, int month) {

}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case SUN : printf("Sunday.\n"); break;
		case MON : printf("Monday.\n"); break;
		case TUE : printf("Tuesday.\n"); break;
		case WED : printf("Wednesday.\n"); break;
		case THU : printf("Thursday.\n"); break;
		case FRI : printf("Friday.\n"); break;
		case SAT : printf("Saturday.\n"); break;
	}
}