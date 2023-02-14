class Solution {
public:
    int alternateDigitSum(int n) {
    int e = 0 , o = 0, c = 0;
      while(n > 0){
          if(c%2 == 0) o += n%10;
          else e += n%10;
          c++;
          n = n/10;
      }
      return (c%2==0)? e-o:o-e;
    }
};
