#include <stdio.h>

int main() {
    
    char operation;
    double x, y;
    printf("Enter an operator (+, -, *, /) : ");
    scanf("%c", &operation);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    
    return 0;
}
