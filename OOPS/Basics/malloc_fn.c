#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr = NULL, size = 10;

    // printf("\nEnter the size of the array: ");
    // scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    // arr = (int *)calloc(size, sizeof(int));
    
    // arr;   ~   &arr[0]

    if(arr == NULL) {
        printf("\nMemory allocation failed!");
        return 1;   //abnormal termination
    }

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    // printf("\narr = { ");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
        // printf("%d, ", *(arr+i));
    }
    // printf("\b\b }");

    //release the manually allocated memory 
    free(arr);

    // if(arr == NULL) {
    //     printf("\nMemory Freed!");
    // } else {
    //     printf("\n-> %d, ", arr[0]);
    // }
    

    return 0;
}