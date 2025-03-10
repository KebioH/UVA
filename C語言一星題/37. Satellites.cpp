#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define R 6440

int main()
{
    int s, a;
    char str[4];
    while (scanf("%d%d%s", &s, &a, str) != EOF) {
        double angle;

        if (str[0] == 'd') { //度轉弧度 
            angle = a * PI / 180; //360度 = 2*pi弧度    1度= pi/180
        }
        else {
            angle = a * PI / 10800; //pi/180*60
        }

        double arc = (s + R) * angle;
        double chord = 2 * (s + R) * sin(angle / 2);

        printf("%.6f %.6f\n", arc, chord);
        
    }
}
