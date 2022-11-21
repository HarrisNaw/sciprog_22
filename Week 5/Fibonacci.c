#include<stdio.h>
#include<math.h>

// Recursive function to calculate fibonacci.
long fib(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;
    return fib(x-1) + fib(x-2);
}

int main(void)
{
    int n;
    printf("Enter Value: ");
    scanf("%d", &n);
    long ans = fib(n);
    printf("Fibonacci of %d is %lu\n", n, ans);
    return 0;
}