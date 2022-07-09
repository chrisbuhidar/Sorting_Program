#include <stdio.h>



int main(){
    int size;
    printf("Size of Array: ");
    scanf("%d", &size);

    int unsorted_array[size];

    for (int i = 0; i < size; i++){
        printf("Input Number: ");
        scanf("%d",&unsorted_array[i]);
    }
    printf("Unsorted Array: ");
    for (int i = 0; i < size; i++){
        if (i < size -1 ){
            printf("%d,", unsorted_array[i]);
        }
        else{
            printf("%d\n", unsorted_array[i]);
        }
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (unsorted_array[j] > unsorted_array[i]){
                int hold_over = unsorted_array[i];
                unsorted_array[i] = unsorted_array[j];
                unsorted_array[j] = hold_over;
            }
        }
    }
    printf("Sorted Array: ");
    for (int i = 0; i < size; i++){
        if (i < size -1 ){
            printf("%d,", unsorted_array[i]);
        }
        else{
            printf("%d\n", unsorted_array[i]);
        }
    }

    return 0;
}