#include <stdio.h>

int main() {
    int n, i;
    scanf("%d %d", &n, &i);

    int num = (n >> i) & 1;
    printf("%d", num);

    return 0;
}
