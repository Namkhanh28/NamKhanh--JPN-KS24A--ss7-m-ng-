#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2, tong;
 
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    tong = tinhTong(so1, so2);
    printf("T?ng c?a %d v� %d l� %d\n", so1, so2, tong);

    return 0;
}

