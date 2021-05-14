#include <stdio.h>
#include <stdlib.h>

void square(int * const xPointer);


int main()
{
    int num = 9;

    square(&num);
    printf("The square of the given number is %d\n", num);
    return 0;

}

void square(int * const xPointer)
{
    // *xPointer - dereferences the pointer and gets the value
    *xPointer = (*xPointer) * (*xPointer); // dereferences and multiplies by itself
}
