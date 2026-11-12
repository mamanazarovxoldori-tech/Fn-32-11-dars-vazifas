#include <stdio.h>

int main() {
    int n, raqam, yigindi = 0;
    printf("Musbat son kiriting: ");
    scanf("%d", &n);
    while (n > 0) {
        raqam = n % 10;
        yigindi = yigindi + raqam;
        n = n / 10;
    }
    printf("Raqamlar yig'indisi: %d\n", yigindi);
    return 0;
}