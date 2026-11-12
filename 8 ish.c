#include <stdio.h>

int main() {
    int i, ball;
    int alo = 0, yaxshi = 0, qoniqarli = 0, qoniqarsiz = 0;

    for (i = 1; i <= 15; i++) {
        printf("%d-o'quvchi natijasi: ", i);
        scanf("%d", &ball);
        if (ball < 0 || ball > 100) {
            printf("Noto'g'ri baho, hisobga olinmaydi.\n");
            continue;
        }
        if (ball >= 90) {
            printf("A'lo\n");
            alo++;
        } else if (ball >= 75) {
            printf("Yaxshi\n");
            yaxshi++;
        } else if (ball >= 60) {
            printf("Qoniqarli\n");
            qoniqarli++;
        } else {
            printf("Qoniqarsiz\n");
            qoniqarsiz++;
        }
    }
    printf("\nA'lo: %d ta\n", alo);
    printf("Yaxshi: %d ta\n", yaxshi);
    printf("Qoniqarli: %d ta\n", qoniqarli);
    printf("Qoniqarsiz: %d ta\n", qoniqarsiz);
    return 0;
}