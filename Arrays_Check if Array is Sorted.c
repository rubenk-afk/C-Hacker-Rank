#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int flag = 0;
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            flag = 1;
        }
    }
    if(flag){
        printf("Not Sorted");
    } else {
        printf("Sorted");
    }

    return 0;
}
