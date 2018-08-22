#ifndef _HOURSOP_H_
#define _HOURSOP_H_

#include "numbersop.h"

int getBalanceSignal(char* buff){
	if(buff[0] == '-'){
		return NEGATIVE;
	}else{
		return POSITIVE;
	}
}
int getBalanceInMinutes(char* buff){
	char minstr[2];
	char hoursstr[2];
	int hours;
	int minutes;

	hoursstr[0] = buff[1];
	hoursstr[1] = buff[2];
	minstr[0] = buff[4];
	minstr[1] = buff[5];

	hours = strtoint(hoursstr);
	minutes = strtoint(minstr);

	return ((hours*60) + minutes);
}

#endif