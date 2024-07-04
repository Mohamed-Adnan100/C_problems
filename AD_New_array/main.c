
/**
Given two arrays A and B of size N.
Print a new array C that holds the concatenation of array B followed by array A

Note: Solve this problem using function.

Input
First line will contain a number N(1≤N≤103).

Second line will contain N
 numbers (1≤Ai≤105) array Aelements.

Third line will contain N numbers (1≤Bi≤105)
 array B elements.

Output
Print array C elements separated by space.

Example
input
2
1 2
3 4
output
3 4 1 2

*/
#include <stdio.h>
void sorting_array(int a[],int size);
void printing_array(int a[],int size);
int main() {
    int i;
    scanf("%i",&i);
    int arr1[i];
    int arr2[i];

    sorting_array(arr1,i);
    sorting_array(arr2,i);

    printing_array(arr2,i);
    printing_array(arr1,i);
    return 0;
}
void sorting_array(int a[],int size){

    for(int count = 0 ;count<size ;count++ ){
        scanf("%i",&a[count]);
    }
}
void printing_array(int a[],int size){
    for(int count = 0 ;count<size ;count++ ){
        printf("%i ",a[count]);
    }
}
