#include<stdio.h>
int main(void) {
    int n, i=1, fact=1;
    printf("Enter the number you want the factorial of: \n");
    scanf("%d", &n);
    for (i; i<=n; i++) {
        fact = fact*i;
    }
    printf("The factorial of %d! is %d", n, fact);
}