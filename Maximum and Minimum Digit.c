#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int min = 9;
    int max = 0;
    scanf("%d", &n);
    if(n<0){
        n = -n;
    }
    while(n){
        int temp;
        temp = n%10;
        if(temp<min){
            min = temp;
        }
        if(temp>max){
            max = temp;
        }
        n /= 10;
    }
    printf("%d %d", max,min);
    return 0;
}
