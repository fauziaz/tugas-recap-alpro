#include <stdio.h>

int main() {
    int jt, n, tp = 0;

    scanf("%d", &jt);

    if (jt <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }

    for (int i = 0; i < jt; i++) {
        scanf("%d", &n);
        tp += n;
    }

    printf("Total pengeluaran hari ini: %d\n", tp);

    return 0;
}