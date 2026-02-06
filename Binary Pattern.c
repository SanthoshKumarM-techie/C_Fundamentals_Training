#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,x=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2 != 0){
            x = 1;
        }
        else{
            x=0;
        }
        for(int j=n; j>=i; j--){
            printf("%d",x);
            x = !x;
        }
        printf("\n");
    }
    return 0;
}
