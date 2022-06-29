#include <stdio.h>

void swap(int *foo, int *bar) {
    int baz = *foo; // Assing baz the pointer of the integer foo
    *foo = *bar;
    *bar = baz;
    printf("swap: x = %d, y = %d\n", *foo, *bar);
}

int main(void)  {
    int x = 10;
    int y = 20;
    swap(&x, &y);   // & gets the memory address (pointer) of the variable
    printf("main: x = %d, y = %d\n", x, y); // Expected that x = 20, y = 10 after fuction
}
