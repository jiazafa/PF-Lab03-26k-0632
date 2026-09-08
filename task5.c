#include <stdio.h>
int main() {
float num1, num2, result;
char operator;
printf("enter first number");
scanf("%f", &num1);
printf("enter operator ( + - * /):");
scanf(" %c ", &operator);
printf("enter second number");
scanf("%f", &num2);
switch (operator) {
    case '+':
    result = num1 + num2;
    printf("result:%.2f\n", result);
    break;
    case'-':
    result = num1 - num2;
    printf("result:%.2f\n", result);
    break;
    case'*':
    result = num1 * num2;
    printf("rsult:%.2f\n",result);
    break;
    case'/':
    if (num2 == 0) {
        printf("error:division by zero is not allowed\n");
    } else {
        result = num1 / num2;
    } 
    break;
    default:
    printf("error:invalid operator\n");
}
return 0;
}