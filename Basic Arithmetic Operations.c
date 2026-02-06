#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("Sum: %d",a+b);
    printf("\nDifference: %d",a-b);
    printf("\nProduct: %d",a*b);
    printf("\nQuotient: %d",a/b);
    printf("\nRemainder: %d",a%b);
    return 0;
}
