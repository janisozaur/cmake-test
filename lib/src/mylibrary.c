#include <stdio.h>

// Function prototype
int add(int a, int b);

// Main function
int foo() {
    printf("Hello, World! library\n");
    
    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);
    
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
