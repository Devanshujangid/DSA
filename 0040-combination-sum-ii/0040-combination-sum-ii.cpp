class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int idx=0; 
        vector<vector<int>>ans;
        vector<int>curr_comb;  // ans.push_back(ds);
        helper(idx,candidates,target,curr_comb,ans); // recursive function
        return ans;
    }
    
   void helper(int idx,
            vector<int>& candidates,
            int target,
            vector<int>& curr,
            vector<vector<int>>& ans) {

    if (target == 0) {
        ans.push_back(curr);
        return;
    }

    if (idx >= candidates.size() || target < 0)
        return;

    // 🔹 TAKE current element
    curr.push_back(candidates[idx]);
    helper(idx + 1, candidates, target - candidates[idx], curr, ans);
    curr.pop_back();

    // 🔹 SKIP all duplicates of current element
    int nextIdx = idx + 1;
    while (nextIdx < candidates.size() &&
           candidates[nextIdx] == candidates[idx]) {
        nextIdx++;
    }

    helper(nextIdx, candidates, target, curr, ans);
}
    
};