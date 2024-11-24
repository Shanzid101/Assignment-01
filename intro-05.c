#include <stdio.h>

int main() {
    
    int a,b = 10,x = 5, y = 15, z = 20,p = 30, q = 30, r = 30;

    printf("Uninitialized variable (a): %d\n",a); 

    printf("Variable with initialization: %d\n",b);

    printf("Multiple variables with different values: %d, %d, %d\n", x, y, z);
    
    printf("Multiple variables with the same value: %d, %d, %d\n", p, q, r);
    
    return 0;
}

