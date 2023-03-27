
class Solution {
public:
    int guessNumber(int n) {
        int l = 0, k = n;
        while(l <= k){
            int mid = l + (k-l)/2;
            if(guess(mid) == 0)
                return mid;
            else if(guess(mid) == -1){
                k = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return -1;
    }
};
