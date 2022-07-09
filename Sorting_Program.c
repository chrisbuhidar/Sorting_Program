#include <stdio.h>

int unsorted_array[5];
int size = sizeof(unsorted_array) / sizeof(unsorted_array[0]);

int main(){

    for (int i =0; i < size; i++){
        printf("Input Number: ");
        scanf("%d",&unsorted_array[i]);
    }

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