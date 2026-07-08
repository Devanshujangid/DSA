class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // we will find: the correct idx to place the non zero elements one by one.
        int n=nums.size();
        //traversing the array
        int pnz=0;
        for ( int i=0 ; i<n ; i++ ){
                if (nums[i]!=0 ){
                    swap(nums[pnz],nums[i]);
                    pnz++;
                }     
        }
    }
};