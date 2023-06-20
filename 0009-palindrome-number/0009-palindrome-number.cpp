class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int p=0,n=x;
        while(n) p = p*10 + n%10, n=n/10;
        return p==x;
    }
};