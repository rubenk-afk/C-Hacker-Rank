#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int asce = 1;  
    int desc = 1; 
    
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            asce = 0;  
        }
        if(a[i] < a[i + 1]) {
            desc = 0; 
        }
    }
    
    if(asce) {
        printf("Ascending\n");
    }
    else if(desc) {
        printf("Descending\n");
    }
    else {
        printf("Not Sorted\n");
    }
    
    return 0;
}
