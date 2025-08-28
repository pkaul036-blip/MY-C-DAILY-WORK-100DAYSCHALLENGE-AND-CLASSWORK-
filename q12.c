#include<stdio.h>

int main()
{
    int num;
    printf("enter the number to check the number is postive or negative : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("The given number is negative\n", num);
    }
    else if (num == 0)
    {
        printf("the given number is Zero\n", num);
    }
    else 
    {
        printf("the given number is positive\n", num);
    }
    return 0; 
}
