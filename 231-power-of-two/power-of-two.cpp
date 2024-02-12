class Solution {
public:
    bool isPowerOfTwo(int n) {
        int m =1;
        for(int i =0;i<=30;i++){
            if(m==n) return true;
            if(m< INT_MAX/2)
            m=m*2;
        }
        return false;
    }
};