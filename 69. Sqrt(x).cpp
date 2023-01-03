class Solution {
public:
    long long int bs( int key)
    {
        long long int s=0,e=key,mid=s+(e-s)/2;
        long long int ans=0;
        while(s<=e){
            if(mid*mid==key)
                return mid;
            else if(mid*mid>key)
                e=mid-1;
            else{
                ans=mid;
                s=mid+1;}
            mid=s+(e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        
    return bs(x);
    }
};
