
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long n;
    scanf("%lld", &n);
    if (n < -2147483648LL || n > 2147483647LL) {
        printf("Out of Range\n");
        return 0;
    }
    if ((n & 3) == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }
    return 0;
}
