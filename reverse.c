#include<stdio.h>
int main(void) {
    int num, rem, rev=0;
    printf("Enter a number: \n");
    scanf("%d", &num);
    while(num!=0) 
    {
         rem = num%10;
         rev= rev*10 + rem;
         num/= 10;
    }
    printf("The reverse is: %d\n", rev);
    if (rev=num) {
        printf("It is ALSO a PALINDROME!");
    }
    else {
        printf("It is NOT a palindrome!");
    }
}