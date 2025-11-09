#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    int discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        float root = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", root);
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}
