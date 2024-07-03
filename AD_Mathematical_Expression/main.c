#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,val;
    char S,Q;
    scanf("%i %c %i %c %i",&A,&S,&B,&Q,&C);

    switch (S){
        case '+':
        val = A + B;
        break;
        case '-':
        val = A - B;
        break;
        case '*':
        val = A * B;
        break;
    }

    if(val == C){
        printf("Yes");
    }
    else{
        printf("%i",val);
    }

    return 0;
}
