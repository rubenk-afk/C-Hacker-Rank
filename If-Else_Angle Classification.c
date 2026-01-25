#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = n % 360; 
   if (n==0)
   {
       printf("Acute Angle");
   }
    else if (x > 0 && x < 90) {
        printf("Acute Angle");
    } else if (x == 90) {
        printf("Right Angle");
    } else if (x > 90 && x < 180) {
        printf("Obtuse Angle");
    } else if (x == 180) {
        printf("Straight Angle");
    } else if (x > 180 && x <= 360) {
        printf("Reflex Angle");
    } else {  
        printf("Full Rotation");
    }
    return 0;
}
