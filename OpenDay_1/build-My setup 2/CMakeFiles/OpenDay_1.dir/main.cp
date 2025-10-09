#line 1 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
#line 15 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
#line 1 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/.meproject/setup/Debug/include/core/preinit.h"
#line 51 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/.meproject/setup/Debug/include/core/preinit.h"
#line 1 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/stdint.h"




typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;


typedef signed char int_fast8_t;
typedef signed int int_fast16_t;
typedef signed long int int_fast32_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;


typedef signed int intptr_t;
typedef unsigned int uintptr_t;


typedef signed long int intmax_t;
typedef unsigned long int uintmax_t;
#line 52 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/.meproject/setup/Debug/include/core/preinit.h"
#line 1 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/stdbool.h"



typedef char _Bool;
#line 53 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/.meproject/setup/Debug/include/core/preinit.h"
#line 66 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/.meproject/setup/Debug/include/core/preinit.h"
void preinit(void);
#line 16 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
#line 18 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
#line 1 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/stdbool.h"
#line 19 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
#line 28 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
static void delay(volatile unsigned int count)
{
    while (count--)
    {

        volatile int dummy = 0;
        (void)dummy;
    }
}

int main(void)
{


    preinit();


    _Bool  flag =  0 ;


    while (1)
    {
        flag = !flag;
#line 57 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
        delay(1000000);
    }

    return 0;
}
