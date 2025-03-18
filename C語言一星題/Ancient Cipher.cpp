#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//一星題基本上看懂題目就寫得出來　重點是看不懂

int compare(const void* x, const void* y) {
    return *(int*)x - *(int*)y;
}

int main()
{
    char s1[100], s2[100];
    while (scanf("%s%s", s1, s2) != EOF) {
        int count1[26] = { 0 }, count2[26] = { 0 }, len = strlen(s1);
        
        for (int i = 0; i < len; i++) {
            count1[s1[i] - 'A']++;
            count2[s2[i] - 'A']++;
        }

        qsort(count1, 26, sizeof(int), compare);
        qsort(count2, 26, sizeof(int), compare);

        bool no = false;
        for (int i = 0; i < 26; i++) {
            if (count1[i] != count2[i]) {
                no = true;
            }
        }

        if (no) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
}

