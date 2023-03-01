
#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num % 2) {
        case 0:
            result = num + 1;
            printf("%d is even. The nearest odd number is %d\n", num, result);
            break;
        case 1:
            printf("%d is already odd.\n", num);
            break;
    }

    return 0;
}
