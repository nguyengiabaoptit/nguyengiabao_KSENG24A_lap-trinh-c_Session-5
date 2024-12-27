#include <stdio.h>

int main() {
    int n;
    int num = 0;
    do {
        printf("Nhap vào mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So vua nhap khong phai la so nguyen duong. Vui long thu lai!\n");
        }
    } while (n <= 0);
    int i;
    for (i = 1; i <= n; i++) {
        num += i;
    }
    printf("Tong vac so tu 1 den %d là: %d\n", n, num);

    return 0;
}

