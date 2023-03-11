class Solution {
public:
    int passThePillow(int n, int time) {
        int i = 1;
        int j = 1;
        while(time--){
            if(i == n) j = -1;
            if(i == 1) j = 1;
            i += j;
        }
        return i;
    }
};
