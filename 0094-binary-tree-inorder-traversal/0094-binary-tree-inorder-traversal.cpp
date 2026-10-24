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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        
        while (curr != nullptr || !s.empty()) {
            // 1. Go to the leftmost node of the current subtree
            while (curr != nullptr) {
                s.push(curr);
                curr = curr->left;
            }
            
            // 2. Current is now nullptr, pop from stack
            curr = s.top();
            s.pop();
            
            // 3. Visit Root
            result.push_back(curr->val);
            
            // 4. We have visited the node and its left subtree. Now, turn right.
            curr = curr->right;
        }
        
        return result;
    }
};