#include <stdio.h>
#include <stdlib.h>

int main() {
    long N;

    scanf("%ld", &N);

    int years = N / 365;
    int months = (N % 365) / 30;
    int days = (N % 365) % 30;

    printf("%i years\n",years);
    printf("%i months\n",months);
    printf("%i days\n",days);
    return 0;
}
