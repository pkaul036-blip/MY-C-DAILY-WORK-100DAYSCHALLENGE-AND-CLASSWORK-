#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("enter temperature in celcius: ");
    scanf("%f", &celsius);
    fahrenheit = 32 + (1.8 * celsius);
    printf("temperature in fahrehiet is %.3f", fahrenheit);
    return 0;
}
