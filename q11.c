#include <stdio.h>
int main()
{
    int num;
    printf("enter the number to check the number is even or odd : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The given number is even\n", num);
    }
    else if (num % 2 != 0 )
    {
        printf("the given number is odd\n", num);
    }
    else 
    {
        printf("number is odd\n", num);
    }
    return 0; 
}
