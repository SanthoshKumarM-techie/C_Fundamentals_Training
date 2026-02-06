#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int evenSum=0, oddSum=0, evenIndSum=0, oddIndSum=0;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
            evenIndSum += arr[i];
        }else{
            oddIndSum += arr[i];
        }
        if(arr[i]%2 == 0){
            evenSum += arr[i];
        }
        else{
            oddSum += arr[i];
        }
    }
    printf("%d %d %d %d",evenSum,oddSum,evenIndSum,oddIndSum);
    return 0;
}
