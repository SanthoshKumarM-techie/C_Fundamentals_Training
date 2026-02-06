#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c1,q1,c2,q2,c3,q3,budget;
    float beforeTax,afterTax;
    scanf("%d%d", &c1,&q1);
    scanf("%d%d", &c2,&q2);
    scanf("%d%d", &c3,&q3);
    scanf("%d", &budget);
    beforeTax = c1*q1 + c2*q2 + c3*q3;
    afterTax = ((10/100.0)*beforeTax) + beforeTax;
    printf("Total (Before Tax): %.2f", beforeTax);
    printf("\nTotal (After Tax): %.2f", afterTax);
    if(afterTax>budget){
        printf("\nOver Budget");
    }
    else{
        printf("\nWithin Budget");
    }
    return 0;
}
