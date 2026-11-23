/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void dfs(Node* node, vector<int>& result) {
        if (!node) return;
        
        // 1. Visit the root
        result.push_back(node->val);
        
        // 2. Traverse children from left to right
        for (Node* child : node->children) {
            dfs(child, result);
        }
    }

public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        dfs(root, result);
        return result;
    }
};