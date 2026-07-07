class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // tricky one:
        // if k is larger than size of array - to prevent overflow
        if (nums.size()>0)  k=k%nums.size();
        // step 1: reverse of whole array
        reverse(nums.begin(),nums.end());
        // step 2: reverse from 0 to k-1 && from k to n-1
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end()); 
    }
};