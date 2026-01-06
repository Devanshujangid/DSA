/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=-1; // this is what we will return 
    int seen_count=0; // how many times you seen that root?
    
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }

    void inorder(TreeNode* root, int k){
        // base case
        if ( !root || ans!=-1 ) return;

        inorder(root->left,k);
        if ( ans!=-1) return; // prevent right traversal
        seen_count++;
        // when seen_count==k return that node
        if ( seen_count==k ) {
            ans=root->val;
            return;
        }
        inorder(root->right,k);
    }
};