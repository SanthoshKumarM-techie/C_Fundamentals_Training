bool isPalindrome(int x) {
    int temp = x;
    if(x<0){
        return false;
    }
    double res;
    res = x%10;
    x = x/10;
    while(x){
        res = res*10 + x%10;
        x /= 10;
    }
    if (res == temp){
        return true;
    }
    return false;
}
