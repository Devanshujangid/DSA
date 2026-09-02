class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // step 1: find the pivot where order breaks
        int n = nums.size();

        int pivot;
        int pivot_idx=-1;
        // use pointer -> traverse back 
        for ( int i=n-1 ; i>=1 ; i-- ){
            if ( nums[i-1]<nums[i] ){
                 pivot = nums[i-1];
                 pivot_idx=i-1;
                 break;
            }
        }

        // no pivot
        if ( pivot_idx==-1 ){
            // simply reverse 
            reverse(nums.begin(), nums.end());
            return;
        }

        // traverse from pivot_idx+1 to n-1 and find the no exactly just greater than pivot
        int min_no_gt_tn_pivot = INT_MAX;
        int min_no_gt_tn_pivot_idx=-1;
       // int min_no_just_greater_tn_pivot;
        for ( int k=pivot_idx+1 ; k<n ; k++ ){
            if ( nums[k]>pivot && nums[k]<=min_no_gt_tn_pivot ){
                min_no_gt_tn_pivot = nums[k];
                min_no_gt_tn_pivot_idx = k;
            }
        }

        // so swap 
        swap(nums[min_no_gt_tn_pivot_idx],nums[pivot_idx]);
        // now reverse from pivot+1 to n-1
        reverse(nums.begin()+pivot_idx+1, nums.end());
    }
};