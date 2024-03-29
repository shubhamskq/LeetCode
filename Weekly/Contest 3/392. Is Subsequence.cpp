class Solution {
public:
    //Using Recursion:
    bool isSubSeq(string s,string t, int m, int n){
        //Base Cases:
        if(m == 0) return true;
        if(n == 0) return false;
        //if Last Elements are equal
        if(s[m-1] == t[n-1])
              return isSubSeq(s,t, m-1, n-1);
        return isSubSeq(s,t,m,n-1);
    }
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        return isSubSeq(s,t,m,n);
    }
};

class Solution {
public:
    //Using Two Pointers:
    bool isSubsequence(string s, string t) {
      int m = s.size();
      int n = t.size();
        int i = 0 , j = 0;
        while(i < m && j < n){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
    return i == m ? 1 : 0;
    }
};
