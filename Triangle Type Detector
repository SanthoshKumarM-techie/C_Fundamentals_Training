#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(((a+b)>c) && ((a+c)>b) && ((b+c)>a)){
        if(a == b && b == c && c == a){
            printf("Equilateral Triangle");
        }else if(a!=b && b!=c && c!=a){
            printf("Scalene Triangle");
        }
        else{
            printf("Isosceles Triangle");
        }
    }else{
        printf("Not a valid triangle");
    }
    return 0;
}
