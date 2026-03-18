class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // placing the non zero element at the correct position
        int place_idx=0;
        for ( int i=0 ; i<nums.size() ; i++ ){
            if ( nums[i]!=0 ){
                swap(nums[place_idx],nums[i]);
                place_idx++;
            }
        }
    }
};