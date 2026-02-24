class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // recurrsion + backtracking will work here 
        int idx=0; // initial index=0
        vector<vector<int>>ans; // will store final answer
        vector<int>current_comb; // will store the perfect combinations for answer
        // recursive function
        solve(candidates,idx,target,current_comb,ans);
        return ans;
    }

    void solve(vector<int>&candidates,int idx,int target,vector<int>&current_comb,vector<vector<int>>&ans){
         // recursive function

         // base case 1
         if ( target==0 ) {
            // store curr combination and return 
            ans.push_back(current_comb);
            return;
         }
         // base case 2- if by chance
         if ( target<0 || idx>=candidates.size()){
            // stop 
            return;
         }

         //take
         current_comb.push_back(candidates[idx]);
         solve(candidates,idx,target-candidates[idx],current_comb,ans);
         // pop back
         current_comb.pop_back();
         // not take
         solve(candidates,idx+1,target,current_comb,ans);
    }
};