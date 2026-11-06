class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currSum=0;
        int maxSum=INT_MIN;
        int i=0;
        while ( i<n ){
            if ( currSum<0 ) {
                currSum=0;
            } 
            currSum+=nums[i];
            

            maxSum=max(currSum,maxSum);
             i++;
        }
   
     return maxSum;
    }
   
};