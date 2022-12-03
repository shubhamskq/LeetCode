class Solution {
public:
    string sortString(string s) {
          int n = s.size();
        int a[26] = {0};
        int k = n;
        for(int i = 0 ; i < n;  i++){
             a[s[i] - 'a']++;
        }
        string res = "";
        while(k > 0){
            for(int i = 0 ; i < 26 ; i++){
                 if(a[i] > 0) {res += i + 'a' ; k--; a[i]--;}
            }
            for(int i = 25 ; i >= 0 ; i--){
                if(a[i] > 0) {res += i + 'a'; k--; a[i]--;}
            }
        }
        return res;
    }
};
