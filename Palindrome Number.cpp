class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        long r = 0, o = x;
        while (o){
            r = r*10+o%10;
            o/=10;
        }
        return r == x;
    }
};
