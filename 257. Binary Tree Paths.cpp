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
    void dfs(vector<string>& res,string curr,TreeNode* root){
        if(root->left==NULL && root->right==NULL){
            curr+=to_string(root->val);
            res.push_back(curr);
            curr.pop_back();
            return;
        }
        curr+=to_string(root->val);
        curr+="->";
        if(root->left!=NULL) dfs(res,curr,root->left);
        if(root->right!=NULL) dfs(res,curr,root->right);
        curr.pop_back();
        curr.pop_back();
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
     vector<string>ans;
     string curr;
     dfs(ans,curr,root);  
     return ans; 
    }
};
