class Solution {
public:
    bool valid(TreeNode* root, TreeNode* mini, TreeNode* maxi){
        if(root==NULL) return true;
        if((mini != NULL && root->val <= mini->val) || (maxi != NULL && root->val >= maxi->val))        return false;

       return valid(root->left, mini, root) && valid(root->right, root, maxi);
    }
    bool isValidBST(TreeNode* root) {
    
        return valid(root, NULL, NULL);
    }
};
