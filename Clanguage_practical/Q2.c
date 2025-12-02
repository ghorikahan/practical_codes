#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    char ope;
    scanf(" %c", &ope);

    switch (ope)
    {
    case '+':
        printf("Ans is: %d", a + b);
        break;

    case '-':
        printf("Ans is: %d", a - b);
        break;

    case '*':
        printf("Ans is: %d", a * b);
        break;

    case '%':
        printf("Ans is: %d", a % b);
        break;

    case '/':
        if (b != 0)
        {
            printf("Ans is: %.2f", a / b);
        }
        else
        {
            printf("undefined");
        }
        break;

    default:
        printf("Enter valid operator");
        break;
    }

    return 0;
}
