#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, x1, x2;
    float xn, xnm1, k, xnpxnm1 = 0;
    scanf("%d %d", &x1, &x2);
    xn = x2;
    xnm1 = x1;
    xnpxnm1 = x1;
    while(n<10){
        k = xn / xnm1;
        printf("%f\n", xn);
        xnpxnm1 = xnpxnm1 + xn; // sum of all x0,x1,x2...xn
        xnm1 = xn;
        xn = k * xnm1;
        n++;
    }
    printf("sum of all values: %f", xnpxnm1);
    return 0;
}
