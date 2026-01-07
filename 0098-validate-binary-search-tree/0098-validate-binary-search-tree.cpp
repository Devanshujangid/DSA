class Solution {
public:
    bool isValidBST(TreeNode* root, long long minAllowed, long long maxAllowed) {
        if (root == NULL) return true;

        if (root->val <= minAllowed || root->val >= maxAllowed)
            return false;

        return isValidBST(root->left, minAllowed, root->val) &&
               isValidBST(root->right, root->val, maxAllowed);
    }

    bool isValidBST(TreeNode* root) {
        return isValidBST(root, LLONG_MIN, LLONG_MAX);
    }
};
