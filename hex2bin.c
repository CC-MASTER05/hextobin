#include <stdio.h>
#include <string.h>  


int hextobin () {
    int in, x;

    /* Read stdin one character at a time, convert to uppercase */
    while ( (in = toupper(getchar())) && !feof(stdin) )
    {
        /* Only act if character is in range 0-9 or A-F */
        if ( ('0'<=in && in<='9') || ('A'<=in && in<='F') )
        {
            /* Convert text to 4-bit number (one hex digit) */
            in -= (in>'9') ? ('A'-10) : '0';

            /* Print the 4 bits from most to least significant */
            for ( x=8; x>0; x>>=1 )
                putchar ( (x&in)?'1':'0' );
        }
    }
    return 0;
}
