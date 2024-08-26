class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;

    int l = minDepth(root->left);
    int r = minDepth(root->right);
       if(root->left && root->right)
       {
           return min(l,r) + 1;
       }
       return max(l,r) + 1;
  
     }
};