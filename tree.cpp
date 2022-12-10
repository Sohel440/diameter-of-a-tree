class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node*root){
        if(root== NULL)
        return 0;
        
        int left = height(root->left);
        int right = height(root-> right);
        
        int ans = max (left , right)+1;
        return ans;
    }
    int diameter(Node* root) {
        // Your code here
        
        if(root == NULL)
        return 0;
        
        
        int op = diameter(root->left);
        int op1 = diameter(root->right);
        
        int op3= height(root->left) + height(root->right) + 1;
        int ans = max(op ,max(op1 , op3));
        return ans;
    }
};
