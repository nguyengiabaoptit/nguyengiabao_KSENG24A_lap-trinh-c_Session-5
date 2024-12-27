#include <stdio.h>

int main() {
    int n;
    do {
        printf("moi ban nhap so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("So khong hop le vui long nhap lai.\n");
        }
    } while (n < 1 || n > 10);
    printf("Bang cua chuong cua %d:\n", n);
    int i; 
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

