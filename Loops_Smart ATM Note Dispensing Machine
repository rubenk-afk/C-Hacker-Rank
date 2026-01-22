#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int amt;
    scanf("%d", &amt);
    
    if(amt <= 0) {
        printf("Invalid amount\n");  
        return 0;
    }
    
    int x = amt / 500;
    int remain = amt % 500;        
    
    int y = remain / 200;          
    remain = remain % 200;         
    
    int z = remain / 100;          
    
    printf("500-rupee notes: %d\n", x);
    printf("200-rupee notes: %d\n", y);
    printf("100-rupee notes: %d\n", z);
    
    return 0;
}
