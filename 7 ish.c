#include <stdio.h>

int main() {
    int n, raqam;
    int soni = 0, juft = 0, toq = 0, yigindi = 0;
    printf("Musbat butun son kiriting: ");
    scanf("%d", &n);
    while (n > 0) {
        raqam = n % 10;
        soni++;
        yigindi += raqam;
        if (raqam % 2 == 0)
            juft++;
        else
            toq++;
        n = n / 10;
    }
    printf("Raqamlar soni: %d\n", soni);
    printf("Juft raqamlar: %d ta\n", juft);
    printf("Toq raqamlar: %d ta\n", toq);
    printf("Raqamlar yig'indisi: %d\n", yigindi);
    return 0;
}