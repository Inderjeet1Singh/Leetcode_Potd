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
    bool helper(TreeNode* r1,TreeNode* r2){
        if(r1==NULL && r2==NULL){
            return true;
        }
        if((r1!=NULL && r2==NULL) || (r1==NULL && r2!=NULL)){
            return false;
        }
        if(r1->val != r2->val) return false;
        if((helper( r1->left,r2->left) && helper( r1->right,r2->right))) return true;
        return( helper( r1->left,r2->right) && helper( r1->right,r2->left));
    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return helper(root1,root2);
    }
};
