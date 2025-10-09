#include <stdio.h>
#include <stdbool.h>
#include <cstdio.h>

// Simple busy-wait delay function
void delay(unsigned int count)
{
    while(count--) {
        // Do nothing, just waste time
    }
}

// Function to display flag state
void printFlag(bool flag)
{
    if (flag) {
        printf_me("Flag is ON\n");
    } else {
        printf_me("Flag is OFF\n");
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

        printFlag(flag);       // Display flag state in console

        delay(1000000);        // Delay to slow down toggling
    }

    return 0;
}