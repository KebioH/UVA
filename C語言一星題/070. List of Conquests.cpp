﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int c;
	scanf("%d", &c);
	getchar();
	
	char countryList[2000][75];
	int count[2000] = { 0 };
	int countryCount = 0;

	while (c--) {
		char string[75];
		do {
			fgets(string, sizeof(string), stdin);
		} while (string[0] == '\n');

		char country[75];
		sscanf(string, "%s", country); //新招
		
		int found = 0;
		for (int i = 0; i < countryCount; i++) {
			if (strcmp(countryList[i], country) == 0) {
				count[i]++;
				found = 1;
				break;
			}
		}

		if (found == 0) {
			strcpy(countryList[countryCount], country);
			count[countryCount]++;
			countryCount++;
		}
	}

	for (int i = countryCount - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (strcmp(countryList[j], countryList[j + 1]) > 0) {
				char temp[75];
				strcpy(temp, countryList[j]);
				strcpy(countryList[j], countryList[j + 1]);
				strcpy(countryList[j + 1], temp);

				int tempCount = count[j];
				count[j] = count[j + 1];
				count[j + 1] = tempCount;
			}
		}
	}

	for (int i = 0; i < countryCount; i++) {
		printf("%s %d\n", countryList[i], count[i]);
	}
}


