// (252) Binary Tree Paths
// 4ms (52.66%)
// 17.73MB (6.08%)

using namespace std;

#include <iostream>
#include <vector>
#include <stack>


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {};
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {};
};

class Solution {
vector<string> paths;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root, "");
        return paths;
    }

    void dfs(TreeNode* root, string str) {
        if(root == nullptr) {
            return;
        }

        if(str.empty()) {
            str += (to_string(root->val));
        }
        else {
            str += (str + "->" + to_string(root->val));
        }

        if(root->left == nullptr && root->right == nullptr) {
            paths.push_back(str);
        }

        dfs(root->left, str);
        dfs(root->right, str);
    }
};