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
        
        // If there is no left child, we must check the right subtree
        if (!root->left) return minDepth(root->right) + 1;
        
        // If there is no right child, we must check the left subtree
        if (!root->right) return minDepth(root->left) + 1;
        
        // If both children exist, take the minimum of both paths
        return min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};