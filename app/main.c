#include <stdio.h>

#include "myfunc.h"

#define _CRT_SECURE_NO_WARNINGS

int main()
{
    printf("Hello World!\n");
    float a, b, c, root1, root2;
    printf("a, b & c:\n");
    scanf_s("%f %f %f", &a, &b, &c);


    int roots = quEx(a, b, c, &root1, &root2);

    if (roots == 2)
        printf("roots is: %.2f & %.2f\n", root1, root2);
    else if (roots == 1)
        printf("root is: %.2f\n", root1);
    else
        printf("no rat roots\n");

    return myfunc(2);
}