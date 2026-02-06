#include <stdio.h>

int main() {
	int n,target;
	scanf("%d%d",&n,&target);
	int arr[n];
	int ans = 0;
	for(int i=0; i<n; i++){
	    scanf("%d",&arr[i]);
	    if(arr[i] == target){
	        ans = 1;
	        break;
	    }
	}
	if(ans){
	    printf("YES");
	}
	else{
	    printf("NO");
	}
}
