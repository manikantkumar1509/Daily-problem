class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root ==NULL){
             return 0;
        }
        int sum = 0;
        if(root->left){
            if(!root->left->left && !root->left->right)
               sum+= root->left->val;
               else 
                 sum +=sumOfLeftLeaves(root->left);
        }
        sum += sumOfLeftLeaves(root->right);

        return sum;
        
    }
};