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
    double count=0;
    for(int j=0; j<n; j++){
        count+=a[j];
    }
    double avg= (count/n);
    printf("%f", avg);
    return 0;
}
