#include<stdio.h>
#include<math.h>

float f(float x)
{
    return(1/(1+pow(x,2)));
}
int main(void)
{
    /* N = Subinterval */
    int N, i;
    float x0,xn, a, b, delta, ans, counter;

    /* 
    *   x0 = a = 0
    *   xn = b = pi/3
    */
    x0 = a = 0;
    xn = b = M_PI/3;

    N = 12;

    /* delta = (b-a)/N */
    delta = (b-a)/N;

    /* first intreval */
    counter = delta;

    ans = tan(x0)+tan(xn);

    /* loop from 1 to N-1 */
    for (i = 1; i < N; i++) {
        ans += 2*tan(counter);
        counter += delta;
    }

    ans = (delta/2)*ans;
    printf("Trapezoidal result: %f\n", ans);
    printf("log(2) result: %f\n", log(2));
    return 0;
}