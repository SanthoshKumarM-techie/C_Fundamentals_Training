#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int i=0, j=1;
    while(i<n && j<n){
        if(arr[i]+arr[j] == target){
            printf("%d %d",i,j);
            return 0;
        }
        i++;
        j++; 
    }
    printf("%d %d",-1,-1);
    return 0;
}
