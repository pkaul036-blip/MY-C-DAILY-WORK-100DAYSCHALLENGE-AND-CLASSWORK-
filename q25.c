#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter expression (e.g., 4 2 +): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Division by zero error\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("%d\n", num1 % num2);
            } else {
                printf("Division by zero error\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
