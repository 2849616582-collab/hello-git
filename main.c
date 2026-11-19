#include <stdio.h>
#include "hello.h"

int main(void)
{
    printf("=== Git Lab Demo ===\n");
    hello("Git");
    printf("2 + 3 = %d\n", add(2, 3));
    return 0;
}
