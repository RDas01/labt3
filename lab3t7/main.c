#include <stdio.h>
#include <stdlib.h>

int main() {
    float b1 = 0.2, b2 = 0.2;
    float xnm2 = -1, xnm1 = 0.5, xn;
    int n = 0;
    float flag1 = xnm2, flag2 = xnm1, flag3;
    printf("%f\n%f\n", xnm2, xnm1);
    while(n<18) {
        xn = b1 * xnm1 + b2 * xnm2;
        printf("%f\n", xn);
        flag3 = xn;
            if((flag1>0) && (flag2<0) && (flag3>0) || (flag1<0) && (flag2>0) && (flag3<0)){
                printf("sequence oscillates\n");
                return 0;
            }
        xnm2 = xnm1;
        xnm1 = xn;
        n++;
    }
    return 0;
}
