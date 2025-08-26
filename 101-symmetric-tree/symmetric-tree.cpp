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

      bool compareNode(TreeNode* left, TreeNode* right){
        if (!left && !right) return true;             
        if (!left || !right) return false;            
        if (left->val != right->val) return false;    

    return compareNode(left->left, right->right) && 
               compareNode(left->right, right->left);
      }
public:
    bool isSymmetric(TreeNode* root) {
        if(root ==NULL) return true;
      return compareNode(root->left, root->right);
    }
};