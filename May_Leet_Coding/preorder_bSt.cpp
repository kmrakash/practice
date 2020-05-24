class Solution {
public:
    
    
    
         TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (empty(preorder)) {
            return nullptr;
        }
        
        TreeNode* root = new TreeNode(preorder[0]);
        stack<TreeNode*> to_process;
        to_process.emplace(root);
        
        for (int i = 1; i < preorder.size(); ++i) {
            auto node = to_process.top();
            
            while (!empty(to_process) && to_process.top()->val < preorder[i]) {
                node = to_process.top();
                to_process.pop();
            }
            
            if (preorder[i] < node->val) {
                node->left = new TreeNode(preorder[i]);
                to_process.emplace(node->left);
            } else {
                node->right = new TreeNode(preorder[i]);
                to_process.emplace(node->right);
            }
        }
        
        return root;
    }
        
    
};
