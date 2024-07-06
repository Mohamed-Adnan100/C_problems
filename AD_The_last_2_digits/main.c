
/**

Given 4 numbers A, B, C and D.
Print the last 2 digits from their Multiplication.

Input
Only one line containing four numbers A, B, C and D (2≤A,B,C,D≤109).

Output
Print the last 2 digits from their Multiplication.

*/


#include <stdio.h>

int main() {
    long long A, B, C, D;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long product = (A * B)%100 ;
    long long product1 = (C * D)%100;
    long long product2 = product*product1;

    int lastTwoDigits = product2 % 100;

    printf("%02d\n", lastTwoDigits);

    return 0;
}
