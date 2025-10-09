/**
 * @file main.c
 * @brief Main function for OpenDay_2 application.
 */
/**
 * Any initialization code needed for MCU to function properly.
 * Do not remove this line or clock might not be set correctly.
 */
#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

// Simple function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Simple function to subtract two integers (intentional mistake: returns sum instead of difference)
int subtract(int a, int b)
{
    return a + b;
}

// Simple function to multiply two integers (intentional mistake: missing return statement)
int multiply(int a, int b)
{
    int result = a * b;
}

// Simple function to divide two integers (intentional mistake: no check for division by zero)
int divide(int a, int b)
{
    return a / b;
}

// Function to calculate factorial (intentional mistake: no base case for 0 - possible infinite recursion)
int factorial(int n)
{
    if (n < 0)
        return -1;
    return n * factorial(n - 1);
}

// Function: check if a number is prime (intentional mistake: loop condition off by one)
int is_prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function: find greatest common divisor (GCD) using Euclidean algorithm (intentional mistake: wrong variable updated)
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    // Example usage of functions (not used further)
    int x = 10, y = 5;
    int sum = add(x, y);
    int diff = subtract(x, y);
    int prod = multiply(x, y);
    int quot = divide(x, y);
    int fact = factorial(5);
    int prime = is_prime(17);
    int common_div = gcd(48, 18);

    /* Replace with your application code */
    while (1)
    {
    }
    return 0;
}