// (530) Minimum Absolute Difference in BST
// 8ms (90.05%)
// 24.33MB (82.86%)

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

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
    vector<int> array;
    int getMinimumDifference(TreeNode* root) {
        inOrderTraversal(root);
        
        sort(array.begin(), array.end());

        int min = INT_MAX;

        for(int i = 0; i < array.size(); i++) {
            if(array[i+1] - array[i] > min) {
                continue;
            } else {
                min = array[i+1] - array[i];
            }
        }

        return min;
   }

   void inOrderTraversal(TreeNode* root) {
       if (root == nullptr) {
           return;
       }

       // Traverse left subtree
       inOrderTraversal(root->left);

       // Visit current node
       array.push_back(root->val);

       // Traverse right subtree
       inOrderTraversal(root->right);
   }
};