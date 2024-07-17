#include <stdio.h>

#include "marcus_maths/inc/marcus_maths.h"

int main(int argc, char* argv[])
{
    if(1 < argc)
    {
        printf("Hello %s, this is %s. Pleasure to meet you.\r\n", argv[1], argv[0]);
    }
    else printf("Hello human, this is %s. Pleasure to meet you.\r\n", argv[0]);

    printf("1 add 1 equals %d\r\n", marcus_maths_add_i32(1, 1));
    printf("OK... 1 add 1 equals %d\r\n", marcus_maths_add_ui32(1, 1));
    printf("also... 1 multiplied by 1 equals %d\r\n", marcus_maths_add_ui32(1, 1));
    printf("wait... 1 multiplied by 1 equals %d\r\n", marcus_maths_add_float(1, 1));

    return 0;
}