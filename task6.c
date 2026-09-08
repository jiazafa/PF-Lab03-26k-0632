#include <stdio.h>
int main() {
    int month, year;
    printf("enter month (1-12):");
    scanf("%d", &month);
    printf("enter year: ");
    scanf("%d", &year);
    switch (month) {
        // months with 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: 
        printf("%d hs 31days\n",month);
        break;
        // february
        case 2:
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("february %d has 28 days \n",year) ;
        }
        break;
        // months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
        printf("%d has 30 days\n",month);
        break;
        // invalid month
        default:
        printf("invalid moth number\n");
    }
    return 0;
}