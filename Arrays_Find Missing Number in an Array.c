#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    long long sum = (long long)N * (N + 1) / 2;
    long long sume = 0;
    
    for(int i = 0; i < N - 1; i++) {
        int num;
        scanf("%d", &num);
        sume += num;
    }
    
    int m = sum - sume;
    printf("%d\n", m);
    
    return 0;
}
