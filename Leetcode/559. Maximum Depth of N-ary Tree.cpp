
class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL) return 0;
        int cur=1;
        for(auto v: root->children)
        {
            cur=max(cur,maxDepth(v) + 1);
            
        }
        return cur;
        
    }
    
};