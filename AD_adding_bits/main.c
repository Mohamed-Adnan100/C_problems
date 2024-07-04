#include <stdio.h>

unsigned int fun_add(unsigned int a, unsigned int b);

int main() {
    unsigned int a, b;

    scanf("%i %i", &a, &b);

    unsigned int result = fun_add(a, b);

    printf("%i\n", result);

    return 0;
}
unsigned int fun_add(unsigned int a, unsigned int b) {
    return a ^ b; // (^) not (&) or (+)
}
