#include<stdio.h>
#include<math.h>

double arctanh1(double x, double delta) {
    double arcTan = 0;
    double elm, val;

    int n = 0;

    do {
        val = 2*n+1;
        elm = pow(x, val)/val;
        arcTan += elm;
        n++;
    } while(fabs(elm) >= delta);

    return arcTan;
}

double arctanh2(double x) {
    return(log(1+x)-log(1-x)/2);
}

int main(void)
{

    double delta, x;
    printf("Enter the precision for Maclaurin Series: ");
    scanf("%lf", &delta);

    int length = 1000, i;
    double tan1[length]; // Store the result of arctanh1 for each x
    double tan2[length]; // Store the result of arctanh2 for each x


    x = -0.9;

    // for loop to fill values of tan1 and tan2
    for (i = 0; i < length && x <= 0.9; i++, x += 0.1) {
        tan1[i] = arctanh1(x, delta);
        tan2[i] = arctanh2(x);

        printf("The difference at x = %lf between them is %.10lf\n", x, fabs(tan1[i]-tan2[i]));
    }
    return 0;
}
