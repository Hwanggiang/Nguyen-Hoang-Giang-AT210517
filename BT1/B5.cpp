#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Nhap cac he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh co nghiem duy nhat: %.2f\n", x);
        }
    } else {

        float denta = b * b - 4 * a * c;

        if (denta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (denta == 0) {
            float x = -b / (2.0 * a);
            printf("Phuong trinh co nghiem kep: %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(denta)) / (2.0 * a);
            float x2 = (-b - sqrt(denta)) / (2.0 * a);
            printf("Phuong trinh co 2 nghiem phan biet: %.2f va %.2f\n", x1, x2);
        }
    }

    return 0;
}
