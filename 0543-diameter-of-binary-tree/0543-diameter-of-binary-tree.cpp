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
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        int left=solve(root->left);
        int right=solve(root->right);
        
        int ans=max(left,right)+1;
        return ans;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;

        int op1=diameterOfBinaryTree(root->left);
        int op2=diameterOfBinaryTree(root->right);
        int op3=solve(root->left)+solve(root->right);

        int ans=max(op1,max(op2,op3));
        return ans;

    }
};