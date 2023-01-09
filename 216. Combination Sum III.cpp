class Solution {
public:
     vector<vector<int>> v;
     void solve(vector<int> &r,int c,int k, int n){
           if(n < 0 || r.size() > k) return;
           if(n == 0 && r.size() == k){
              v.push_back(r);
              return; 
           }
           for(int i = c ; i <= 9 ; i++){
               r.push_back(i);
               solve(r,i+1,k,n-i);
               r.pop_back();
           }
     }



    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int> r;
       solve(r,1,k,n);
     return v;
    }
};
