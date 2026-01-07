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
    bool isValidBST(TreeNode* root, long long min_Allowed , long long max_Allowed) {
        // keep in mind
        // Follow the Global BST rule->
       //  1. Each node->val > all values in left subtree
       //  2. Each node->val < all values in right subtree
       
       // for every node we will maintain a min_Allowed and max_Allowed
       // such that -> min.Allowed < node->val < max.Allowed
       
       // base case 
       if (root==NULL) return true;

       // check  for the root value first
       if ( min_Allowed >= root->val || max_Allowed <= root->val  ) return false;
       return isValidBST(root->left, min_Allowed, root->val) &&
               isValidBST(root->right, root->val, max_Allowed);
    }
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, LLONG_MIN, LLONG_MAX);
    }
};