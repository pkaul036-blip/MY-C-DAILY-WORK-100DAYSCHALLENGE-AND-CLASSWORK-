/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/




#include<stdio.h>
int main()
{
    int num, factorial=1;
    printf("enter a number to find out its factorial");
    scanf("%d", &num);
    if (num<0){
        printf("factorial cannot be find out since the number is negative");
    }
    else{
        int i=1;
        while(i<=num){
            factorial *= i;
            i++;
        }
        printf("factorial of %d is %d\n", num, factorial);
    }
    return 0;
}
