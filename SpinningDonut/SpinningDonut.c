#include <stdio.h>
#include <string.h>
#include <math.h>
#include <Windows.h>

int main() {
    float A = 0, B = 0, i, j, z[1760];
    char b[1760];
    for (;;) {
        memset(b, 32, 1760);
        memset(z, 0, 1760);

        for (j = 0; 6.28 > j; j += 0.07) {
            for (i = 0; 6.28 > i; i += 0.02) {
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A),
                    h = d + 2, D = 1 / (c * h * e + f * g + 5), l = cos(i),
                    m = cos(B), n = sin(B),
                    t = c * h * g - f * c;

                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m), o = x + 80 * y;
                if (1760 > o && o >= 0 && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[(int)(8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n))];
                }
            }
        }

        system("cls");
        for (int k = 0; 1760 > k; k++) {
            putchar(k % 80 ? b[k] : 10);
        }
        Sleep(50);
        A += 0.04;
        B += 0.02;
    }
    return 0;
}
