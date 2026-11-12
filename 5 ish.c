#include <stdio.h>

int main() {
    int a, b, i;
    int faqat3 = 0, faqat5 = 0, ikkalasi = 0;
    printf("Boshlang'ich son: ");
    scanf("%d", &a);
    printf("Oxirgi son: ");
    scanf("%d", &b);

    printf("3 ga ham, 5 ga ham bo'linadigan sonlar: ");
    for (i = a; i <= b; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            ikkalasi++;
        } else if (i % 3 == 0) {
            faqat3++;
        } else if (i % 5 == 0) {
            faqat5++;
        }
    }
    printf("\n");
    printf("Faqat 3 ga bo'linadiganlar soni: %d\n", faqat3);
    printf("Faqat 5 ga bo'linadiganlar soni: %d\n", faqat5);
    printf("Ikkalasiga ham bo'linadiganlar soni: %d\n", ikkalasi);
    return 0;
}