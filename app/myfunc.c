
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    int res;
    buffer [0] = b + 4;
    if (buffer == NULL) {
        // обработка ошибки выделения памяти
        return -1;
    }
    res = b + 4;
    
    // Освобождение выделенной памяти
    free(buffer);
    
    return res;
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}
