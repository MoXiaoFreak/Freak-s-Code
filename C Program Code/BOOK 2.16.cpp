#include <stdio.h>
int main()
{
	int a, b, sum, product, difference, quotient,remainder;
	printf("Please input the first number:\n");
	scanf("%d", &a);
	printf("Please input the second number:\n");
	scanf("%d", &b);
	sum = a + b;
	product = a*b;
	difference = a - b;
	quotient = a / b;
	remainder = a%b;
	printf("the sum of %d and %d is %d.\n",a,b,sum);
	printf("the product  of %d and %d is %d.\n", a, b, product);
	printf("the difference of %d and %d is %d.\n", a, b, difference);
	printf("the quotient of %d and %d is %d.\n", a, b, quotient);
	printf("the remainder of %d and %d is %d.\n", a, b, remainder);
	return 0;
}