#include <stdio.h>
int main () {
    float l, b, h, volume;
    printf("Enter the length: \n");
    scanf("%f", &l);
    printf("Enter the breadth: \n" );
    scanf("%f", &b);
    printf("Enter the height: \n");
    scanf("%f", &h);
    volume = l*b*h;
    printf("The volume of the cube is %f\n", volume);
    getchar();
    getchar();
    return 0;
}   z