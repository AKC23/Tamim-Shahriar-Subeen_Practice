#include <stdio.h>
int main()
{
    double num1, num2;
    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("Please enter another number: ");
    scanf("%lf", &num2);
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    printf("%d - %d = %d\n", num1, num2, num1-num2);
    printf("%d * %d = %d\n", num1, num2, num1*num2);
    printf("%d / %d = %d\n", num1, num2, num1+num2);

    return 0;

}
