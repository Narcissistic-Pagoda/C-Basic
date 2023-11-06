#include <stdio.h>
int main(void) {
	int length, breadth, Area;
	printf("Enter the length and breadth: ");
	scanf("%d %d", &length, &breadth);
	Area = (length*breadth);
	printf("The area is: %d", Area);
	return 0;
}