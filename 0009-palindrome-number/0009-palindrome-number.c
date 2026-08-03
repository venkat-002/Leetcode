#include<stdbool.h>

bool isPalindrome(int x) {
    if(x < 0) return false;
    if(x % 10 == 0 && x != 0) return false;
    
    long long reversed = 0;
    int orginal = x;
    while(x!=0){
        int digit = x % 10;
        reversed = reversed*10 + digit;
        x/=10;
    }
    return orginal == reversed;
}