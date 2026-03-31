class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // brute force-
        int n = nums.size();
        // taking two variables-
        int ans=0; // to store the final max. answer
        int temp=0; // to store the current consecutive answer 
        for ( int i=0 ; i<n ; i++ ){
            if ( nums[i]==1 ){
                temp+=1;
                ans = max(ans,temp);
            }
            else temp=0;
        }
        return ans;
    }
};