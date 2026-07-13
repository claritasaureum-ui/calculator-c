#include <stdio.h>


int sub(int a, int b){
    return a - b;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result, op;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    

    printf("0 - sum\n1 - sub\nwhats the operation?:");
    scanf("%d",&op);

    if(op){
        result = sub(num1, num2);

    } else{
        result = sum(num1, num2);

    };
    
    printf("Sum: %d\n", result);
    
    return 0;
}
