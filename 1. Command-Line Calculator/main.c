#include <stdio.h>

void printQuit()
{
    char quitPrompt[] = "-- (press 'q' to quit)";
    printf("%s\n", quitPrompt);
}

void eval(int *num1, int num2, char op)
{
    switch (op)
    {
    case '+':
        *num1 += num2;
        break;
    case '-':
        *num1 -= num2;
        break;
    case '*':
        *num1 *= num2;
        break;
    case '/':
        *num1 /= num2;
        break;
    default:
        printf("No supported operator was received. Try again.\n");
        return;
    }

    printf("Result: ");
    printf("%d\n", *num1);
}

int main()
{
    printf("Hello Calculator");
    // printQuit(); -- TODO

    int num1, num2;
    char op;

    printf("Enter an integer number: ");
    scanf("%d", &num1);

    while (1)
    {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter another integer number: ");
        scanf("%d", &num2);

        eval(&num1, num2, op);
    }

    return 0;
}