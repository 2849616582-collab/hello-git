#include <stdio.h>
#include "hello.h"

/* 打印问候语 */
void hello(const char *name)
{
    printf("Hello, %s! Welcome to Git lab.\n", name);
}

/* 两数相加 */
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
