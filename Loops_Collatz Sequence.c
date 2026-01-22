#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i >= 1; ++i) {
        if (i == 1) {
            printf("%d", n);
        } else if (n % 2 == 0) {
            n = n / 2;
            printf(" -> %d", n);
        } else {
            n = 3 * n + 1;
            printf(" -> %d", n);
        }
        if (n == 1)
            break;
    }
    return 0;
}
