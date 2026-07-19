class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // logic: 
        // step 1: declare a hashmap
        // step 2: traverse the array
        // step 3: for each current element find complement=target-current
        // step 4: now check if complement exists in map
        // if yes then store current element and that map element

        // to store the result
        vector<int>result;
        int complement;

        unordered_map<int,int>mpp; // key - value pair
        // key : array element
        // value : index
        for ( int i=0 ; i<nums.size() ; i++ ){
            complement = target - nums[i];
            if (mpp.count(complement)){
                // if complement exists:
                // store complement and current element in map.
                result.push_back(mpp[complement]);
                result.push_back(i);
            } else{
                // if complement do not exists
                // then directly store that element in map
                mpp[nums[i]]=i;
            }
        }

        return result;
    }
};