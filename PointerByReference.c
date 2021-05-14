#include <stdio.h>
#include <stdlib.h>

void square(int *xPointer);


int main()
{

    return 0;
}

void square(int *xPointer)
{
    // *xPointer - dereferences the pointer and gets the value
    *xPointer = (*xPointer) * (*xPointer); // dereferences and multiplies by itself
}
