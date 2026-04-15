class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
    
        // decalre the map
        unordered_map<int,int>mpp; // {key,value} store : {key:value}
        // key-> element of array &&& value-> idx of element

        // traversing the array
        for ( int i=0 ; i<n ; i++ ){
            // for each element-> check complement already exists in map?
            int complement = target-nums[i];
            
            if ( mpp.find(complement) != mpp.end() ){
                // yes complement already exists
                // immediatrly return the complement's idx and current idx
                return {mpp[complement], i};
            }

            // complement -> do not exists
            // store current num into mpp
            mpp[nums[i]]=i;
        }
    return {};
    }
};