#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int *allocatearray(int n) {
    int *p;
    p = (int *) malloc(n * sizeof(int));
    if (p == NULL)
        printf("Error in memory allocation\n");
    return p;
}

void fillwithones(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++)
        arr[i] = 1;
}

void printarray(int *arr, int n) {
    int i;
    for (i = 0; i< n; i++)
        printf("a[%d]=%d\n", i, arr[i]);
}

void freeArr(int *arr) {
    free(arr);
}

int main(void)
{
    int length, *a;

    printf("Enter size of array: ");
    scanf("%d", &length);

    a = allocatearray(length);
    fillwithones(a, length);
    printarray(a, length);
    freeArr(a);
    a = NULL;

    return 0;
}