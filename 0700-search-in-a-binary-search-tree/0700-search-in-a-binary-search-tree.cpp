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
    TreeNode* searchBST(TreeNode* root, int val) {
        // ans vector to store the answer/subtree
        //vector<TreeNode*>ans;
        // start from root
        if ( root==NULL ) return NULL;
        if ( root->val==val ) return root;
        // then return the whole subtree respect to this root    
        else if (root->val>val) return searchBST(root->left,val);
        else return searchBST(root->right,val);    
    }
};