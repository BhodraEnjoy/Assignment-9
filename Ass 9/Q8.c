#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num >= 0) {
        case 1:
            result = -num;
            printf("The negative of %d is %d\n", num, result);
            break;
        case 0:
            result = -num;
            printf("The positive of %d is %d\n", num, result);
            break;
    }

    return 0;
}
