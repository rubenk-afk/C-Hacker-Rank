#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    
    printf("Binary equivalent of %d: ", N);
    if (N == 0) {
        printf("0");
    } else {
        int highest_bit = (int)floor(log2(N));
        for (int i = highest_bit; i >= 0; i--) {
            int bit = (N >> i) & 1;
            printf("%d", bit);
        }
    }
    printf("\n");
    return 0;
}
