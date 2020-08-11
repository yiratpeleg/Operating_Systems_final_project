#define _BSD_SOURCE
#include <stdio.h>
#include <stdlib.h>

char globBuf[65536];            /* 1. BSS-uninitialized data */
int primes[] = { 2, 3, 5, 7 };  /* 2. initialized data */

static int
square(int x)                   /* 3. text-code segment */
{
    int result;                 /* 4. stack frame of square function */

    result = x * x;
    return result;              /* 5. by register */
}

static void
doCalc(int val)                 /* 6. text-code segment */
{
    printf("The square of %d is %d\n", val, square(val));

    if (val < 1000) {
        int t;                  /* 7. stack frame of doCalc function */

        t = val * val * val;
        printf("The cube of %d is %d\n", val, t);
    }
}

int
main(int argc, char* argv[])    /* 8. text-code segment */
{
    static int key = 9973;      /* 9. initialized data */
    static char mbuf[10240000]; /* 10. BSS-uninitialized data */
    char* p;                    /* 11. stack frame of main function */


    doCalc(key);

    exit(EXIT_SUCCESS);


}