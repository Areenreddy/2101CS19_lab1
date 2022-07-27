#include <stdio.h>

int main() {
    
    char operation;
    double x, y;
    printf("Enter an operator (+, -, *, /) : ");
    scanf("%c", &operation);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    
    switch (operation) {
        case '+':
          printf("%.1lf + %.1lf = %.1lf", x, y, x + y);
          break;
    }
    
    return 0;
}
