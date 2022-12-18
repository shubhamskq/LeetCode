class Solution {
public:
      long long smallHelp(int n){
          long long ans = 0;
          int div = 2;
          while(n > 1){
              if(n%div== 0){
                  ans += div;
                  n = n/div;
              }
              else{
                  div++;
              }
          }
          return ans;
      }
    int smallestValue(int n) {
         while(true){ 
        long long sum = smallHelp(n);
        if(n == sum) break;
             n = sum;
         }
        return n;
    }
};
