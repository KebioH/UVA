#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) == 8) {
        double px, py;

        if (x1 == x3 && y1 == y3) {
            // A == C，第四點 P = D + B - A
            px = x4 + x2 - x1;
            py = y4 + y2 - y1;
        }
        else if (x1 == x4 && y1 == y4) {
            // A == D，第四點 P = C + B - A
            px = x3 + x2 - x1;
            py = y3 + y2 - y1;
        }
        else if (x2 == x3 && y2 == y3) {
            // B == C，第四點 P = D + A - B
            px = x4 + x1 - x2;
            py = y4 + y1 - y2;
        }
        else {
            // B == D，第四點 P = C + A - B
            px = x3 + x1 - x2;
            py = y3 + y1 - y2;
        }

        printf("%.3lf %.3lf\n", px, py);
    }
}
