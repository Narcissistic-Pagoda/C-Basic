#include <stdio.h>
int main() {
	float base, height, area;
	printf("Enter the base and height " );
	scanf("%f %f", &base, &height);
	area = 0.5*base*height;
	printf("The area is %f", area);
    return 0;
}