#include <stdio.h>
#include <stdlib.h>

int main() {
    float b1 = 0.2, b2 = 0.8;
    float xnm2 = 1, xnm1 = 0.5, xn;
    int n = 0;
    printf("%f\n%f\n", xnm2, xnm1);
    while(n<8) {
        xn = b1 * xnm1 + b2 * xnm2;
        printf("%f\n", xn);
        xnm2 = xnm1;
        xnm1 = xn;
        n++;
    }
    return 0;
}
