#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int i=0, j=1;
    while(i<n){
        if(j == n){
            i+=2;
            j+=2;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        i+=2;
        j+=2;
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
