#include<stdio.h>
int main()
{
    int a,b,c,d ;
    printf("Enter Seat type\n Premium seats - Rs 200\n Standard seats- Rs150\nEconomy Seats-Rs100\n exit");
    scanf("%c",&a);
    printf("Enter number of seats");
    scanf("%d",&b);
    if(a=1)
    {
        printf("premium seats");
        c=b*200;
    }
    else if(a=2)
    {
        printf("standard seats");
        c=b*150;
    }
    else if(a=3)
    {
        printf("Economy seats");
        c=b*100;
    }
    else 
    {printf("Exit");}
    if(b>=5)
    {
     d=c*(5/100);   
    }

}
