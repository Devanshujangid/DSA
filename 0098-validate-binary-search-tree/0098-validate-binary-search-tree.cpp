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
    bool isValidBST(TreeNode* root) {
        return helper(root,LLONG_MIN,LLONG_MAX);
    }

    bool helper(TreeNode* root, long long min_Allowed , long long max_Allowed ){
        if ( root==NULL ) return true;
        if ( min_Allowed >= root->val || max_Allowed <= root->val ) return false;
    

        return helper( root->left,min_Allowed,root->val ) && helper( root->right,root->val,max_Allowed );
    }
};