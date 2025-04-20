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

    void travels(TreeNode* p, vector<long long>& vect)
    {
        if (p == NULL) {
            vect.push_back(100000);
            return;
        }

        vect.push_back(p->val);
        travels(p->left, vect);
        travels(p->right, vect);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<long long>v1,v2;
        
        travels(p, v1);
        travels(q, v2);

        return v1 == v2;
    }
};
