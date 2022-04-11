# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define PI 3.14
# define SQUARE(r) r*r

int main() {
    double result = 1 + PI;
    float r = 4;
    printf("%.2f -- %.2f\n",result,SQUARE(r));


    return 0;
}