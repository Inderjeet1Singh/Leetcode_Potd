// Day18
// 979. Distribute Coins in Binary Tree

// Solution

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
      int answer(TreeNode* root, TreeNode* temp) {
        if (root==NULL) return 0;
        int  ans=answer(root->left, root)+answer(root->right, root);
        int diff=root->val-1;
        if (temp!=NULL){
             temp->val += diff;
        }
        ans = ans +  abs(diff);
        return ans;
      }
    int distributeCoins(TreeNode* root) {
        return answer(root,NULL);
    }
};
