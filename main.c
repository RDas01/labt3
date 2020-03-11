#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, x1, x2;
    float xn, xnm1, k;
    scanf("%d %d", &x1, &x2);
    xn = x2;
    xnm1 = x1;
    while(n<10){
        k = xn / xnm1;
        printf("%f\n", xn);
        xnm1 = xn;
        xn = k * xnm1;
        n++;
    }
    return 0;
}
