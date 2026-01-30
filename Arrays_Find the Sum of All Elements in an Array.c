#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    long long count=0;
    for(int j=0; j<n; j++){
        count=count+a[j];
    }
    printf("%lld", count);
    return 0;
}


