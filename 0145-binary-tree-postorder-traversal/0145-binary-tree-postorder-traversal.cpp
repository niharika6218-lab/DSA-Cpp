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
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {};
        
        vector<int> result;
        stack<TreeNode*> s;
        s.push(root);
        
        while (!s.empty()) {
            TreeNode* curr = s.top();
            s.pop();
            
            // 1. Visit Root
            result.push_back(curr->val);
            
            // 2. Push Left child first (so Right child is popped & processed next)
            if (curr->left) s.push(curr->left);
            
            // 3. Push Right child
            if (curr->right) s.push(curr->right);
        }
        
        // Reverse the entire result to convert Root->Right->Left into Left->Right->Root
        reverse(result.begin(), result.end());
        return result;
    }
    
};