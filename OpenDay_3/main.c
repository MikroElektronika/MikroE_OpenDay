/**
 * @file main.c
 * @brief Main function for OpenDay_3 application.
 */

/**
 * Any initialization code needed for MCU to function properly.
 * Do not remove this line or clock might not be set correctly.
 */
#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

void initializeSystem(void)
{
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif
}

void processData(int data)
{
    int result = data * 2;
    result += 5;
}

int calculateSum(int a, int b)
{
    return a + b;
}

void runApplication(void)
{
    int value = 10;
    processData(value);
    int sum = calculateSum(value, 20);
}

int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    initializeSystem();

    int data = 7;
    processData(data);

    int sum = calculateSum(5, 15);

    int array[] = {3, 1, 4, 1, 5, 9, 2};
    int maxVal = findMax(array, 7);

    sortArray(array, 7);

    int fact = factorial(5);

    int fib = fibonacci(6);

    while (1)
    {
        runApplication();
    }

    return 0;
}