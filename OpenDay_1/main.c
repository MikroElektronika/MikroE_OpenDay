/**
 * @file main.c
 * @brief Main function for OpenDay_1 application.
 *
 * This example demonstrates a simple hardware-agnostic task:
 * toggling a software flag every iteration with a delay loop.
 * It serves as a template for adding application logic in pure C.
 */

/**
 * Any initialization code needed for MCU to function properly.
 * Do not remove this line or clock might not be set correctly.
 */
#ifdef PREINIT_SUPPORTED
#include "preinit.h"
#endif

#include <stdbool.h>  // For bool type

/**
 * @brief Simple software delay loop.
 * 
 * This function creates a crude delay by looping a fixed number of times.
 * It is hardware-agnostic and does not rely on timers or interrupts.
 * 
 * @param count Number of iterations to delay.
 */
static void delay(volatile unsigned int count)
{
    while (count--)
    {
        // Prevent optimization by using a volatile empty statement
        volatile int dummy = 0;
        (void)dummy;
    }
}

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    bool flag = false;

    /* Replace with your application code */
    while (1)
    {
        flag = !flag;          // Toggle flag state

        /* 
         * Here you could add code to use the flag, e.g., 
         * update a variable, trigger an event, or call a function.
         */

        delay(1000000);        // Delay to slow down toggling
    }

    return 0;
}