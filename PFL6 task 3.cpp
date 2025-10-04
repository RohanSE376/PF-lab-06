#include <stdio.h>
int main() {
    int bal = 50000, w;
    while (bal > 0) {
        printf("Balance: %d\nWithdraw: ", bal);
        scanf("%d", &w);
        if (w > 0 && w <= bal) bal -= w;
        else printf("Invalid! You can withdraw up to %d\n", bal);
    }
    printf("Balance is 0. No more withdrawals.\n");
    return 0;
}

