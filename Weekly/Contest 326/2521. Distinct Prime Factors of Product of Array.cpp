class Solution {
public:

     void addPrimeFactor(set<int> &st, int n){
         int div = 2;
         while(n > 1){
             if(n % div == 0){
                 st.insert(div);
                 n = n/div;
             }
             else {
                 div++;
             }
         }
     }
    int distinctPrimeFactors(vector<int>& nums) {
       set<int> st;
        for(int num : nums)  addPrimeFactor(st,num);
       return st.size();
    }
};
