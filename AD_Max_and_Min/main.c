
/**
***********************************************************
* @file     :  main.c                                     *
* @author   :  mohamed adnan amer                         *
* @brief    :  Max and Min                                *
***********************************************************
**/

/**
***********************************************************
    Input
    Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
    InputOnly one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)
    Output
    Print the minimum number followed by a single space then print the maximum number.
***********************************************************
**/


#include <stdio.h>
#include <stdlib.h>

int main()
{
     long long  x, y, z;
    long long max,min;

    scanf("%lld%lld%lld",&x,&y,&z);

    min = x ;
    if( (y < min) )
    {
        min = y;
    }
    if( (z < min) )
    {
       min = z;
    }

    max = x;
    if( (y > max) )
    {
        max = y;
    }
    if( (z > max) )
    {
       max = z;
    }
    printf("%lld %lld",min,max);

    return 0;
}
