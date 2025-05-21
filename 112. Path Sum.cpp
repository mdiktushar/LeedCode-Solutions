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
    void check (TreeNode* root, int targetSum, bool &f, int sum) {
        if (root == nullptr) {
            return;
        }
        sum += root->val;
        if (root->left == nullptr && root->right == nullptr) {
            if (sum == targetSum) f = true;
            return;
        }
        check(root->left, targetSum, f, sum);
        check(root->right, targetSum, f, sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool f = false;
        int sum = 0;
        check(root, targetSum, f, sum);

        return f;
    }
};
