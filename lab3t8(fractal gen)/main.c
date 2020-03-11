#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = -2, y = 1;
    while(y > -1){
        x = -2;
        while(x < 2){
            //start of mandel
            float zx, zy, zz;
            zx = x*x - y*y + -2;
            zy = 2*x*y + 1;
            zz = sqrt(zx*zx + zy*zy);
            //end of mandel set
            // Re-initialise the Mandelbrot iterator test variables
            // Test if the point (x,y) is inside the Mandelbrot set
            if(zx*zx + zy*zy <= 4){ // (x,y) is inside the set
                printf("#");
            }
            else{
                printf(" ");
            }
            x = x + 0.5;
        }
        printf("\n");
        y = y - 0.5;
    }
    return 0;
}
