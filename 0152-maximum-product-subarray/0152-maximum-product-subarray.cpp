class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        // brute force
        
        int max_prod=INT_MIN;

        for ( int i=0 ; i<n ; i++ ){
            int curr_prod=1;
            for ( int j=i ; j<n ; j++ ){
                curr_prod = curr_prod * nums[j];
                max_prod=max(curr_prod,max_prod);
            }
        } 

        return max_prod;

    }
};