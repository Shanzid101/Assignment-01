#include <stdio.h>

int gl= 10;

void print(){
 
    printf("Global: %d\n",gl);
}

int main(){
    
    printf("Global: %d\n",gl);

    int gl= 20;
    printf("Local: %d\n",gl);
    print();
    

    return 0;
}