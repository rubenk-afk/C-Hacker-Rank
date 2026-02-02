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
        scanf("%d ",&a[i]);
    }
    int num;
    scanf("%d", &num);
    for(int i=n; i>-1; i--){
        if(num==a[i]){
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
