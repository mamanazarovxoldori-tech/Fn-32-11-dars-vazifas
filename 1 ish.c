#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 15; i++) {
        if (i == 5)
            printf("Besh - %d\n", i * i);
        else
            printf("%d - %d\n", i, i * i);
    }
    return 0;
}