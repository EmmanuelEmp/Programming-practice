#include <stdio.h>

int main()
{
double value1;
double value2;
char operator;

printf("Use this simple calculator to calculate simple maths\n");
printf("Enter value1 and value2\nAnd any operator to print your result\n");

scanf("%lf", &value1);
scanf("%c", &operator);
scanf("%lf", &value2);

switch(operator) 

{
case '*':
     printf("%.1lf * %.1lf = %.1lf\n", value1, value2, value1 * value2);
    break;

case '/':
    printf("%.1lf / %.1lf = %.1lf\n", value1, value2, value1 / value2);
    break;

case '-':
    printf("%.1lf - %.1lf = %.1lf\n", value1, value2, value1 - value2);
    break;

case '+':
    printf("%.1lf + %.1lf = %.1lf\n", value1, value2, value1 + value2);
    break;

default:
   printf("Error! wrong input\n"); // Error for wrong input
    break;
}

return 0;
}
