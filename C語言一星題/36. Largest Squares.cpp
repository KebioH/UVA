#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int m, n, q;
		scanf("%d%d%d", &m, &n, &q);

		char arr[110][110];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				scanf(" %c", &arr[i][j]); //scanf會讀取\n 所以要在%c前面加空白鍵
			}
		}

		printf("%d %d %d\n", m, n, q);
		while (q--) {
			int r, c;
			scanf("%d%d", &r, &c);

			int d = 1, l = 1;
			while (r - d >= 0 && r + d < m && c - d >= 0 && c + d < n) { //記得檢查條件
				for (int i = r - d; i <= r + d; i++) { //跟minesweeper一樣的判斷方法
					for (int j = c - d; j <= c + d; j++) {
						if (arr[i][j] != arr[r][c]) {
							goto output;
						}
					}
				}
			
				d++;
				l += 2;
			}

		output:;
			printf("%d\n", l);
		}
	}

}
