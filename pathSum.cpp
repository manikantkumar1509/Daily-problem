class Solution {
public:
   int ans = 0;
   void pathToOne(TreeNode* root, long long sum){
        if(!root){
            return;
        }
        if(sum == root->val){
            ++ans;
        }
        pathToOne(root->left, sum - root->val);
        pathToOne(root->right, sum - root->val);
   }
    int pathSum(TreeNode* root, long long targetSum) {
        if(root){
            pathToOne(root, targetSum);
            pathSum(root->left, targetSum);
            pathSum(root->right, targetSum);
        }
        return ans;
    }
};