class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        // find the index from where the next greater permuted number will form 
        int idx=-1;
        for ( int i=n-2 ; i>=0  ; i-- ){   // ->O(n)
            if ( nums[i]<nums[i+1] ){
                idx=i;
                break;
            }
        }
        if ( idx==-1 ) {
            reverse(nums.begin(),nums.end()); // edge case
            return;
        }

        // find somone greater than that idx element but the smallest one 
        // start loop from last and swap
        for ( int i=n-1 ; i>idx ; i-- ){ // O(n)
            if ( nums[i]>nums[idx] ){
                swap(nums[i],nums[idx]);
                break;
            }
        }

        // now arrange the reamining elements it they are large make them small
        // just reverse the remaining part of array->as this will make as small as possible
        reverse(nums.begin()+idx+1 , nums.end() ); // ->>O(n)
        // final t.c->O(n) and S.C->O(1)
    }
};