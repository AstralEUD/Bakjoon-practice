#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int GET_TEAM_SCORE(char h[], int nls, int nos, int nvs, int nes) {
	int p, t, ls, os, vs, es, fin;
	ls = 0;
	os = 0;
	es = 0;
	vs = 0;
	p = strlen(h);
	for (t = 0; t <= p; t++) {
		if (h[t] == 'L') ls++;
		if (h[t] == 'O') os++;
		if (h[t] == 'V') vs++;
		if (h[t] == 'E') es++;
	}
	ls += nls;
	os += nos;
	vs += nvs;
	es += nes;
	fin = (ls + os) * (ls + vs) * (ls + es) * (os + vs) * (os + es) * (vs + es);
	fin = fin % 100;
	return fin;
}

int main() {
	int N, i, namescore, teamscore, temp, nls, nos, nvs, nes, p, t;
	char NAME[30];
	char TEAM[30];
	char STORED_TEAM[30] = { 'a' };
	scanf("%s", NAME);
	p = strlen(NAME);
	nls = 0;
	nos = 0;
	nvs = 0;
	nes = 0;
	for (t = 0; t <= p; t++) {
		if (NAME[t] == 'L') nls++;
		if (NAME[t] == 'O') nos++;
		if (NAME[t] == 'V') nvs++;
		if (NAME[t] == 'E') nes++;
	}
	scanf("%d", &N);
	teamscore = 0;
	for (p = 0; p < N; p++) {
		scanf("%s", TEAM);
		temp = GET_TEAM_SCORE(TEAM, nls, nos, nvs, nes);
		if (temp > teamscore) {
			strcpy(STORED_TEAM, TEAM);
			teamscore = temp;
		} 
		if (temp == teamscore) {
			if (strcmp(STORED_TEAM, TEAM) > 0) {
				strcpy(STORED_TEAM, TEAM);
			}
		}
	}
	printf("%s", STORED_TEAM);
}