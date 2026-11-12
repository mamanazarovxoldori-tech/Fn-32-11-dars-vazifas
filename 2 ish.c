#include <stdio.h>

int main() {
    int i, issiqKun = 0;
    double t;
    for (i = 1; i <= 7; i++) {
        printf("%d-kun harorati: ", i);
        scanf("%lf", &t);
        if (t > 30) {
            printf("Issiq\n");
            issiqKun++;
        } else if (t >= 15) {
            printf("Iliq\n");
        } else {
            printf("Sovuq\n");
        }
    }
    printf("30 dan yuqori kunlar soni: %d\n", issiqKun);
    return 0;
}