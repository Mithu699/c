#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("The grade is A");
    else if (marks > 60)
        printf("The grade is B");
    else if (marks > 50)
        printf("The grade is C");
    else
        printf("The grade is D");

    return 0;
}