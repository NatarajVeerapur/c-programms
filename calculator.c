#include <stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    float a, b;
    while (1) {
        printf("Enter an operator (+, -, *, /), if want to exit press x: ");
        scanf(" %c", &ch);
        if (ch == 'x')
            exit(0);
        printf("Enter value for a and b\n");
        scanf("%f %f",&a,&b);
        switch (ch) {
        case '+':
            printf("%f + %f = %f\n", a, b, a + b);
            break;
        case '-':
            printf("%f - %f = %f\n", a, b, a - b);
            break;
        case '*':
            printf("%f * %f = %f\n", a, b, a * b);
            break;
        case '/':
            printf("%f / %f = %f\n", a, b, a / b);
            break;
        default:
            printf("Please enter a valid operator\n");
        }
    }
}