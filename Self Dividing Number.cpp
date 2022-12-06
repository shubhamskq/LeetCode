class Solution {
public:
    bool isDivisible(int num){
        int n = num;
        while(n){
            int r = n%10;
            if(r == 0)
                 return false;
            if(num % r != 0)
                 return false;
            
            n = n/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
       for(int i = left ; i <= right ; i++){
           if(isDivisible(i)){
               res.push_back(i);
           }
       }
      return res;
    }
};
