// (144) Binary Tree Preorder Traversal
// 0ms (100% - WOOOOOOOOOOOOO)
// 8.86MB (46.46%)

using namespace std;
#include <vector>


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
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int> result;
            preorderTraversal(root, result);
            return result;
        }

        void preorderTraversal(TreeNode* root, vector<int>& result) {
            if(root == nullptr) {
                return;
            }

            preorderTraversal(root->left, result);
            preorderTraversal(root->right, result);
            result.push_back(root->val);
        }
};