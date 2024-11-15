
#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 4, 63, 3};
    int arr2[] = {5, 2, 59, 65, 76};

    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);
    int sz3 = sz1 + sz2;

    int arr3[sz3];
    int temp;

    for (int i = 0; i < sz1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < sz2; i++) {
        arr3[sz1 + i] = arr2[i];
    }
    
    for (int i = 0; i < sz3 - 1; i++) {
        for (int j = i + 1; j < sz3; j++) {
            if (arr3[i] > arr3[j]) {
                
                temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    printf("Sorted merged array: ");
    for (int i = 0; i < sz3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
