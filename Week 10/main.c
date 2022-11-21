#include <stdio.h>
#include <stdlib.h>


void tower_of_hanoi(int n, int src, int dest, int aux) {
    if (n == 1) 
        printf("Move disc from %d to %d\n", src, dest);
    else {
        tower_of_hanoi(n-1, src, aux, dest);
        printf("Move disc from %d to %d\n", src, dest);
        tower_of_hanoi(n-1, aux, dest, src);
    }
}

int main(void) {
    int n = 3;
    printf("Solution for %d discs\n", n);
    tower_of_hanoi(n, 1, 3, 2);
    return 0;
}