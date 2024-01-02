// (94) Binary Tree Inorder Traversal
// 9ms (5.24%)
// 8.98MB (19.85%)

using namespace std;
#include <vector>
#include <iterator>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderPerNode(root, result);
        return result;
    }

    void inorderPerNode(TreeNode* root, vector<int>& result) {
        if (root == nullptr) {
            return;
        }

        // Traverse left subtree
        inorderPerNode(root->left, result);

        // Visit current node
        result.push_back(root->val);

        // Traverse right subtree
        inorderPerNode(root->right, result);
    }
};