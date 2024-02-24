class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int n = x;
    long ans=0;
    while(n!=0){
        int digit = n%10;
        ans = ans*10+digit;
        n=n/10;
    }
    if(ans == x){
        return true;
    }
    
    return false;
    }
};