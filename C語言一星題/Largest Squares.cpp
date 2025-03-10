#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, n, q;
        scanf("%d%d%d", &m, &n, &q);
        char matrix[100][100];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf(" %c", &matrix[i][j]); //空白好像很好用
            }
        }

        printf("%d %d %d\n", m, n, q);
        while (q--) {
            int r, c;
            scanf("%d%d", &r, &c);
            
            int d = 1, size = 1;
            while (r - d >= 0 && r + d < m && c - d >= 0 && c + d < n) { //這招蠻好用的 學起來
                bool valid = true;
                for (int i = c - d; i <= c + d; i++) {
                    if (matrix[r - d][i] != matrix[r][c] || matrix[r + d][i] != matrix[r][c]) { //檢查最外圍
                        valid = false;
                        break;
                    }
                }
                for (int i = r - d; i <= r + d; i++) {
                    if (matrix[i][c - d] != matrix[r][c] || matrix[i][c + d] != matrix[r][c]) {
                        valid = false;
                        break;
                    }
                }

                if (!valid) break;

                size += 2;
                d++;
            }
            
            printf("%d\n", size);
        }
    }
}
