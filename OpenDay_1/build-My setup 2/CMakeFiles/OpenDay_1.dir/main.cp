#line 1 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
#line 1 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/stdio.h"
#line 2 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
#line 1 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/stdbool.h"



typedef char _Bool;
#line 3 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"
#line 1 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
#line 33 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
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
#line 34 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
#line 1 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/stdarg.h"




typedef void *va_list[1];
#line 35 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
#line 42 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
static inline void stdBuffFullBreak() {



    asm nop

}
#line 57 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
void debugStdOut( char ch );
#line 72 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
int printf_me( const char *format, ... );
#line 88 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
int fprintf_me( void (*stream)(char ch), const char *format, ... );
#line 106 "/home/stevan/.MIKROE/NECTOStudio7_Experimental/packages/compilers/mikroc/pic/mikroc/include/cstdio.h"
int vfprintf_me( void (*stream)(char ch), const char *format, register va_list arg );
#line 4 "/home/stevan/GIT/MikroE_OpenDay/OpenDay_1/main.c"


void delay(unsigned int count)
{
    while(count--) {

    }
}


void printFlag( _Bool  flag)
{
    if (flag) {
        printf_me("Flag is ON\n");
    } else {
        printf_me("Flag is OFF\n");
    }
}

int main(void)
{


    preinit();


    _Bool  flag =  0 ;


    while (1)
    {
        flag = !flag;

        printFlag(flag);

        delay(1000000);
    }

    return 0;
}
