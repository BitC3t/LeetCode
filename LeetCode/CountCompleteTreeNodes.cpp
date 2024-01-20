// (222) Count Complete Tree Nodes
// 22ms (82.55%)
// 29.29MB (99.81%)

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int count = 0;

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }

        count++;
        countNodes(root->left);
        countNodes(root->right);

        return count;
    }
};