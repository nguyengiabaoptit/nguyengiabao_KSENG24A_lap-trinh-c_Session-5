#include <stdio.h>

int main() {
    int chose;
    double num1, num2;
    printf("Nhap vao so thu nhat: ");
    scanf("%lf", &num1);
    printf("Nhap vao so thu hai: ");
    scanf("%lf", &num2);

    do {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("vui long lua chon: ");
        scanf("%d", &chose);
        switch (chose) {
            case 1:
                printf("Tong cua %.2lf và %.2lf la: %.2lf\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2lf và %.2lf la: %.2lf\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich cua %.2lf và %.2lf la: %.2lf\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2lf và %.2lf la: %.2lf\n", num1, num2, num1 / num2);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long thu lai.\n");
        }
    } while (chose != 5);

    return 0;
}

