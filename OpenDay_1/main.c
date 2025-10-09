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

// Function to display flag state, updated for new branch
void printFlag(bool flag)
{
    if (flag) {
        printf_me("Flag is Activated\n");
    } else {
        printf_me("Flag is Deactivated\n");
    }
}

int main(void)
{
    /* Do not remove this line or clock might not be set correctly. */
    #ifdef PREINIT_SUPPORTED
    preinit();
    #endif

    bool flag = false;

    while (1)
    {
        flag = !flag;           // Toggle flag state
        printFlag(flag);        // Display updated flag state messages
        delay(2000000);         // Increased delay to differentiate from main branch (previous 1000000)
    }

    return 0;
}