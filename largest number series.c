#include<stdio.h>

int main() {
    float i;
    float temp = 0;
    do {
        printf("Enter a number: ");
        scanf("%f", &i);
        printf("\n");
        if (temp < i){
            temp = i;
        }
        if (i==0 || i<0){
            printf("The greatest number you entered is %.2f", temp);
            break;
        }
    } while (i!=0 || i>0);
        
    return 0;
}