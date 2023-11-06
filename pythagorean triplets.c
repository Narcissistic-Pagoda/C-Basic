#include<stdio.h>
int main(void) {
    int i, j, k;
    for (i=1; i<=1000; i++) {
        for(j=1; j<=1000; j++) {
            for (k=1; k<=1000; k++) {
                if((i^2) + (j^2) == (k^2) && i+j+k==1000)
                    printf("The numbers are: i=%d, j=%d, k=%d\n", i, j, k);
                    printf("And their products is %d\n", i*j*k);
            }
        }
    }
}