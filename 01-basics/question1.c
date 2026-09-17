// write a program to calculate the area of a square (side is given)

#include <stdio.h>
int main()
{
    int side;
    printf("enter side");
    scanf("%d", &side);

    printf("area is : %d", side * side);
    return 0;
}