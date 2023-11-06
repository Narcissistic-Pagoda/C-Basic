#include<stdio.h>
int main(void) {
    int num, i, sum=0, c=0 ;
    printf("Enter a number till which to print the series: \n");
    scanf("%d", &num);
    for (i=1; i<=num; i++) {
    sum = sum*10 +9;
    c = sum + c;
    }
    printf("The sum till order %d is %d!", num, c);
}