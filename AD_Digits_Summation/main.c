
/**

Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.


*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    int last_DigitN = N % 10;
    int last_DigitM = M % 10;

    int sum = last_DigitN + last_DigitM;

    printf("%d\n", sum);

    return 0;
}
