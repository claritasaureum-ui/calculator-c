#include <stdio.h>


int sub(int a, int b){
    return a - b;
}

int sum(int a, int b) {
    return a + b;
}

int square(int a) {
    return a*a;
}

int main() {
    int num1, num2, result, op;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    

    printf("0 - sum\n1 - sub\n2 - square of first\nwhats the operation?:");
    scanf("%d",&op);


    switch (op) {
        case 0:
            result = sum(num1, num2);
            break;
        case 1:
            result = sub(num1, num2);
            break;
        case 2:
            result = square(num1);
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }
    
    printf("Result: %d\n", result);
    
    return 0;
}
