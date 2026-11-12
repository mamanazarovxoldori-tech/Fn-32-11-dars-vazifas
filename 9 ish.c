#include <stdio.h>

int main() {
    int tanlov, bosh = 20, ishlayapti = 1;

    while (ishlayapti) {
        printf("\n1. Avtomobil kiritish\n");
        printf("2. Avtomobil chiqarish\n");
        printf("3. Bo'sh joylarni ko'rish\n");
        printf("4. Dasturdan chiqish\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1:
                if (bosh > 0) {
                    bosh--;
                    printf("Avtomobil kiritildi.\n");
                } else {
                    printf("Bo'sh joy qolmadi!\n");
                }
                break;
            case 2:
                if (bosh < 20) {
                    bosh++;
                    printf("Avtomobil chiqarildi.\n");
                } else {
                    printf("Avtoturargoh bo'sh, chiqaradigan avtomobil yo'q!\n");
                }
                break;
            case 3:
                printf("Bo'sh joylar soni: %d\n", bosh);
                break;
            case 4:
                ishlayapti = 0;
                break;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
    return 0;
}