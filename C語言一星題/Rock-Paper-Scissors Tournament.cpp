#include <stdio.h>

//看清楚題目 往往沒有想像中難

int winner(char* m1, char* m2, int index1, int index2) {
    if (m1[0] == 'r' && m2[0] == 's') return index1;
    if (m1[0] == 'r' && m2[0] == 'p') return index2;
    
    if (m1[0] == 's' && m2[0] == 'p') return index1;
    if (m1[0] == 's' && m2[0] == 'r') return index2;
    
    if (m1[0] == 'p' && m2[0] == 'r') return index1;
    if (m1[0] == 'p' && m2[0] == 's') return index2;
    
    return 0;
}

int main() {
    int n, k;
    while (scanf("%d%d", &n, &k) && n != 0) {
        int win[100] = { 0 };
        int lose[100] = { 0 };
        int playnum = k * n * (n - 1) / 2;
        
        for (int i = 0; i < playnum; i++) {
            int index1, index2;
            char m1[10], m2[10];
            scanf("%d%s%d%s", &index1, m1, &index2, m2);
            
            int result = winner(m1, m2, index1, index2);
            if (result == index1) {
                win[index1 - 1]++;
                lose[index2 - 1]++;
            } else if (result == index2) {
                win[index2 - 1]++;
                lose[index1 - 1]++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (win[i] + lose[i] == 0) {
                printf("-\n");
            } else {
                printf("%.3f\n", win[i] * 1.0 / (win[i] + lose[i]));
            }
        }
        
        printf("\n");
        
    }
}
