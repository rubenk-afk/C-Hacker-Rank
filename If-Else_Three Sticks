#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Lengths: [%d, %d, %d]\n", a, b, c);
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Type: Invalid\nCannot form a valid shape.\n");
    } else if (a == b && b == c) {
        printf("Type: Equilateral\nAll sides are of the same length.\n");
    } else if (a == b || a == c || b == c) {
        printf("Type: Isosceles\nExactly two sides are equal.\n");
    } else {
        printf("Type: Scalene\nAll sides are of different lengths.\n");
    }
    return 0;
}
