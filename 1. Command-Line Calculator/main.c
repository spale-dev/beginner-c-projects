#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printQuit()
{
    char quitPrompt[] = " -- (press 'q' to quit)";
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

int getIntInput(const char *prompt, int *out) {
    printf("%s", prompt);

    char buffer[100];
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 0;
    }

    if (buffer[0] == 'q') {
        return -1;
    }

    char *end;
    int val = strtol(buffer, &end, 10);
    if (end == buffer || *end != '\n') {
        printf("Invalid number, please try again.\n");
        return getIntInput(prompt, out);
    }

    *out = val;
    return 1;
}

int getOpInput(const char *prompt, char *op) {
    printf("%s", prompt);

    char buffer[10];
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 0;
    }

    if (buffer[0] == 'q') {
        return -1;
    }

    if (strchr("+-*/", buffer[0]) != NULL) {
        *op = buffer[0];
        return 0;
    }

    printf("Invalid operator, please try again.\n");
    return getOpInput(prompt, op);
}

int quit() {
    printf("Quitting calculator...\n");
    return 0;
}

int main()
{
    printf("Hello Calculator");
    printQuit();

    int num1, num2;
    char op;

    if (getIntInput("Enter an integer number: ", &num1) == -1) {
        return quit();
    }

    while (1)
    {
        if (getOpInput("Enter an operator (+, -, *, /): ", &op) == -1) {
            break;
        }

        if (getIntInput("Enter another integer number: ", &num2) == -1) {
            break;
        }

        eval(&num1, num2, op);
    }

    return quit();
}