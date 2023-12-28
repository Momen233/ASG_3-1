#include <stdio.h>
#include <stdlib.h>
void call (void);
int main()
{
    call();
    return 0;
}
void call (void)
{
    int x,y,z;
    printf("Enter Frist Number : ");
    scanf("%d",&x);

    printf("Enter Second Number : ");
    scanf("%d",&y);

    printf("Before swapping :\n");
    printf("x=%d\t",x);
    printf("y=%d\n",y);

    z=x;
    x=y;
    y=z;

    printf("After swapping :\n");
    printf("x=%d\t",x);
    printf("y=%d\n",y);
}
