#ifndef _DAILY_HOURS_H_
#define _DAILY_HOURS_H_
#include<stdlib.h>
#include "timestamp.h"

typedef struct DailyHours daily_hours;
struct DailyHours
{
	timestamp tm;
	daily_hours* next;
};

daily_hours* newDay(){
	return NULL;
}

daily_hours* addHour(daily_hours* rootDaily, int hour, int min){
	daily_hours* aux = (daily_hours*) malloc(sizeof(daily_hours));
	aux->tm.hour = hour;
	aux->tm.minute = min;
	aux->next = NULL;

	if(rootDaily == NULL){
		return aux;
	}else{
		daily_hours* aux2 = rootDaily;
		while(aux2->next != NULL){
			aux2 = aux2->next;
		}
		aux2->next = aux;
	}

	return rootDaily;
}

#endif