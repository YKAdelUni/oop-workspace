#include <iostream>

int median_array(int array[], int n){
    if (n % 2 == 0 || n < 1){
        return 0;
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    return array[n/2];
}