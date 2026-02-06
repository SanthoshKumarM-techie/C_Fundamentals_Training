#include <stdio.h>

int main() {
	int n,ans=1;
	scanf("%d",&n);
	ans = n%10;
	n = n/10;
	while(n){
	    ans = ans*10 + n%10;
	    n = n/10;
	}
	
	printf("%d",ans);
}
