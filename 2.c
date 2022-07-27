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

void sort_by_selection_and_print(int array[], int n){

    for (int step = 0; step < n - 1; step++){
        int min_idx = step;
        for (int i = step + 1; i < n; i++){

            if (array[i] < array[min_idx]){
                min_idx = i;
            }
        }

        swap(&array[min_idx], &array[step]);
    }

    for (int i = 0; i < n; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort_and_print(int arr[], int n){
    int j;
    for (int i = 0; i < n - 1; i++){

        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
            }
        }    
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
