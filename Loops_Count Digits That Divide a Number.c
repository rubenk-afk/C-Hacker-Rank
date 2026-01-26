#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    scanf("%d", &num);
    
    int original = num;  // Keep original for divisibility check
    int count = 0;
    
    while (num > 0) {
        int digit = num % 10;
        num /= 10;
        
        if (original % digit == 0) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}
