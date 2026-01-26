#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    

    if (a == 0 || b == 0) {
        printf("0");
    } else {
        long long lcm = (long long)a / gcd(a, b) * b;  
        printf("%lld", lcm);
    }
    return 0;
}
