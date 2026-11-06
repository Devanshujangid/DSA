class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = -1;
        int supporter = 0;
        int i=0;
        while (i<n){
            if ( supporter == 0 ){
                candidate = nums[i];
            }
            if ( candidate == nums[i] ) {
                supporter ++;
            } else {
                supporter --;
            }
           
            i++;
        }
        return candidate;
    }
};