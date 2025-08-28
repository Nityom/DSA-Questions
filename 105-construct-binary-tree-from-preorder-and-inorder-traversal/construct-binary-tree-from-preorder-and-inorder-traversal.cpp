/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {

    TreeNode* helper(vector<int>& preorder, int left, int right) {
        if (left > right)
            return nullptr;

        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);
        int mid = m[rootVal];

        root->left = helper(preorder, left, mid - 1);
        root->right = helper(preorder, mid + 1, right);
        return root;
    }

public:
    unordered_map<int, int> m;
    int preIndex = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            m[inorder[i]] = i;

        }
                    return helper(preorder, 0, inorder.size() - 1);
    }
};
