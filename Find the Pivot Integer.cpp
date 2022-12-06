class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return n;
        int i = 1;
        while(i <= n){
           int sum1 = 0,sum2 = 0;
           for(int j = 0 ; j <= i ; j++){
               sum1 += j;
           }
           for(int k = i ; k <= n ; k++){
               sum2 += k;
           }
          if(sum1 == sum2) {
              return i;
              break;
          }
          i++;
        }
      return -1;
    }
};
