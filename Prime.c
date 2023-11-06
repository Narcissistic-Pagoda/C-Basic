#include<stdio.h>
int main(void) {
    int num, i, c=0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for (i=1; i<=num; i++) {
        if (num % i == 0) {
            c++;
        }
    }
    if (c==2) {
        printf("It is a prime number");
    }
        else {
        printf("It is NOT a prime number");
    }
}