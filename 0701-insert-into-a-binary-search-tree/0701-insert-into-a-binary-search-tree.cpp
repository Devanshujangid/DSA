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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if ( root==NULL ) return new TreeNode(val);
        // create a copy of this node
        TreeNode* curr=root;
        //keep traversing
        while (true){
            // if current value < value to be inserted -->> move to right
            if ( curr->val < val ){
                // if the place at right is not null--> keep moving right
                if ( curr->right != NULL ){
                    curr = curr->right;
                }
                else{
                    // insert it here-->insertion should be on right side
                    curr->right = new TreeNode(val);  // for insertion make a new node
                    // as soon as you inserted 
                    break;
                }
            }
            // if current value > value to be inserted -->> move to left
            else {
                // if the place at left is not null--> keep moving left
                if ( curr->left != NULL ) {
                    curr = curr->left;
                }
                else{
                    // insert it here in left
                    curr->left= new TreeNode(val);
                    // as soon as you inserted 
                    break;
                }
            }
            
        }
        return root;
    }
};