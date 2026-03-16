class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // optimal 
        // reverse the array->reverese from 0-k and -> then reverse from k-n
        int n = nums.size();
        k = k%n;  // rotation repats after n
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};