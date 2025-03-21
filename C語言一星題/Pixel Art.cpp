#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int count[3] = { 0 };
        char str[100000];
        scanf("%d%d%d%s", &count[0], &count[1], &count[2], str);
        
        bool no = false;
        for (int i = 0; i < strlen(str); i++) {
            switch (str[i]) {
                case 'M':
                    count[0]--;
                    break;
                case 'Y':
                    count[1]--;
                    break;
                case 'C':
                    count[2]--;
                    break;
                case 'R':
                    count[0]--;
                    count[1]--;
                    break;
                case 'B':
                    count[0]--;
                    count[1]--;
                    count[2]--;
                    break;
                case 'G':
                    count[1]--;
                    count[2]--;
                    break;
                case 'V':
                    count[0]--;
                    count[2]--;
                    break;
                case 'W':
                    break;
            }
            if (count[0] < 0 || count[1] < 0 || count[2] < 0) {
                no = true;
                break;
            }
        }
        
        if (no) {
            printf("NO\n");
        } else {
            printf("YES %d %d %d\n", count[0], count[1], count[2]);
        }
    }
}
