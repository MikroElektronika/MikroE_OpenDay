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

// Example: Temperature conversion functions
float celsiusToFahrenheit(float c)
{
    return (c * 9.0f / 5.0f) + 32.0f;
}

float fahrenheitToCelsius(float f)
{
    return (f - 32.0f) * 5.0f / 9.0f;
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

        // Demonstrate temperature conversion
        float tempC = 25.0f;
        float tempF = celsiusToFahrenheit(tempC);
        printf_me("Temperature: %.2f°C = %.2f°F\n", tempC, tempF);
        printf_me("Temperature: %.2f°F = %.2f°C\n", tempF, fahrenheitToCelsius(tempF));

        delay(2000000);
    }
    return 0;
}