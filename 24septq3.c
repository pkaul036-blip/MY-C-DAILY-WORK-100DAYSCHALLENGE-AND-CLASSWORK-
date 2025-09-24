#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else {
            special++;
        }
        i++;
    }

    printf("Total Alphabets = %d\n", alphabets);
    printf("Total Digits = %d\n", digits);
    printf("Total Special Characters = %d\n", special);

    return 0;
}
