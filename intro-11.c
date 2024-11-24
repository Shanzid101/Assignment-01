#include <stdio.h>

int main() {
    
    long int li = 2387483645;          
    long long int lli = 7863372036854775807;  
    long double ld = 1.1E+49675L;
    short int si = 89768;

    
    printf("long int value:%ld\nlong long int value:%lld\nlong double value:%Le\nshort int value:%hd\n", li,lli,ld,si);
   

    return 0;
}
