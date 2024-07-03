#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C;
    double max, min, med;
    scanf("%lf%lf%lf",&A,&B,&C);
    max = A;

    if( (max <= B) && (B >= C) && (max >= C) ){
        max = B;
        med = A;
        min = C;
    }
    else if( (max >= B) && (B >= C) && (max >= C) ){
        max = A;
        med = B;
        min = C;
    }
    else if( (max >= B) && (B <= C) && (max <= C) ){
        max = C;
        med = A;
        min = B;
    }
    else if( (max >= B) && (B <= C) && (max >= C) ){
        max = A;
        med = C;
        min = B;
    }
    else if( (max <= B) && (B <= C) && (max <= C) ){
        max = C;
        med = B;
        min = A;
    }
    else{
        max = B;
        med = C;
        min = A;
    }

    printf("%0.0lf\n",min);
    printf("%0.0lf\n",med);
    printf("%0.0lf\n",max);

    printf("\n");

    printf("%0.0lf\n",A);
    printf("%0.0lf\n",B);
    printf("%0.0lf\n",C);
    return 0;
}
