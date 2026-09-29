#include <stdio.h>

int main (void) {
    int a [3] [2] = {{1,2}, {3,4}, {5,6}};

    printf("%p\n", a);
    printf("%p, %p, %p\n", a[0], a[1], a[2]);
}