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
    int NumberOfLevel(TreeNode* root){
    if(!root) return 0;
    return 1 + max((NumberOfLevel(root->left)),(NumberOfLevel(root->right)));
}
    void levelOder(TreeNode* root,int lev,vector<long long>& temp){
    if(!root) return;
        temp[lev-1] += root->val;
    levelOder(root->left,lev+1,temp);
    levelOder(root->right,lev+1,temp);
}
    long long kthLargestLevelSum(TreeNode* root, int k) 
    {
            long long numberOfLev = NumberOfLevel(root);
            if(numberOfLev<k) return -1;
            vector<long long>temp(numberOfLev,0);
            levelOder(root,1,temp);
            sort(temp.begin(),temp.end());
            for(auto e : temp) cout<<e<<",";
            return temp[numberOfLev - k];
    }
};
