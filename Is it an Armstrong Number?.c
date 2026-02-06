#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ans = 0;
    int n;
    scanf("%d", &n);
    int temp = n;
    while(n){
        int num = n%10;
        ans += num*num*num;
        n /= 10;
    }
    
    if(temp == ans){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}
