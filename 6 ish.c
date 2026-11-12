#include <stdio.h>

int main() {
    int tanlov, miqdor, ishlayapti = 1;
    long hisob = 0;

    while (ishlayapti) {
        printf("\n1. Olma - 5000 so'm\n");
        printf("2. Banan - 12000 so'm\n");
        printf("3. Apelsin - 10000 so'm\n");
        printf("4. Hisobni ko'rish\n");
        printf("5. Xaridni yakunlash\n");
        printf("Tanlang: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1:
            case 2:
            case 3:
                printf("Miqdorini kiriting: ");
                scanf("%d", &miqdor);
                if (miqdor <= 0) {
                    printf("Miqdor noto'g'ri!\n");
                    break;
                }
                if (tanlov == 1) hisob += 5000L * miqdor;
                else if (tanlov == 2) hisob += 12000L * miqdor;
                else hisob += 10000L * miqdor;
                printf("Qo'shildi.\n");
                break;
            case 4:
                printf("Joriy hisob: %ld so'm\n", hisob);
                break;
            case 5:
                printf("Yakuniy hisob: %ld so'm\n", hisob);
                ishlayapti = 0;
                break;
            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
    return 0;
}