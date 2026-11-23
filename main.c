#include <stdio.h>

int main() {
    float a, b, tich;

    printf("Nhap so thu nhat: ");
    scanf("%f", &a);

    printf("Nhap so thu hai: ");
    scanf("%f", &b);

    tich = a * b;

    printf("Tich cua hai so la: %.2f", tich);

    return 0;
}
