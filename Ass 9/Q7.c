#include <stdio.h>

int main() {
    int unit;
    float bill;

    printf("Enter the electricity units consumed: ");
    scanf("%d", &unit);

    switch(unit / 100) {
        case 0:
            bill = unit * 0.50;
            break;
        case 1:
            bill = 50 + ((unit - 100) * 0.75);
            break;
        case 2:
            bill = 100 + ((unit - 200) * 1.20);
            break;
        case 3:
            bill = 220 + ((unit - 300) * 1.50);
            break;
        default:
            bill = 400 + ((unit - 400) * 1.75);
            break;
    }

    printf("Total electricity bill = Rs. %.2f\n", bill);

    return 0;
}

