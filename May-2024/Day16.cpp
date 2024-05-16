// Day16 16-05-24
// Question Number --> 2331 Evaluate Boolean Binary Tree
// Link  --> https://leetcode.com/problems/evaluate-boolean-binary-tree/?envType=daily-question&envId=2024-05-16

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
    bool evaluateTree(TreeNode* root) {
        if(root->left==NULL || root->right==NULL){
            if(root->val==1) return true;
            else return false;
        }
        bool lft = evaluateTree(root->left);
        bool rgt = evaluateTree(root->right);
        if(root->val==2) return lft || rgt;
        else return lft && rgt; 
    }
};
