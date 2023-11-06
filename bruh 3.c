#include <stdio.h>
int main() {
	float a,b,add,subtract,multiply,divide;
	printf("Enter two numbers:\n");
	scanf("%f %f", &a, &b);
	printf("Addition = %f\n", a+b);
	printf("Subtraction = %f\n", a-b);
	printf("Multiplication = %f\n", a*b);
	printf("Division = %f\n", a/b);
	return 0;
}