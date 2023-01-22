class Solution {
public:
    
      void help(int i , int n , vector<int> &res){
          if(i > n) return;
          res.push_back(i);
          for(int j = 0 ; j < 10 ; j++){
              help(i*10+j, n, res);
          }
      }
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for(int i = 1 ; i <= 9 ; i++){
        help(i,n,res);
        }
      return res;
    }
};
