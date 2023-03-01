
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, root1, root2, realPart, imagPart, discriminant;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and distinct: %.2f and %.2f", root1, root2);
            break;

        case 0:
            switch (discriminant < 0) {
                case 1:
                    realPart = -b / (2 * a);
                    imagPart = sqrt(-discriminant) / (2 * a);
                    printf("The roots are complex: %.2f + %.2fi and %.2f - %.2fi", realPart, imagPart, realPart, imagPart);
                    break;

                case 0:
                    root1 = root2 = -b / (2 * a);
                    printf("The root is real and equal: %.2f", root1);
                    break;
            }
            break;
    }

    return 0;
}
