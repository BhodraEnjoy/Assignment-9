
#include <stdio.h>

int main() {
    int day;

    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Good morning! It's Monday.\n");
            break;
        case 2:
            printf("Good morning! It's Tuesday.\n");
            break;
        case 3:
            printf("Good morning! It's Wednesday.\n");
            break;
        case 4:
            printf("Good morning! It's Thursday.\n");
            break;
        case 5:
            printf("Good morning! It's Friday.\n");
            break;
        case 6:
            printf("Good morning! It's Saturday.\n");
            break;
        case 7:
            printf("Good morning! It's Sunday.\n");
            break;
        default:
            printf("Invalid day number entered. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
