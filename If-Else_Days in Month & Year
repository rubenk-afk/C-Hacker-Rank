#include <stdio.h>

int main() {
    int month, year;
    
    scanf("%d", &month);
    scanf("%d", &year);
    
    int invalid_month = (month < 1 || month > 12);
    int invalid_year = (year < 1);
    if (invalid_month) {
        printf("Invalid Month\n");
    }if (invalid_year) {
        printf("Invalid Year\n");
    }if (!invalid_month && !invalid_year) {

        int days;
        switch (month) {
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    days = 29;
                } else {
                    days = 28;
                }
                break;
            case 4: case 6: case 9: case 11:
                days = 30;
                break;
            default:
                days = 31;
                break;
        }
        printf("%d\n", days);
    }
    
    return 0;
}
