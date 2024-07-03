#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int B;
    char C;
    int ANS=0;

    scanf("%i %c %i" ,&A ,&C ,&B);

    switch(C){
    case '>':
        ANS = (A > B);
        break;

    case '<':
        ANS = (A < B);
        break;
        case '=':
        ANS = (A == B);
        break;
    default :
        ANS = 1;
    }

    if(ANS == 1){
    printf("Right\n");
    }
    else{
        printf("Wrong\n");
    }


    return 0;
}
