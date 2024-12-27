#include <stdio.h>

int main() {
    int tar= 52;  
    int Input;

    printf("Hay doan nguyen ly cho truoc!\n");

    do {
        printf("Nhap mot so: ");
        scanf("%d", &Input);

        if (Input != tar) {
            printf("Sai roi, thu lai nhe!\n");
        }
    } while (Input != tar);

    printf("Chúc mung ban nhap dung so: %d\n", tar);

    return 0;
}

