#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = n;
    int b = n;
    for(int i=1; i<=n; i++){
        int temp = a;
        for(int j=1; j<=n*2-1; j++){
            if((i+j)-n >=1){
                if(temp<=b){
                    printf("%c ", 64+(i+j)-n);
                    temp++;
                }
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        a--;
        b++;
    }
    return 0;
}
