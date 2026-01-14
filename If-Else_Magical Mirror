#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a>0){
        if ((a % 2 == 0 && a > 10) && (a > 15 && a % 3 == 0) && (a % 7 == 0)) {
            printf("The verdict for the number %d is: SUPERNATURAL\n", a);
        }
        else if ((a % 2 == 0 && a > 10 && a > 15 && a % 3 == 0) ||
                 (a % 2 == 0 && a > 10 && a % 7 == 0) ||
                 (a > 15 && a % 3 == 0 && a % 7 == 0)) {
            printf("The verdict for the number %d is: MIRACULOUS\n", a);
        }
        else if (((a % 2 == 0 && a > 10) + (a > 15 && a % 3 == 0) + (a % 7 == 0)) == 1) {
            printf("The verdict for the number %d is: MAGICAL\n", a);
        }
        else {
            printf("The verdict for the number %d is: NORMAL\n", a);
        }
    }
    else{
        printf("The verdict for the number %d is: INVALID\n", a);
    }
            
    return 0;
}
