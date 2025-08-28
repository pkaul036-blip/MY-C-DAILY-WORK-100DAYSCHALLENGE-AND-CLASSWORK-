#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a integer for a");
    scanf("%d", &a);
    printf("enter a integer for b");
    scanf("%d", &b);
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf("%d %d", a, b);
    return 0 ;

}
   
