#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a integer for a");
    scanf("%d", &a);
    printf("enter a integer for b");
    scanf("%d", &b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);

}
