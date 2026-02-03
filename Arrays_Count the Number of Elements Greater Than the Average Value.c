#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    int n;
    scanf("%d", &n);
    double sum = 0;  
    int a[n];
    double m=n;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    double avg = sum / m;
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] > avg) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
