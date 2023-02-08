class Solution {
public:
    int jump(vector<int>& nums) {
        
        const int size = nums.size();
        int destination = size-1;
        
        int curCoverage = 0, lastJumpIdx = 0;
        int timesOfJump = 0;
 
        if( size == 1 ){
            return 0;
        }
        for( int i = 0 ; i < size ; i++){
            curCoverage = max(curCoverage, i + nums[i] );
            if( i == lastJumpIdx ){
                
                lastJumpIdx = curCoverage;
                
                timesOfJump++;
                if( curCoverage >= destination){
                    return timesOfJump;
                }
            }
        }
        
        return timesOfJump;
    }
};
