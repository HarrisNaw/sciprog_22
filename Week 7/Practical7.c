#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n-1);
}

int main(void)
{

    int i, order;
    double e, *terms;

    // User entry for polynomial order
    printf("Enter polynomial order: ");
    if (scanf("%d", &order) != 1) {
        printf("No input from user");
        return 1;
    }

    terms = malloc(order*sizeof(double));

    for (i = 0; i < order; i++) {
        terms[i] = 1.0/(double) fact(i+1);
        printf("e term for order %d is %1.14lf\n", order, terms[i]);
    }

    e = 1.0;
    for (i = 0; i < order; i++)
        e += terms[i];

    free(terms);

    printf("e is estimated as %1.14lf, with difference %1.14lf\n", e, e-exp(1.0));

    return 0;
}
