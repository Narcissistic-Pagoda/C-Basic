#include<stdio.h>
int natural(int a);
int main(void) {
    int n;
    printf("Enter the number to which it is to be printed: \n");
    scanf("%d", &n);
    printf("The sum till %d is %d", n, natural(n));
}
int natural(int a) {
    if (a>1) {
        int sum;
        return a + natural(a-1);
    }
    else {
        return 1;
    }
    }