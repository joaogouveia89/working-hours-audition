#ifndef _FILE_READER_H_
#define _FILE_READER_H_
#include <stdio.h>
#include "../constants.h"
#include "../structs/weekly_hours.h"
#include "../structs/daily_hours.h"
#include "../backend/hoursop.h"

void readLine(char* buff){
	int i;
	printf("%s", buff);
	for(i = 0; i < LINESIZE; i++){
		
	}
}

void printReport(){
	FILE *fp;
	fp = fopen(IOFILENAME, "r");
	char buff[LINESIZE];
	int balanceSignal;
	int balanceInMinutes;
	int line = 0;

	weekly_hours* rootWeek = newWeek();
	while(fgets(buff, sizeof(buff), fp)){
		if(line == 0){
			balanceSignal = getBalanceSignal(buff);
			balanceInMinutes = getBalanceInMinutes(buff);
		}else{
			readLine(buff);
		}
		line++;
	}
	// printf("signal = %i\n", balanceSignal);
	// printf("balanceInMinutes = %i", balanceInMinutes);
	fclose(fp);
}



#endif