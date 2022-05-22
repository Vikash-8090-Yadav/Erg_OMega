/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void in_ord(TreeNode *original,TreeNode *cloned, TreeNode *target,TreeNode* (&v1)){

    if(original == NULL){
        return;
    }
    in_ord(original->left,cloned->left,target,v1);
    in_ord(original->right,cloned->right,target,v1);
     if(original == target){
        v1 = cloned;
    }
    
}


    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            if(original == NULL){
        return NULL;
    }
    TreeNode* v1 = NULL;
    in_ord(original,cloned,target,v1);
     return v1;   
    }
};