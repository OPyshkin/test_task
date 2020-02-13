
#include "module.h"
#include <stdio.h>
int main(void)
{
    printf("%d", __INT_MAX__);
    int a = getNumber();
    printf("\n%d\n", a);
    /*
    while (1) {
        incrementNumber();
        a = getNumber();
        printf("\n%d\n", a);

    }
    */
    
    setMaximumValue(25);
    for (int i = 0; i < 100; i++) {
        incrementNumber();
        a = getNumber();
        printf("\n%d\n", a);
    }
    setMaximumValue(100);
    
    a = getNumber();
    printf("\nfinally =%d\n", a);
    return 0;
}

