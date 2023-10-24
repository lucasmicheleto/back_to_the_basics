#include "exercises.h"
#include <stdio.h>
#include <hashmap.h>

int main() {
    // Declare and set an integer
    // int myInt = 10;
    // printf("Integer: %d\n", myInt);

    // // Declare and set a character
    // char myChar = 'A';
    // printf("Character: %c\n", myChar);

    // // Declare and set a float
    // float myFloat = 3.14f;
    // printf("Float: %.2f\n", myFloat);

    // // Declare and set a double
    // double myDouble = 3.14159;
    // printf("Double: %.5lf\n", myDouble);

    // // Declare and set a short integer
    // short int myShortInt = 100;
    // printf("Short Integer: %hd\n", myShortInt);

    // // Declare and set a long integer
    // long int myLongInt = 1000000L;
    // printf("Long Integer: %ld\n", myLongInt);

    // // Declare and set an unsigned integer
    // unsigned int myUnsignedInt = 50;
        hashmap_t *hm = hashmap_init(100);
    long res = fib(10, hm);
    hashmap_free(hm);

    printf("fib(10): %ld\n", res);
    //printf("Calculate: %u\n", calculate(0));
    return 0;
}
