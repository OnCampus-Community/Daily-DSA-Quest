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

    // Created a traverse function which copied the whole tree roots to a vector
    void traverse(TreeNode* root, vector<int>& res){
        if(root == NULL){
            return;
        }
        res.push_back(root->val);
        traverse(root->left, res);
        traverse(root->right, res);
    }

    void flatten(TreeNode* root) {
        if(root == NULL || (root->left == NULL && root->right == NULL)){
            return;
        }
        vector<int> res;
        traverse(root, res);
        TreeNode* ptr = root;
        // put the value of the nodes in the array for every node declare its left NULL
        for(int i=0; i<res.size(); i++){ 
            ptr->val = res[i];
            ptr->left = NULL;
            if(ptr->right == NULL && i+1 < res.size()){
                ptr -> right = new TreeNode(0);
            }
            ptr = ptr->right;
        }
        return;
    }
};
