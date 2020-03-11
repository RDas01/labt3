#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=0, x1, x2;
    float xn, xnm1, k, xnpxnm1 = 0;
    scanf("%f %f", &x1, &x2);
    xn = x2;
    xnm1 = x1;
    xnpxnm1 = x1;
    while(n<100){
        k = xn / xnm1;
        printf("%f\n", xn);
        xnpxnm1 = xnpxnm1 + xn; // sum of all x0,x1,x2...xn
        xnm1 = xn;
        xn = k * xnm1;
        n++;
    }
    if(xnm1>xn){
        printf("converges\n");
    }
    else{
        printf("Diverges\n");
    }
    printf("sum of all values: %f", xnpxnm1);
    return 0;
}
