#ifndef _WEEKLY_HOURS_H_
#define _WEEKLY_HOURS_H_
#include "daily_hours.h"

typedef struct WeeklyHours weekly_hours;
struct WeeklyHours
{
	daily_hours* dh;
	weekly_hours* next;
};

weekly_hours* newWeek(){
	// return (weekly_hours*) malloc(sizeof(weekly_hours));
	return NULL;
}

daily_hours* addWeek(weekly_hours* rootWeek, daily_hours* dh){
	weekly_hours* aux = (weekly_hours*) malloc(sizeof(weekly_hours));
	aux->dh = dh;
	aux->next = NULL;

	if(rootWeek == NULL){
		return aux;
	}else{
		weekly_hours* aux2 = rootWeek;
		while(aux2->next != NULL){
			aux2 = aux2->next;
		}
		aux2->next = aux;
	}

	return rootWeek;
}
#endif