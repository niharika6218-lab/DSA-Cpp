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
    int minDepth(TreeNode* root) {
       if (!root) return 0;
        
        // If left child is missing, we must go right
        if (!root->left) return minDepth(root->right) + 1;
        
        // If right child is missing, we must go left
        if (!root->right) return minDepth(root->left) + 1;
        
        // Custom min calculation without using std::min
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);
        
        return (leftDepth < rightDepth ? leftDepth : rightDepth) + 1;
    }

};