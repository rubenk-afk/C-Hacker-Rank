#include <stdio.h>

int main() {
    int h, t;
    float c;
    scanf("%d %f %d", &h, &c, &t);  
    if(h > 50 && c < 0.7 && t > 5600) {  
        printf("The grade of the steel is: 10\nAll of the conditions met.\n");
    } else if(h > 50 && c < 0.7) {
        printf("The grade of the steel is: 9\nTwo conditions met.\n");
    } else if(c < 0.7 && t > 5600) {
        printf("The grade of the steel is: 8\nTwo conditions met.\n");
    } else if(h > 50 && t > 5600) {
        printf("The grade of the steel is: 7\nTwo conditions met.\n");
    } else if(h > 50 || c < 0.7 || t > 5600) {  
        printf("The grade of the steel is: 6\nOnly one condition met.\n");
    } else {
        printf("The grade of the steel is: 5\nNone of the conditions met.\n");
    }
    return 0;
}
