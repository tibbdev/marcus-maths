#include "test_me.h"

int ret_zero(void)
{
    return ret_int(0);
}
int ret_one(void)
{
    return 1;
}
int ret_int(int value)
{
    return value;
}