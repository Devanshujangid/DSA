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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if ( root==NULL ) return NULL;
        if ( root->val==key ) return helper(root);

        TreeNode* dummy=root;
        while ( root!=NULL ){
            if ( root->val > key ){
                // move left
                if ( root->left!=NULL && root->left->val==key ){
                    root->left=helper(root->left);
                    break;
                }
                
               root=root->left;
            }
            // root->val < key --->> move right
            else{ 
                // move right
                if ( root->right!=NULL && root->right->val==key ){
                    root->right=helper(root->right);
                    break;
                }
                
                root=root->right;
            }
        }
        return dummy;
    }

    TreeNode* helper(TreeNode* root){
        // main work of this function 
        // to find the last_right where the remaining child need to be attached
        if ( root->left == NULL ) return root->right;
        else if ( root->right == NULL ) return root->left;

        TreeNode* rightChild=root->right;
        TreeNode* lastRight=findlastRight(root->left);
        
        lastRight->right=rightChild;
        return root->left;
    }

    TreeNode* findlastRight(TreeNode* root){
        // this function only find the last right node where the attachement needs to be done
        if ( root->right==NULL ) return root;
        return findlastRight(root->right);
    }
};