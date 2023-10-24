#include <stdio.h>
#include <hashmap.h>

long fib(int n, hashmap_t *hm) {
    
    if (hashmap_contains(hm, n)) {
        return hashmap_get(hm, n);
    }
    
    if (n <= 2) return 1;
    long value = fib(n - 1, hm) + fib(n - 2, hm);
    hashmap_put(hm, n, value);
    
    return value;
}


long fibSeq(int n, hashmap_t *hm) {  
    if (hashmap_contains(hm, n)) return hashmap_get(hm, n); 
    if (n <= 2) { hashmap_put(hm, n, 1l); printf("%ld\n", 1l); return 1; }
    long value = fibSeq(n - 1, hm) + fibSeq(n - 2, hm);
    hashmap_put(hm, n, value);
    printf("%ld\n", value);
    return value;    
}

int calculate(int i) {
    // // Declare and set a character
    // char myChar = 'A';
    // printf("Character: %c\n", myChar);

    // // Declare and set a double
    // double myDouble = 3.14159;
    // printf("Double: %.5lf\n", myDouble);

    // // Declare and set an unsigned integer
    // unsigned int myUnsignedInt = 50;
    // printf("Unsigned Integer: %u\n", myUnsignedInt);
    return i + 1;
}