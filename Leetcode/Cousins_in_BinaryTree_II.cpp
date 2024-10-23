class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<pair<TreeNode*,int> > q;
        q.push({root,0});
        int curr_sum=root->val;    
        while(!q.empty()){
            int sz=q.size();
            int next_sum = 0;
            for(int i=0;i<sz;i++){
                auto it=q.front();
                TreeNode* node= it.first;
                int sibling= it.second;
                q.pop();
                int newVal= curr_sum-sibling- node->val;
                node->val=newVal;
                int left=0, right=0;
                if(node->left){
                    left=node->left->val;
                }
                if(node->right){
                    right=node->right->val;
                }
                if(node->left){
                    q.push({node->left, right});
                    next_sum+=node->left->val;
                }
                if(node->right){
                    q.push({node->right, left});
                    next_sum+=node->right->val;

                }
            }
            curr_sum=next_sum;
        }
        return root;
    }
};
