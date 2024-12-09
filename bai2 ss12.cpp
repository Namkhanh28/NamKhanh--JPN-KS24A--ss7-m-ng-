#include <stdio.h>


int inMang(int arr[], int size) {
    printf("Các phan tu trong mang là: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    
    int array[] = {1, 2, 3, 4, 5,6,7};
    int size = sizeof(array) / sizeof(array[0]);
    inMang(array, size);

    return 0;
}

