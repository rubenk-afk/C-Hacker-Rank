#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

float discounted(float price, float percent) {
    float discountAmount = (price * percent) / 100;
    float finalPrice = price - discountAmount;
    return finalPrice;
}
int main() {
    float price, percent;
    scanf("%f %f", &price, &percent);
    float result = discounted(price, percent);
    printf("The final price is: %f\n", result);
    
    return 0;
}
