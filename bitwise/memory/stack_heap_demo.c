#include <stdio.h>
#include <stdlib.h>

int global_var = 10;

int main() {
    int local_var = 20;
    int *heap_var = (int *)malloc(sizeof(int));

    *heap_var = 30;

    printf("Global: %d\n", global_var);
    printf("Local : %d\n", local_var);
    printf("Heap  : %d\n", *heap_var);

    free(heap_var);
    return 0;
}
