
#include <stdio.h>

int main() {
    int a, b, c;
    char choice;
    do {
        printf("Enter three integers: ");
        scanf("%d %d %d", &a, &b, &c);
        printf("Choose an option:\n");
        printf("a. Check whether the given set of numbers are lengths of an isosceles triangle.\n");
        printf("b. Check whether the given set of numbers are lengths of sides of a right-angled triangle.\n");
        printf("c. Check whether the given set of numbers are lengths of an equilateral triangle.\n");
        printf("d. Exit.\n");
        printf("Your choice: ");
        scanf(" %c", &choice);
        switch (choice) {
            case 'a':
                if ((a == b) || (b == c) || (a == c)) {
                    printf("%d, %d, %d are lengths of an isosceles triangle.\n", a, b, c);
                } else {
                    printf("%d, %d, %d are not lengths of an isosceles triangle.\n", a, b, c);
                }
                break;
            case 'b':
                if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
                    printf("%d, %d, %d are lengths of a right-angled triangle.\n", a, b, c);
                } else {
                    printf("%d, %d, %d are not lengths of a right-angled triangle.\n", a, b, c);
                }
                break;
            case 'c':
                if ((a == b) && (b == c)) {
                    printf("%d, %d, %d are lengths of an equilateral triangle.\n", a, b, c);
                } else {
                    printf("%d, %d, %d are not lengths of an equilateral triangle.\n", a, b, c);
                }
                break;
            case 'd':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please choose a, b, c, or d.\n");
        }
    } while (choice != 'd');
    return 0;
}
