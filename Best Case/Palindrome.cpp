class Solution {
public:
    bool isPalindrome(int x) {
       if(x < 0 || (x != 0 && x % 10 == 0)){
           return false;
       }
        long long int res = 0;
        while(x > res ){
            int r = x%10;
            res = res*10 + r;
            x = x/10;
        }
         
     return (x == res) || (x == res/10);
    }
};
