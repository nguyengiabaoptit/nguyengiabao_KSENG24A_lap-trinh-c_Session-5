#include <stdio.h>

int main() {
	int n; 
    for (n = 1; n <= 9; n++) {
        printf("Bang cua chuong cua  %d la:\n", n);
        int i; 
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("\n"); 
    }

    return 0;
}

