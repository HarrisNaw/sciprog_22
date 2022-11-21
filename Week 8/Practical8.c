#include<stdio.h>
#include<math.h>


/* Recursive Function */
double gcdRec(int a, int b) {
    if (b == 0)
        return a;
        
    return gcdRec(b, a%b);
}

/* Iterative Function */
double gcdItr(int a, int b) {
    
    while (b != 0) {
        int temp = b;
        b = a%b;
        a = temp;
    }

    return a;
}

int main(void) {
    int a, b;

    printf("Enter 1st value: ");
    scanf("%d", &a);
    printf("Enter 2nd value: ");
    scanf("%d", &b);

    if (a < 0 || b < 0) {
        printf("Given values are not positive\n");
        return 1;
    }

    printf("GCD of %d & %d\n", a, b);
    printf("Recursive result: %f\n", gcdRec(a, b));
    printf("Iterative result: %f\n", gcdItr(a, b));

    return 0;
}