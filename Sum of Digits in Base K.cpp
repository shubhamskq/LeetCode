class Solution {
public:
    int sumBase(int n, int k) {
        if(n == k)
           return 1;
      int sum = 0;
      int num = n;
      while(num > 0){
         
          sum +=  num%k;
          num = num/k;
      }
     return sum;
    }
};
