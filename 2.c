#include <stdio.h>
#include <math.h>

void sort_by_insertion_and_print(int arr[], int n){
    int p, slider, q;
    for (p = 1; p < n; p++){
        slider = arr[p];
        q = p - 1;

        while (q >= 0 && arr[q] > slider){
            arr[q + 1] = arr[q];
            q = q - 1;
        }
        arr[q + 1] = slider;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
        printf("\n");
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
