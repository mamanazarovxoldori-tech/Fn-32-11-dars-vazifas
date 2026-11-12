#include <stdio.h>

int main() {
    int tanlov, x, ishlayapti = 1;
    int soni = 0, yigindi = 0, eng_katta = 0, eng_kichik = 0;

    while (ishlayapti) {
        printf("\n1. Son kiritish\n");
        printf("2. Kiritilgan sonlar sonini ko'rish\n");
        printf("3. Sonlar yig'indisini ko'rish\n");
        printf("4. Eng katta sonni ko'rish\n");
        printf("5. Eng kichik sonni ko'rish\n");
        printf("6. Dasturdan chiqish\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1:
                printf("Sonni kiriting: ");
                scanf("%d", &x);
                if (soni == 0) {
                    eng_katta = x;
                    eng_kichik = x;
                } else {
                    if (x > eng_katta) eng_katta = x;
                    if (x < eng_kichik) eng_kichik = x;
                }
                soni++;
                yigindi += x;
                break;
            case 2:
                if (soni == 0) printf("Hali birorta son kiritilmagan!\n");
                else printf("Sonlar soni: %d\n", soni);
                break;
            case 3:
                if (soni == 0) printf("Hali birorta son kiritilmagan!\n");
                else printf("Yig'indi: %d\n", yigindi);
                break;
            case 4:
                if (soni == 0) printf("Hali birorta son kiritilmagan!\n");
                else printf("Eng katta son: %d\n", eng_katta);
                break;
            case 5:
                if (soni == 0) printf("Hali birorta son kiritilmagan!\n");
                else printf("Eng kichik son: %d\n", eng_kichik);
                break;
            case 6:
                ishlayapti = 0;
                break;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
    return 0;
}