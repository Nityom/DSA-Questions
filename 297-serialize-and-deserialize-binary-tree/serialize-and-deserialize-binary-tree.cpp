/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:
    // Serialize with preorder traversal
    string serialize(TreeNode* root) {
        if (!root) return "#";  // null marker
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }

    // Helper for deserialization
    TreeNode* deserializeHelper(queue<string>& nodes) {
        string val = nodes.front(); nodes.pop();
        if (val == "#") return nullptr;
        
        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(nodes);
        root->right = deserializeHelper(nodes);
        return root;
    }

    // Deserialize string back to tree
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        string item;
        queue<string> nodes;
        
        while (getline(ss, item, ',')) {
            nodes.push(item);
        }
        return deserializeHelper(nodes);
    }
};
