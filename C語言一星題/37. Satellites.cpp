#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//弧長 = R*theta
//弦長 = 2*R*sin(theta/2)

#define R 6440
#define Pi 3.14159265358979323846

int main() {
    double s, a;
    char str[10];
    while (scanf("%lf%lf%s", &s, &a, str) != EOF) {
        
        double r = s + R, angle;
        if (str[0] == 'd') {
            angle = a * Pi / 180;
        }
        else {
            angle = a * Pi / (180*60);
        }

        double arc = r * angle;
        double chord = 2 * r * sin(angle / 2);
    
        printf("%.6f %.6f\n", arc, chord);
    }
}
