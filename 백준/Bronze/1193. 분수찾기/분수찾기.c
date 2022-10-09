#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	long int x, SUM_NUMBER, INCREASE, TURN, TEMP_NUMBER, RESULT_A, RESULT_B;
	scanf("%ld", &x);
	if (x == 1) {
		printf("1/1");
		return 0;
	}
	TURN = 0;
	INCREASE = 0;
	SUM_NUMBER = 3;
	x--;
	while (1) {
		TEMP_NUMBER = 1;
		if (TURN == 0) {
			while (SUM_NUMBER > TEMP_NUMBER) {
				if (INCREASE == x) break;
				RESULT_A = TEMP_NUMBER;
				RESULT_B = SUM_NUMBER - TEMP_NUMBER;
				INCREASE++;
				TEMP_NUMBER++;
			}
			TURN = 1;
		}
		else {
			while (SUM_NUMBER > TEMP_NUMBER) {
				if (INCREASE == x) break;
				RESULT_A = SUM_NUMBER - TEMP_NUMBER;
				RESULT_B = TEMP_NUMBER;
				INCREASE++;
				TEMP_NUMBER++;
			}
			TURN = 0;
		}
		//INCREASE--;
		if (INCREASE == x) break;
		SUM_NUMBER++;
	}
	printf("%d/%d\n", RESULT_A, RESULT_B);
}