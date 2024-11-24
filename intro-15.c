#include <stdio.h>

int main() {
    float num;

    printf("Enter a floating point number: ");
    scanf("%f",&num);
    printf("(a) Val:%10.6f\n", num);

    printf("(b) Val:%2.6f\n", num);

    printf("(c) Val:%0.2f\n", num);

    printf("(d) Val:%0.0f\n", num);

    printf("(e) Val:%e\n", num);

    return 0;
}
