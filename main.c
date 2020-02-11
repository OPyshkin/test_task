#include "module.h"
#include <stdio.h>
int main(void)
{
    int a = getNumber();
    printf("\n%d\n", a);
    setMaximumValue(5);
    for (int i=0;i<9;i++)
    {
        incrementNumber();
        a = getNumber();
        printf("\n%d\n", a);
    }
    a = getNumber();
    printf("\n%d finally =", a);
    return 0;
}

