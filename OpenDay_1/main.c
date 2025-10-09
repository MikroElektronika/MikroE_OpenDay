#include <stdio.h>
#include <stdbool.h>

// Simple busy-wait delay function
void delay(unsigned int count)
{
    while(count--) {
        // Do nothing, just waste time
    }
}

// Function to display flag state, updated for new branch
void printFlag(bool flag)
{
    if (flag) {
        printf_me("Flag is Activated\n");
    } else {
        printf_me("Flag is Deactivated\n");
    }
}

// Basic calculator function for two integers and an operator
int calculator(int a, int b, char op)
{
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b != 0)
                return a / b;
            else {
                printf_me("Error: Division by zero!\n");
                return 0;
            }
        default:
            printf_me("Error: Invalid operator '%c'\n", op);
            return 0;
    }
}

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    bool flag = false;
    int a = 10, b = 3;

    while (1)
    {
        flag = !flag;           // Toggle flag state
        printFlag(flag);        // Display updated flag state messages

        // Demonstrate calculator operations
        printf_me("Calc Add: %d + %d = %d\n", a, b, calculator(a, b, '+'));
        printf_me("Calc Subtract: %d - %d = %d\n", a, b, calculator(a, b, '-'));
        printf_me("Calc Multiply: %d * %d = %d\n", a, b, calculator(a, b, '*'));
        printf_me("Calc Divide: %d / %d = %d\n", a, b, calculator(a, b, '/'));

        delay(2000000);
    }

    return 0;
}