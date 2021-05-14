#include <stdio.h>
#include <stdlib.h>

void square(int * const xPointer);


int main()
{
    int userInput;
    printf("Enter a number to be squared: ");

    scanf("%d", &userInput);

    square(&userInput);
    printf("The square of the given number is %d\n", userInput);
    return 0;

}

void square(int * const xPointer)
{
    // *xPointer - dereferences the pointer and gets the value
    *xPointer = (*xPointer) * (*xPointer); // dereferences and multiplies by itself
}
